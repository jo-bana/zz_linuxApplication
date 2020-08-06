obj=add.o method1.o method2.o method3.o 

all:add

add:$(obj)
	gcc $^ -o $@

.PHONY:clean
clean:
	rm -rf add add.o method1.o method2.o method3.o	
