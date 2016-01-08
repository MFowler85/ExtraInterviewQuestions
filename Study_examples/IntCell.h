/* 
 * File:   IntCell.h
 * Author: mcf8379
 *
 * Created on June 12, 2015, 8:28 AM
 */

#ifndef INTCELL_H
#define	INTCELL_H

class IntCell {
public:
    explicit IntCell(int initialvalue = 1);
    int read() const;
    void write(int x);
private:
    int storedValue;
};

#endif	/* INTCELL_H */

