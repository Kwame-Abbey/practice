#!/usr/bin/python3
"""Get city using state name"""

if __name__ == '__main__':
    import MySQLdb
    from sys import argv

    db = MySQLdb.connect(host='localhost', user=argv[1], passwd=argv[2],
                         db=argv[3], port=3306)

    cur = db.cursor()
    cur.execute("""SELECT name\
                FROM cities\
                WHERE state_id = (\
                SELECT id\
                FROM states\
                WHERE name = %(state_name)s\
                )""", {
                    'state_name': argv[4]
                })

    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
