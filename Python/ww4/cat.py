import sys
number_of_args = len(sys.argv)

if number_of_args < 2:              #can input two or more files
    sys.stderr.write('Usage: %s inputfiles\n' % sys.argv[0])
    sys.exit(1)

for filename in sys.argv[1:]:       #read 1 to last
    try:
        fh = open(filename, 'r')
    except:
        sys.stderr.write('cannot open input file %s\n' % filename)
        sys.exit(2)

for line in fh.readlines():
    print(line, end='')
fh.close()
