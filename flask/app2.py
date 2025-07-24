from flask import Flask, render_template, request

app2 = Flask(__name__)

@app2.route("/greet", methods=["post"])


    
def greet():
    name = request.args.get("name")  
    return render_template("greet.html", name=name)

if __name__ == "__main__":
    app2.run(debug=True)
