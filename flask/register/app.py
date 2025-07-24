from flask import Flask, render_template, request

registrants = {}  # Correct spelling

SPORTS = [
    "Cricket",
    "Football",
    "Swimming",
]

app = Flask(__name__, template_folder=".")

@app.route("/")
def index():
    return render_template("index.html", sport_list=SPORTS)  # Must match the template variable

@app.route("/register", methods=['POST'])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")

    if not name or sport not in SPORTS:
        return render_template("failure.html")

    registrants[name] = sport
    return render_template("register.html", name=name, sport=sport)

if __name__ == "__main__":
    app.run(debug=True)
