
out:main.o add_stud.o display.o save.o load.o modify.o delete1.o sort.o
	cc main.c add_stud.c display.c save.c load.c modify.c delete1.c sort.c -o out
main.o:main.c header.h
	cc -c main.c
add_stud.o:add_stud.c header.h
	cc -c add_stud.c
save.o:save.c  header.h
	cc -c save.c
load.o:load.c header.h
	cc -c load.c
display.o:display.c header.h
	cc -c display.c
modify.o:modify.c header.h
	cc -c modify.c
delete.o:delete1.c header.h
	cc -c delete1.c
sort.o:sort.c header.h
	cc -c sort.c


