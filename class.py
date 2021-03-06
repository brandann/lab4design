#python c++ class

import sys

in_file = open('classes.txt', "r")
a = []
for lines in in_file:
    a.append(lines.strip())
    
for cl in a:
    name = cl
    namel = name.lower()
    nameu = name.upper()

    out_file = open('headers/' + namel + ".h", "w")
    out_file.write('//%s.h\n'% namel)
    out_file.write('\n')
    out_file.write('#ifndef %s_H\n'% nameu)
    out_file.write('#define %s_H\n'% nameu)
    out_file.write('\n')
    out_file.write('#include <iostream>\n')
    out_file.write('class %s\n'% name)
    out_file.write('{\n')
    out_file.write('\tpublic:\n')
    out_file.write('\t\t%s();\n'% name)
    out_file.write('\t\t~%s();\n'% name)
    out_file.write('\n')
    out_file.write('\tprotected:\n')
    out_file.write('\n')
    out_file.write('\tprivate:\n')
    out_file.write('\n')
    out_file.write('};\n')
    out_file.write('\n')
    out_file.write('#endif // %s_H\n'% nameu)
    out_file.close()


    out_file = open('classes/' + namel + ".cpp", "w")
    out_file.write('//%s.cpp\n'% namel)
    out_file.write('\n')
    out_file.write('#include "%s.h"\n'% namel)
    out_file.write('\n')
    out_file.write('using namespace std;\n')
    out_file.write('\n')
    out_file.write('%s::%s()\n'% (name, name))
    out_file.write('{\n')
    out_file.write('\t\n')
    out_file.write('}\n')
    out_file.write('\n')
    out_file.write('%s::~%s()\n'% (name, name))
    out_file.write('{\n')
    out_file.write('\t\n')
    out_file.write('}\n')
    out_file.close()
