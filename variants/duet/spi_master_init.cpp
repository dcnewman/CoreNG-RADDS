#include "Arduino.h"
#include "compiler.h"
#include "variant.h"
#include "spi_master_init.h"

extern "C" void spi_master_init_pins(void)
{
	ConfigurePin(g_APinDescription[APIN_SPI_SCK]);
	ConfigurePin(g_APinDescription[APIN_SPI_MOSI]);
	ConfigurePin(g_APinDescription[APIN_SPI_MISO]);
}
