#!/usr/bin/python3
"""Filters state by user input"""

if __name__ == '__main__':
    from sys import argv
    import MySQLdb

    db = MySQLdb.connect(host='localhost', user=argv[1],
                         passwd=argv[2], db=argv[3], port=3306)

    cur = db.cursor()
    cur.execute("""SELECT *\
                FROM states\
                WHERE name = '{}'\
                ORDER BY states.id\
                """.format(argv[4])
                )

    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
