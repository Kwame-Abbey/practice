#!/usr/bin/python3
"""Use inner join"""

if __name__ == '__main__':
    import MySQLdb
    from sys import argv

    db = MySQLdb.connect(host='localhost', user=argv[1], passwd=argv[2],
                         db=argv[3], port=3306)

    cur = db.cursor()
    cur.execute("""SELECT cities.id, cities.name, states.name\
                FROM cities\
                INNER JOIN states\
                ON states.id = cities.state_id\
                """)

    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
