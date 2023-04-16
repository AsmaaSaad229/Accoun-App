#include "I_Printable.h"

ostream& operator<<(ostream& os, const I_Printable& print) {
	print.print(os);
	return os;
}