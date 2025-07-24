import sqlite3

conn = sqlite3.connect("fav.db")
conn.row_factory = sqlite3.Row
cursor = conn.cursor()
cursor.execute("SELECT * FROM fav")
rows = cursor.fetchall()

for row  in rows:
  print(f"{row['problem']}, {row['Timestamp']}")

