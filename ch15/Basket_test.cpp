#include "Basket.h"
#include <fstream>

int main()
{
    Basket basket;

	for (unsigned i = 0; i != 10; ++i)
		basket.add_item(Bulk_quote("Bible", 20.6, 20, 0.3));

	for (unsigned i = 0; i != 10; ++i)
		basket.add_item(Bulk_quote("C++Primer", 30.9, 5, 0.4));

	for (unsigned i = 0; i != 10; ++i)
		basket.add_item(Quote("CLRS", 40.1));

	std::ofstream log("log.txt", std::ios_base::app | std::ios_base::out);

	basket.total_receipt(log);

	// basket.total_receipt(std::cout);
	return 0;
}