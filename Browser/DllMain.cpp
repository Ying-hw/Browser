#include "browser_global.h"
#include "Browser.h"

extern "C" BROWSER_EXPORT AbstractWidget* Handle() {
	return new Browser();
}