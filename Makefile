#########################
#
CFILES := main.c
PROG := str2csv
CFLAGS := -Wall -pedantic
LDFLAGS :=
########################

CC := cc


$(PROG) : $(OBJFILES)
	$(CC) $(CFLAGS) $(CFILES) -o $@ 

clean :
	rm -f $(PROG)

