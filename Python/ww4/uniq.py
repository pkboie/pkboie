import sys
number_of_args = len(sys.argv)

if number_of_args != 2:     #need only one file
    sys.stderr.write('Usage: %s inputfile\n' % sys.argv[0])
    sys.exit(1)
'Due'
try:
    fh = open(sys.argv[1], 'r')
except:
    sys.stderr.write('cannot open input file %s\n' % sys.argv[1])
    sys.exit(2)

previous_line = ''
for line in fh.readlines():
    if line != previous_line:
        print(line, end = '')
    previous_line = line
fh.close()
