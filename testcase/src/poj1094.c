char input_buffer[] = 
"\x34\x20\x36\x0A\x41\x3C\x42\x0A\x41\x3C"
"\x43\x0A\x42\x3C\x43\x0A\x43\x3C\x44\x0A"
"\x42\x3C\x44\x0A\x41\x3C\x42\x0A\x33\x20"
"\x32\x0A\x41\x3C\x42\x0A\x42\x3C\x41\x0A"
"\x32\x36\x20\x31\x0A\x41\x3C\x5A\x0A\x34"
"\x20\x36\x0A\x44\x3C\x42\x0A\x44\x3C\x41"
"\x0A\x44\x3C\x43\x0A\x43\x3C\x41\x0A\x43"
"\x3C\x42\x0A\x41\x3C\x42\x0A\x31\x30\x20"
"\x34\x30\x0A\x43\x3C\x49\x0A\x45\x3C\x47"
"\x0A\x41\x3C\x4A\x0A\x46\x3C\x42\x0A\x44"
"\x3C\x45\x0A\x46\x3C\x44\x0A\x43\x3C\x42"
"\x0A\x45\x3C\x48\x0A\x47\x3C\x49\x0A\x44"
"\x3C\x42\x0A\x43\x3C\x48\x0A\x41\x3C\x42"
"\x0A\x4A\x3C\x49\x0A\x44\x3C\x47\x0A\x41"
"\x3C\x45\x0A\x43\x3C\x47\x0A\x45\x3C\x42"
"\x0A\x48\x3C\x47\x0A\x43\x3C\x41\x0A\x46"
"\x3C\x4A\x0A\x42\x3C\x47\x0A\x44\x3C\x4A"
"\x0A\x45\x3C\x4A\x0A\x44\x3C\x48\x0A\x43"
"\x3C\x46\x0A\x42\x3C\x4A\x0A\x47\x3C\x4A"
"\x0A\x42\x3C\x48\x0A\x44\x3C\x41\x0A\x46"
"\x3C\x49\x0A\x41\x3C\x48\x0A\x43\x3C\x45"
"\x0A\x46\x3C\x48\x0A\x41\x3C\x47\x0A\x42"
"\x3C\x49\x0A\x46\x3C\x41\x0A\x48\x3C\x4A"
"\x0A\x46\x3C\x47\x0A\x46\x3C\x45\x0A\x43"
"\x3C\x4A\x0A\x31\x35\x20\x36\x30\x0A\x42"
"\x3C\x4D\x0A\x4D\x3C\x48\x0A\x4E\x3C\x47"
"\x0A\x4E\x3C\x45\x0A\x49\x3C\x44\x0A\x42"
"\x3C\x44\x0A\x41\x3C\x4A\x0A\x4F\x3C\x44"
"\x0A\x44\x3C\x4A\x0A\x46\x3C\x45\x0A\x49"
"\x3C\x4C\x0A\x46\x3C\x42\x0A\x49\x3C\x43"
"\x0A\x43\x3C\x45\x0A\x49\x3C\x4B\x0A\x49"
"\x3C\x4A\x0A\x41\x3C\x45\x0A\x42\x3C\x4C"
"\x0A\x47\x3C\x4A\x0A\x41\x3C\x47\x0A\x4E"
"\x3C\x48\x0A\x48\x3C\x4A\x0A\x4B\x3C\x4E"
"\x0A\x4B\x3C\x45\x0A\x46\x3C\x4A\x0A\x43"
"\x3C\x44\x0A\x4B\x3C\x4D\x0A\x47\x3C\x4C"
"\x0A\x46\x3C\x48\x0A\x4D\x3C\x4C\x0A\x41"
"\x3C\x4B\x0A\x42\x3C\x4B\x0A\x45\x3C\x4C"
"\x0A\x42\x3C\x48\x0A\x46\x3C\x44\x0A\x4D"
"\x3C\x45\x0A\x4D\x3C\x47\x0A\x4E\x3C\x4C"
"\x0A\x4F\x3C\x4A\x0A\x44\x3C\x48\x0A\x42"
"\x3C\x4F\x0A\x42\x3C\x43\x0A\x41\x3C\x4C"
"\x0A\x49\x3C\x42\x0A\x46\x3C\x4C\x0A\x43"
"\x3C\x4C\x0A\x41\x3C\x43\x0A\x4E\x3C\x4F"
"\x0A\x41\x3C\x42\x0A\x46\x3C\x43\x0A\x4B"
"\x3C\x4A\x0A\x43\x3C\x47\x0A\x4F\x3C\x45"
"\x0A\x49\x3C\x4F\x0A\x44\x3C\x45\x0A\x49"
"\x3C\x4E\x0A\x46\x3C\x4E\x0A\x4D\x3C\x4A"
"\x0A\x48\x3C\x4C\x0A\x4E\x3C\x44\x0A\x31"
"\x35\x20\x36\x30\x0A\x42\x3C\x4D\x0A\x4D"
"\x3C\x48\x0A\x4E\x3C\x47\x0A\x4E\x3C\x45"
"\x0A\x49\x3C\x44\x0A\x42\x3C\x44\x0A\x41"
"\x3C\x4A\x0A\x4F\x3C\x44\x0A\x44\x3C\x4A"
"\x0A\x46\x3C\x45\x0A\x49\x3C\x4C\x0A\x46"
"\x3C\x42\x0A\x49\x3C\x43\x0A\x43\x3C\x45"
"\x0A\x49\x3C\x4B\x0A\x49\x3C\x4A\x0A\x41"
"\x3C\x45\x0A\x42\x3C\x4C\x0A\x47\x3C\x4A"
"\x0A\x41\x3C\x47\x0A\x4E\x3C\x48\x0A\x48"
"\x3C\x4A\x0A\x4B\x3C\x4E\x0A\x4B\x3C\x45"
"\x0A\x46\x3C\x4A\x0A\x43\x3C\x44\x0A\x4B"
"\x3C\x4D\x0A\x47\x3C\x4C\x0A\x46\x3C\x48"
"\x0A\x4D\x3C\x4C\x0A\x41\x3C\x4B\x0A\x42"
"\x3C\x4B\x0A\x45\x3C\x4C\x0A\x42\x3C\x48"
"\x0A\x46\x3C\x44\x0A\x4D\x3C\x45\x0A\x4D"
"\x3C\x47\x0A\x4E\x3C\x4C\x0A\x4F\x3C\x4A"
"\x0A\x44\x3C\x48\x0A\x4F\x3C\x42\x0A\x42"
"\x3C\x43\x0A\x41\x3C\x4C\x0A\x49\x3C\x42"
"\x0A\x46\x3C\x4C\x0A\x43\x3C\x4C\x0A\x41"
"\x3C\x43\x0A\x4E\x3C\x4F\x0A\x41\x3C\x42"
"\x0A\x46\x3C\x43\x0A\x4B\x3C\x4A\x0A\x43"
"\x3C\x47\x0A\x4F\x3C\x45\x0A\x49\x3C\x4F"
"\x0A\x44\x3C\x45\x0A\x49\x3C\x4E\x0A\x46"
"\x3C\x4E\x0A\x4D\x3C\x4A\x0A\x48\x3C\x4C"
"\x0A\x4E\x3C\x44\x0A\x32\x36\x20\x33\x32"
"\x35\x0A\x4A\x3C\x49\x0A\x4C\x3C\x50\x0A"
"\x4B\x3C\x53\x0A\x4D\x3C\x58\x0A\x4B\x3C"
"\x45\x0A\x48\x3C\x57\x0A\x5A\x3C\x53\x0A"
"\x47\x3C\x52\x0A\x46\x3C\x52\x0A\x41\x3C"
"\x59\x0A\x56\x3C\x44\x0A\x50\x3C\x58\x0A"
"\x50\x3C\x57\x0A\x4D\x3C\x53\x0A\x52\x3C"
"\x41\x0A\x47\x3C\x56\x0A\x43\x3C\x48\x0A"
"\x4F\x3C\x52\x0A\x41\x3C\x53\x0A\x4E\x3C"
"\x43\x0A\x56\x3C\x59\x0A\x41\x3C\x49\x0A"
"\x46\x3C\x5A\x0A\x56\x3C\x51\x0A\x56\x3C"
"\x52\x0A\x48\x3C\x49\x0A\x51\x3C\x54\x0A"
"\x4D\x3C\x51\x0A\x46\x3C\x41\x0A\x4A\x3C"
"\x58\x0A\x4D\x3C\x44\x0A\x43\x3C\x51\x0A"
"\x44\x3C\x45\x0A\x56\x3C\x46\x0A\x42\x3C"
"\x54\x0A\x58\x3C\x55\x0A\x44\x3C\x55\x0A"
"\x47\x3C\x59\x0A\x56\x3C\x42\x0A\x42\x3C"
"\x4A\x0A\x4E\x3C\x55\x0A\x4B\x3C\x5A\x0A"
"\x50\x3C\x53\x0A\x45\x3C\x55\x0A\x4F\x3C"
"\x59\x0A\x4D\x3C\x5A\x0A\x43\x3C\x49\x0A"
"\x46\x3C\x53\x0A\x47\x3C\x50\x0A\x4F\x3C"
"\x4A\x0A\x43\x3C\x53\x0A\x57\x3C\x55\x0A"
"\x5A\x3C\x59\x0A\x44\x3C\x4C\x0A\x48\x3C"
"\x54\x0A\x42\x3C\x51\x0A\x58\x3C\x57\x0A"
"\x44\x3C\x49\x0A\x4B\x3C\x42\x0A\x52\x3C"
"\x4C\x0A\x4C\x3C\x58\x0A\x53\x3C\x51\x0A"
"\x4B\x3C\x46\x0A\x42\x3C\x52\x0A\x43\x3C"
"\x4C\x0A\x4F\x3C\x42\x0A\x59\x3C\x53\x0A"
"\x46\x3C\x59\x0A\x58\x3C\x54\x0A\x53\x3C"
"\x55\x0A\x43\x3C\x57\x0A\x4F\x3C\x50\x0A"
"\x42\x3C\x5A\x0A\x56\x3C\x55\x0A\x43\x3C"
"\x58\x0A\x48\x3C\x55\x0A\x4F\x3C\x55\x0A"
"\x56\x3C\x57\x0A\x44\x3C\x41\x0A\x4F\x3C"
"\x58\x0A\x47\x3C\x44\x0A\x50\x3C\x41\x0A"
"\x44\x3C\x58\x0A\x45\x3C\x54\x0A\x53\x3C"
"\x54\x0A\x43\x3C\x54\x0A\x48\x3C\x4F\x0A"
"\x4A\x3C\x51\x0A\x4B\x3C\x48\x0A\x5A\x3C"
"\x51\x0A\x5A\x3C\x57\x0A\x49\x3C\x54\x0A"
"\x4A\x3C\x41\x0A\x5A\x3C\x45\x0A\x46\x3C"
"\x4C\x0A\x51\x3C\x55\x0A\x4A\x3C\x53\x0A"
"\x4E\x3C\x48\x0A\x4A\x3C\x45\x0A\x42\x3C"
"\x44\x0A\x4D\x3C\x49\x0A\x4B\x3C\x52\x0A"
"\x5A\x3C\x58\x0A\x42\x3C\x59\x0A\x50\x3C"
"\x59\x0A\x52\x3C\x45\x0A\x46\x3C\x4F\x0A"
"\x52\x3C\x50\x0A\x43\x3C\x41\x0A\x44\x3C"
"\x59\x0A\x44\x3C\x5A\x0A\x42\x3C\x58\x0A"
"\x4D\x3C\x41\x0A\x49\x3C\x51\x0A\x4B\x3C"
"\x4A\x0A\x4A\x3C\x5A\x0A\x4F\x3C\x57\x0A"
"\x48\x3C\x52\x0A\x4C\x3C\x51\x0A\x4D\x3C"
"\x46\x0A\x57\x3C\x54\x0A\x46\x3C\x58\x0A"
"\x46\x3C\x45\x0A\x41\x3C\x57\x0A\x4E\x3C"
"\x4A\x0A\x4B\x3C\x4F\x0A\x48\x3C\x53\x0A"
"\x46\x3C\x42\x0A\x56\x3C\x4B\x0A\x4F\x3C"
"\x41\x0A\x52\x3C\x55\x0A\x4D\x3C\x57\x0A"
"\x4D\x3C\x4B\x0A\x45\x3C\x57\x0A\x43\x3C"
"\x44\x0A\x4E\x3C\x53\x0A\x53\x3C\x45\x0A"
"\x59\x3C\x49\x0A\x47\x3C\x4E\x0A\x46\x3C"
"\x50\x0A\x4E\x3C\x50\x0A\x47\x3C\x57\x0A"
"\x4D\x3C\x42\x0A\x4A\x3C\x57\x0A\x4D\x3C"
"\x4A\x0A\x58\x3C\x51\x0A\x59\x3C\x51\x0A"
"\x59\x3C\x45\x0A\x50\x3C\x51\x0A\x53\x3C"
"\x57\x0A\x4A\x3C\x54\x0A\x5A\x3C\x55\x0A"
"\x49\x3C\x55\x0A\x4D\x3C\x59\x0A\x46\x3C"
"\x51\x0A\x56\x3C\x5A\x0A\x4A\x3C\x44\x0A"
"\x43\x3C\x4A\x0A\x4B\x3C\x51\x0A\x41\x3C"
"\x51\x0A\x4D\x3C\x55\x0A\x53\x3C\x49\x0A"
"\x43\x3C\x4F\x0A\x5A\x3C\x49\x0A\x48\x3C"
"\x42\x0A\x47\x3C\x41\x0A\x50\x3C\x54\x0A"
"\x47\x3C\x46\x0A\x58\x3C\x45\x0A\x42\x3C"
"\x55\x0A\x4F\x3C\x49\x0A\x43\x3C\x46\x0A"
"\x4F\x3C\x4C\x0A\x4E\x3C\x56\x0A\x46\x3C"
"\x54\x0A\x4A\x3C\x4C\x0A\x44\x3C\x54\x0A"
"\x52\x3C\x53\x0A\x4E\x3C\x45\x0A\x4C\x3C"
"\x54\x0A\x4D\x3C\x4E\x0A\x4F\x3C\x44\x0A"
"\x4B\x3C\x58\x0A\x56\x3C\x4C\x0A\x47\x3C"
"\x42\x0A\x4F\x3C\x45\x0A\x52\x3C\x59\x0A"
"\x47\x3C\x49\x0A\x4F\x3C\x5A\x0A\x47\x3C"
"\x55\x0A\x5A\x3C\x4C\x0A\x52\x3C\x54\x0A"
"\x4E\x3C\x51\x0A\x43\x3C\x59\x0A\x4D\x3C"
"\x43\x0A\x4B\x3C\x49\x0A\x4F\x3C\x53\x0A"
"\x48\x3C\x45\x0A\x52\x3C\x58\x0A\x52\x3C"
"\x57\x0A\x48\x3C\x4A\x0A\x47\x3C\x4B\x0A"
"\x45\x3C\x49\x0A\x43\x3C\x55\x0A\x48\x3C"
"\x41\x0A\x4C\x3C\x45\x0A\x4E\x3C\x46\x0A"
"\x56\x3C\x58\x0A\x4E\x3C\x57\x0A\x4D\x3C"
"\x50\x0A\x48\x3C\x46\x0A\x46\x3C\x49\x0A"
"\x52\x3C\x5A\x0A\x4B\x3C\x54\x0A\x4E\x3C"
"\x59\x0A\x44\x3C\x57\x0A\x47\x3C\x4A\x0A"
"\x4E\x3C\x49\x0A\x47\x3C\x53\x0A\x4D\x3C"
"\x4C\x0A\x4E\x3C\x58\x0A\x46\x3C\x55\x0A"
"\x4C\x3C\x59\x0A\x47\x3C\x48\x0A\x47\x3C"
"\x45\x0A\x44\x3C\x53\x0A\x43\x3C\x42\x0A"
"\x56\x3C\x50\x0A\x56\x3C\x41\x0A\x56\x3C"
"\x49\x0A\x47\x3C\x4C\x0A\x42\x3C\x4C\x0A"
"\x57\x3C\x51\x0A\x54\x3C\x55\x0A\x4E\x3C"
"\x44\x0A\x56\x3C\x54\x0A\x50\x3C\x49\x0A"
"\x42\x3C\x49\x0A\x4E\x3C\x5A\x0A\x50\x3C"
"\x45\x0A\x4B\x3C\x43\x0A\x45\x3C\x51\x0A"
"\x4B\x3C\x44\x0A\x4E\x3C\x4B\x0A\x42\x3C"
"\x45\x0A\x56\x3C\x48\x0A\x47\x3C\x54\x0A"
"\x42\x3C\x50\x0A\x56\x3C\x4A\x0A\x44\x3C"
"\x51\x0A\x4C\x3C\x53\x0A\x4D\x3C\x54\x0A"
"\x4D\x3C\x52\x0A\x4B\x3C\x41\x0A\x50\x3C"
"\x55\x0A\x4E\x3C\x41\x0A\x5A\x3C\x41\x0A"
"\x4C\x3C\x49\x0A\x56\x3C\x45\x0A\x48\x3C"
"\x4C\x0A\x4B\x3C\x59\x0A\x41\x3C\x54\x0A"
"\x4A\x3C\x50\x0A\x43\x3C\x52\x0A\x4B\x3C"
"\x57\x0A\x4D\x3C\x48\x0A\x42\x3C\x57\x0A"
"\x4E\x3C\x54\x0A\x43\x3C\x50\x0A\x47\x3C"
"\x5A\x0A\x52\x3C\x44\x0A\x48\x3C\x50\x0A"
"\x5A\x3C\x54\x0A\x58\x3C\x53\x0A\x48\x3C"
"\x44\x0A\x47\x3C\x4F\x0A\x4E\x3C\x52\x0A"
"\x4C\x3C\x57\x0A\x46\x3C\x44\x0A\x48\x3C"
"\x51\x0A\x52\x3C\x49\x0A\x56\x3C\x43\x0A"
"\x56\x3C\x4F\x0A\x4E\x3C\x4F\x0A\x4C\x3C"
"\x55\x0A\x5A\x3C\x50\x0A\x4E\x3C\x4C\x0A"
"\x43\x3C\x45\x0A\x4F\x3C\x51\x0A\x48\x3C"
"\x58\x0A\x46\x3C\x4A\x0A\x47\x3C\x43\x0A"
"\x44\x3C\x50\x0A\x41\x3C\x55\x0A\x41\x3C"
"\x45\x0A\x4D\x3C\x45\x0A\x4A\x3C\x59\x0A"
"\x49\x3C\x57\x0A\x47\x3C\x58\x0A\x4C\x3C"
"\x41\x0A\x42\x3C\x53\x0A\x4E\x3C\x42\x0A"
"\x48\x3C\x59\x0A\x43\x3C\x5A\x0A\x42\x3C"
"\x41\x0A\x59\x3C\x55\x0A\x58\x3C\x41\x0A"
"\x4B\x3C\x4C\x0A\x59\x3C\x54\x0A\x52\x3C"
"\x4A\x0A\x48\x3C\x5A\x0A\x52\x3C\x51\x0A"
"\x59\x3C\x57\x0A\x56\x3C\x53\x0A\x58\x3C"
"\x59\x0A\x47\x3C\x51\x0A\x4B\x3C\x55\x0A"
"\x47\x3C\x4D\x0A\x4D\x3C\x56\x0A\x58\x3C"
"\x49\x0A\x4A\x3C\x55\x0A\x4B\x3C\x50\x0A"
"\x4D\x3C\x4F\x0A\x46\x3C\x57\x0A\x4F\x3C"
"\x54\x0A\x32\x36\x20\x32\x36\x0A\x41\x3C"
"\x42\x0A\x42\x3C\x43\x0A\x43\x3C\x44\x0A"
"\x44\x3C\x45\x0A\x45\x3C\x46\x0A\x46\x3C"
"\x47\x0A\x47\x3C\x48\x0A\x48\x3C\x49\x0A"
"\x49\x3C\x4A\x0A\x4A\x3C\x4B\x0A\x4B\x3C"
"\x4C\x0A\x4C\x3C\x4D\x0A\x4D\x3C\x4E\x0A"
"\x4E\x3C\x4F\x0A\x4F\x3C\x50\x0A\x50\x3C"
"\x51\x0A\x51\x3C\x52\x0A\x52\x3C\x53\x0A"
"\x53\x3C\x54\x0A\x54\x3C\x55\x0A\x55\x3C"
"\x56\x0A\x56\x3C\x57\x0A\x57\x3C\x58\x0A"
"\x58\x3C\x59\x0A\x59\x3C\x5A\x0A\x5A\x3C"
"\x41\x0A\x35\x20\x31\x30\x0A\x44\x3C\x45"
"\x0A\x41\x3C\x44\x0A\x42\x3C\x44\x0A\x42"
"\x3C\x43\x0A\x43\x3C\x45\x0A\x44\x3C\x43"
"\x0A\x42\x3C\x41\x0A\x41\x3C\x43\x0A\x41"
"\x3C\x45\x0A\x42\x3C\x45\x0A\x32\x30\x20"
"\x31\x35\x38\x0A\x49\x3C\x4C\x0A\x46\x3C"
"\x52\x0A\x49\x3C\x43\x0A\x4E\x3C\x42\x0A"
"\x43\x3C\x4B\x0A\x52\x3C\x4F\x0A\x45\x3C"
"\x44\x0A\x44\x3C\x4B\x0A\x46\x3C\x53\x0A"
"\x41\x3C\x43\x0A\x4A\x3C\x45\x0A\x48\x3C"
"\x41\x0A\x4E\x3C\x44\x0A\x4E\x3C\x54\x0A"
"\x48\x3C\x49\x0A\x41\x3C\x54\x0A\x4D\x3C"
"\x53\x0A\x54\x3C\x4F\x0A\x50\x3C\x51\x0A"
"\x47\x3C\x4A\x0A\x42\x3C\x4C\x0A\x4E\x3C"
"\x49\x0A\x41\x3C\x52\x0A\x54\x3C\x53\x0A"
"\x4D\x3C\x4A\x0A\x42\x3C\x4A\x0A\x47\x3C"
"\x50\x0A\x4E\x3C\x45\x0A\x42\x3C\x44\x0A"
"\x4E\x3C\x46\x0A\x4B\x3C\x51\x0A\x42\x3C"
"\x45\x0A\x45\x3C\x4F\x0A\x4D\x3C\x50\x0A"
"\x4D\x3C\x46\x0A\x41\x3C\x46\x0A\x48\x3C"
"\x53\x0A\x47\x3C\x44\x0A\x50\x3C\x4A\x0A"
"\x41\x3C\x51\x0A\x54\x3C\x46\x0A\x47\x3C"
"\x46\x0A\x54\x3C\x52\x0A\x4C\x3C\x51\x0A"
"\x41\x3C\x4A\x0A\x47\x3C\x49\x0A\x48\x3C"
"\x4F\x0A\x43\x3C\x44\x0A\x50\x3C\x4C\x0A"
"\x48\x3C\x54\x0A\x54\x3C\x45\x0A\x44\x3C"
"\x51\x0A\x4A\x3C\x4F\x0A\x41\x3C\x4D\x0A"
"\x46\x3C\x45\x0A\x45\x3C\x4B\x0A\x45\x3C"
"\x51\x0A\x50\x3C\x54\x0A\x43\x3C\x45\x0A"
"\x4D\x3C\x42\x0A\x54\x3C\x4A\x0A\x47\x3C"
"\x45\x0A\x4E\x3C\x4B\x0A\x49\x3C\x50\x0A"
"\x4D\x3C\x51\x0A\x48\x3C\x4D\x0A\x47\x3C"
"\x4C\x0A\x49\x3C\x4A\x0A\x50\x3C\x53\x0A"
"\x41\x3C\x4B\x0A\x46\x3C\x4C\x0A\x54\x3C"
"\x4C\x0A\x47\x3C\x54\x0A\x49\x3C\x51\x0A"
"\x42\x3C\x4F\x0A\x48\x3C\x4E\x0A\x4D\x3C"
"\x47\x0A\x4A\x3C\x52\x0A\x43\x3C\x42\x0A"
"\x4E\x3C\x4F\x0A\x54\x3C\x44\x0A\x41\x3C"
"\x44\x0A\x4C\x3C\x53\x0A\x49\x3C\x4B\x0A"
"\x52\x3C\x51\x0A\x4D\x3C\x45\x0A\x42\x3C"
"\x52\x0A\x4F\x3C\x51\x0A\x52\x3C\x44\x0A"
"\x49\x3C\x54\x0A\x54\x3C\x51\x0A\x49\x3C"
"\x44\x0A\x4F\x3C\x44\x0A\x4E\x3C\x51\x0A"
"\x41\x3C\x53\x0A\x4D\x3C\x4B\x0A\x48\x3C"
"\x47\x0A\x47\x3C\x43\x0A\x48\x3C\x45\x0A"
"\x42\x3C\x51\x0A\x48\x3C\x42\x0A\x47\x3C"
"\x53\x0A\x49\x3C\x53\x0A\x49\x3C\x52\x0A"
"\x4A\x3C\x51\x0A\x41\x3C\x4C\x0A\x46\x3C"
"\x51\x0A\x4A\x3C\x44\x0A\x43\x3C\x4A\x0A"
"\x48\x3C\x4C\x0A\x41\x3C\x50\x0A\x46\x3C"
"\x4B\x0A\x4C\x3C\x45\x0A\x49\x3C\x4F\x0A"
"\x4E\x3C\x50\x0A\x45\x3C\x53\x0A\x41\x3C"
"\x49\x0A\x43\x3C\x52\x0A\x4E\x3C\x4C\x0A"
"\x54\x3C\x42\x0A\x48\x3C\x4B\x0A\x52\x3C"
"\x4B\x0A\x41\x3C\x47\x0A\x43\x3C\x51\x0A"
"\x4A\x3C\x4B\x0A\x43\x3C\x54\x0A\x50\x3C"
"\x42\x0A\x48\x3C\x46\x0A\x4F\x3C\x4B\x0A"
"\x52\x3C\x4C\x0A\x4F\x3C\x53\x0A\x47\x3C"
"\x4F\x0A\x4D\x3C\x49\x0A\x4B\x3C\x53\x0A"
"\x46\x3C\x4F\x0A\x47\x3C\x52\x0A\x42\x3C"
"\x53\x0A\x50\x3C\x45\x0A\x54\x3C\x4B\x0A"
"\x47\x3C\x42\x0A\x41\x3C\x4F\x0A\x49\x3C"
"\x42\x0A\x50\x3C\x43\x0A\x4E\x3C\x4D\x0A"
"\x4A\x3C\x46\x0A\x48\x3C\x52\x0A\x46\x3C"
"\x44\x0A\x50\x3C\x44\x0A\x48\x3C\x50\x0A"
"\x47\x3C\x51\x0A\x50\x3C\x52\x0A\x4C\x3C"
"\x4B\x0A\x48\x3C\x51\x0A\x53\x3C\x51\x0A"
"\x48\x3C\x44\x0A\x43\x3C\x4F\x0A\x4E\x3C"
"\x53\x0A\x4E\x3C\x41\x0A\x31\x30\x20\x34"
"\x30\x0A\x45\x3C\x4A\x0A\x43\x3C\x41\x0A"
"\x47\x3C\x4A\x0A\x43\x3C\x48\x0A\x47\x3C"
"\x49\x0A\x41\x3C\x49\x0A\x44\x3C\x49\x0A"
"\x44\x3C\x41\x0A\x47\x3C\x45\x0A\x46\x3C"
"\x49\x0A\x41\x3C\x4A\x0A\x44\x3C\x48\x0A"
"\x45\x3C\x42\x0A\x41\x3C\x42\x0A\x44\x3C"
"\x45\x0A\x45\x3C\x49\x0A\x44\x3C\x43\x0A"
"\x43\x3C\x47\x0A\x46\x3C\x41\x0A\x46\x3C"
"\x48\x0A\x44\x3C\x42\x0A\x49\x3C\x4A\x0A"
"\x49\x3C\x42\x0A\x46\x3C\x43\x0A\x4A\x3C"
"\x42\x0A\x44\x3C\x46\x0A\x47\x3C\x48\x0A"
"\x41\x3C\x48\x0A\x49\x3C\x48\x0A\x41\x3C"
"\x45\x0A\x45\x3C\x48\x0A\x46\x3C\x4A\x0A"
"\x48\x3C\x42\x0A\x47\x3C\x41\x0A\x47\x3C"
"\x46\x0A\x44\x3C\x47\x0A\x46\x3C\x45\x0A"
"\x46\x3C\x42\x0A\x43\x3C\x42\x0A\x43\x3C"
"\x49\x0A\x32\x30\x20\x37\x30\x0A\x4B\x3C"
"\x51\x0A\x50\x3C\x4C\x0A\x49\x3C\x43\x0A"
"\x4F\x3C\x4C\x0A\x49\x3C\x4D\x0A\x42\x3C"
"\x51\x0A\x47\x3C\x52\x0A\x4A\x3C\x45\x0A"
"\x4F\x3C\x45\x0A\x4A\x3C\x43\x0A\x4A\x3C"
"\x4E\x0A\x48\x3C\x54\x0A\x41\x3C\x44\x0A"
"\x47\x3C\x42\x0A\x49\x3C\x4F\x0A\x53\x3C"
"\x4B\x0A\x48\x3C\x46\x0A\x4A\x3C\x4C\x0A"
"\x51\x3C\x43\x0A\x47\x3C\x4B\x0A\x4A\x3C"
"\x42\x0A\x4F\x3C\x44\x0A\x50\x3C\x4B\x0A"
"\x54\x3C\x4C\x0A\x45\x3C\x44\x0A\x54\x3C"
"\x52\x0A\x52\x3C\x4C\x0A\x48\x3C\x42\x0A"
"\x46\x3C\x4C\x0A\x49\x3C\x51\x0A\x45\x3C"
"\x52\x0A\x50\x3C\x4D\x0A\x53\x3C\x52\x0A"
"\x54\x3C\x43\x0A\x47\x3C\x51\x0A\x49\x3C"
"\x4E\x0A\x47\x3C\x43\x0A\x49\x3C\x45\x0A"
"\x52\x3C\x4E\x0A\x41\x3C\x51\x0A\x51\x3C"
"\x4D\x0A\x42\x3C\x4B\x0A\x41\x3C\x52\x0A"
"\x51\x3C\x52\x0A\x50\x3C\x42\x0A\x45\x3C"
"\x4E\x0A\x44\x3C\x51\x0A\x4B\x3C\x44\x0A"
"\x53\x3C\x46\x0A\x42\x3C\x43\x0A\x42\x3C"
"\x54\x0A\x4F\x3C\x4A\x0A\x53\x3C\x4D\x0A"
"\x42\x3C\x46\x0A\x52\x3C\x4D\x0A\x53\x3C"
"\x49\x0A\x53\x3C\x54\x0A\x49\x3C\x46\x0A"
"\x48\x3C\x44\x0A\x41\x3C\x45\x0A\x50\x3C"
"\x54\x0A\x45\x3C\x51\x0A\x43\x3C\x52\x0A"
"\x4B\x3C\x43\x0A\x53\x3C\x48\x0A\x42\x3C"
"\x4C\x0A\x48\x3C\x50\x0A\x45\x3C\x46\x0A"
"\x41\x3C\x4E\x0A\x4F\x3C\x42\x0A\x35\x20"
"\x31\x30\x0A\x44\x3C\x43\x0A\x42\x3C\x45"
"\x0A\x42\x3C\x44\x0A\x45\x3C\x43\x0A\x41"
"\x3C\x45\x0A\x44\x3C\x45\x0A\x41\x3C\x42"
"\x0A\x41\x3C\x44\x0A\x41\x3C\x43\x0A\x42"
"\x3C\x43\x0A\x31\x30\x20\x32\x30\x0A\x44"
"\x3C\x4A\x0A\x43\x3C\x41\x0A\x41\x3C\x49"
"\x0A\x4A\x3C\x47\x0A\x46\x3C\x48\x0A\x46"
"\x3C\x4A\x0A\x45\x3C\x47\x0A\x46\x3C\x44"
"\x0A\x45\x3C\x48\x0A\x43\x3C\x4A\x0A\x43"
"\x3C\x48\x0A\x45\x3C\x4A\x0A\x43\x3C\x42"
"\x0A\x44\x3C\x47\x0A\x45\x3C\x44\x0A\x46"
"\x3C\x47\x0A\x46\x3C\x45\x0A\x41\x3C\x48"
"\x0A\x41\x3C\x44\x0A\x4A\x3C\x48\x0A\x36"
"\x20\x31\x31\x0A\x41\x3C\x42\x0A\x43\x3C"
"\x46\x0A\x42\x3C\x46\x0A\x44\x3C\x42\x0A"
"\x42\x3C\x45\x0A\x43\x3C\x44\x0A\x41\x3C"
"\x46\x0A\x43\x3C\x45\x0A\x46\x3C\x45\x0A"
"\x44\x3C\x45\x0A\x41\x3C\x43\x0A\x39\x20"
"\x32\x33\x0A\x49\x3C\x41\x0A\x43\x3C\x44"
"\x0A\x42\x3C\x44\x0A\x47\x3C\x42\x0A\x46"
"\x3C\x44\x0A\x43\x3C\x47\x0A\x49\x3C\x46"
"\x0A\x48\x3C\x41\x0A\x43\x3C\x45\x0A\x49"
"\x3C\x48\x0A\x42\x3C\x41\x0A\x43\x3C\x42"
"\x0A\x49\x3C\x45\x0A\x47\x3C\x44\x0A\x48"
"\x3C\x43\x0A\x49\x3C\x43\x0A\x44\x3C\x45"
"\x0A\x49\x3C\x47\x0A\x42\x3C\x46\x0A\x49"
"\x3C\x44\x0A\x48\x3C\x47\x0A\x48\x3C\x44"
"\x0A\x43\x3C\x46\x0A\x32\x30\x20\x33\x34"
"\x0A\x4A\x3C\x43\x0A\x4C\x3C\x41\x0A\x53"
"\x3C\x44\x0A\x50\x3C\x49\x0A\x52\x3C\x49"
"\x0A\x54\x3C\x45\x0A\x4C\x3C\x4F\x0A\x54"
"\x3C\x43\x0A\x4F\x3C\x43\x0A\x44\x3C\x4F"
"\x0A\x53\x3C\x49\x0A\x49\x3C\x44\x0A\x42"
"\x3C\x47\x0A\x46\x3C\x4D\x0A\x54\x3C\x4D"
"\x0A\x42\x3C\x43\x0A\x48\x3C\x4D\x0A\x46"
"\x3C\x50\x0A\x51\x3C\x49\x0A\x46\x3C\x4F"
"\x0A\x51\x3C\x4A\x0A\x52\x3C\x4D\x0A\x45"
"\x3C\x4D\x0A\x53\x3C\x4E\x0A\x42\x3C\x4E"
"\x0A\x50\x3C\x43\x0A\x4C\x3C\x45\x0A\x48"
"\x3C\x49\x0A\x44\x3C\x43\x0A\x52\x3C\x53"
"\x0A\x51\x3C\x4E\x0A\x50\x3C\x45\x0A\x49"
"\x3C\x54\x0A\x45\x3C\x44\x0A\x32\x30\x20"
"\x31\x39\x30\x0A\x42\x3C\x45\x0A\x43\x3C"
"\x4D\x0A\x4E\x3C\x53\x0A\x4E\x3C\x52\x0A"
"\x4F\x3C\x4B\x0A\x4D\x3C\x4A\x0A\x42\x3C"
"\x4A\x0A\x46\x3C\x42\x0A\x47\x3C\x42\x0A"
"\x52\x3C\x4F\x0A\x51\x3C\x54\x0A\x51\x3C"
"\x47\x0A\x44\x3C\x47\x0A\x4D\x3C\x46\x0A"
"\x43\x3C\x54\x0A\x48\x3C\x45\x0A\x44\x3C"
"\x42\x0A\x51\x3C\x46\x0A\x53\x3C\x4B\x0A"
"\x41\x3C\x50\x0A\x48\x3C\x4F\x0A\x48\x3C"
"\x53\x0A\x48\x3C\x49\x0A\x50\x3C\x53\x0A"
"\x46\x3C\x45\x0A\x46\x3C\x54\x0A\x4D\x3C"
"\x4F\x0A\x41\x3C\x4F\x0A\x41\x3C\x4A\x0A"
"\x52\x3C\x4B\x0A\x44\x3C\x4B\x0A\x48\x3C"
"\x4E\x0A\x4D\x3C\x4B\x0A\x51\x3C\x4E\x0A"
"\x50\x3C\x45\x0A\x53\x3C\x4F\x0A\x50\x3C"
"\x4F\x0A\x46\x3C\x4A\x0A\x4E\x3C\x44\x0A"
"\x46\x3C\x53\x0A\x43\x3C\x44\x0A\x44\x3C"
"\x4F\x0A\x41\x3C\x53\x0A\x43\x3C\x42\x0A"
"\x51\x3C\x4A\x0A\x46\x3C\x50\x0A\x4D\x3C"
"\x47\x0A\x52\x3C\x4A\x0A\x4E\x3C\x4F\x0A"
"\x4C\x3C\x49\x0A\x49\x3C\x4B\x0A\x42\x3C"
"\x4F\x0A\x4A\x3C\x45\x0A\x43\x3C\x4A\x0A"
"\x48\x3C\x54\x0A\x51\x3C\x41\x0A\x51\x3C"
"\x53\x0A\x4C\x3C\x42\x0A\x4B\x3C\x54\x0A"
"\x4F\x3C\x54\x0A\x41\x3C\x47\x0A\x48\x3C"
"\x47\x0A\x43\x3C\x52\x0A\x50\x3C\x42\x0A"
"\x48\x3C\x51\x0A\x43\x3C\x45\x0A\x41\x3C"
"\x45\x0A\x49\x3C\x4A\x0A\x52\x3C\x46\x0A"
"\x4D\x3C\x44\x0A\x48\x3C\x44\x0A\x4E\x3C"
"\x54\x0A\x43\x3C\x4F\x0A\x49\x3C\x54\x0A"
"\x44\x3C\x52\x0A\x43\x3C\x4B\x0A\x48\x3C"
"\x50\x0A\x43\x3C\x49\x0A\x43\x3C\x50\x0A"
"\x4E\x3C\x41\x0A\x52\x3C\x42\x0A\x48\x3C"
"\x4D\x0A\x52\x3C\x49\x0A\x43\x3C\x51\x0A"
"\x49\x3C\x45\x0A\x51\x3C\x49\x0A\x51\x3C"
"\x44\x0A\x43\x3C\x53\x0A\x44\x3C\x4C\x0A"
"\x4E\x3C\x42\x0A\x51\x3C\x4B\x0A\x43\x3C"
"\x47\x0A\x50\x3C\x4A\x0A\x43\x3C\x41\x0A"
"\x4A\x3C\x54\x0A\x51\x3C\x4C\x0A\x44\x3C"
"\x50\x0A\x52\x3C\x47\x0A\x53\x3C\x54\x0A"
"\x48\x3C\x4B\x0A\x49\x3C\x4F\x0A\x44\x3C"
"\x45\x0A\x49\x3C\x42\x0A\x50\x3C\x4B\x0A"
"\x4B\x3C\x45\x0A\x4E\x3C\x47\x0A\x43\x3C"
"\x46\x0A\x4D\x3C\x54\x0A\x53\x3C\x42\x0A"
"\x41\x3C\x4B\x0A\x53\x3C\x45\x0A\x41\x3C"
"\x46\x0A\x41\x3C\x54\x0A\x50\x3C\x47\x0A"
"\x52\x3C\x45\x0A\x44\x3C\x49\x0A\x46\x3C"
"\x4B\x0A\x49\x3C\x53\x0A\x47\x3C\x4A\x0A"
"\x48\x3C\x46\x0A\x47\x3C\x53\x0A\x4C\x3C"
"\x46\x0A\x50\x3C\x49\x0A\x4D\x3C\x4C\x0A"
"\x47\x3C\x49\x0A\x4E\x3C\x50\x0A\x42\x3C"
"\x54\x0A\x4C\x3C\x50\x0A\x4A\x3C\x4B\x0A"
"\x43\x3C\x48\x0A\x42\x3C\x4B\x0A\x41\x3C"
"\x49\x0A\x47\x3C\x45\x0A\x47\x3C\x54\x0A"
"\x4E\x3C\x4D\x0A\x4D\x3C\x42\x0A\x48\x3C"
"\x52\x0A\x44\x3C\x4A\x0A\x4D\x3C\x45\x0A"
"\x46\x3C\x47\x0A\x51\x3C\x4D\x0A\x44\x3C"
"\x53\x0A\x48\x3C\x42\x0A\x4E\x3C\x4A\x0A"
"\x51\x3C\x45\x0A\x47\x3C\x4F\x0A\x43\x3C"
"\x4E\x0A\x48\x3C\x41\x0A\x50\x3C\x54\x0A"
"\x51\x3C\x42\x0A\x4C\x3C\x53\x0A\x52\x3C"
"\x53\x0A\x4E\x3C\x4C\x0A\x4C\x3C\x47\x0A"
"\x51\x3C\x52\x0A\x46\x3C\x4F\x0A\x41\x3C"
"\x52\x0A\x4C\x3C\x45\x0A\x51\x3C\x50\x0A"
"\x45\x3C\x54\x0A\x4D\x3C\x52\x0A\x4D\x3C"
"\x53\x0A\x4C\x3C\x4F\x0A\x41\x3C\x4C\x0A"
"\x52\x3C\x50\x0A\x48\x3C\x4A\x0A\x4C\x3C"
"\x4B\x0A\x4D\x3C\x50\x0A\x41\x3C\x4D\x0A"
"\x4C\x3C\x54\x0A\x52\x3C\x54\x0A\x4C\x3C"
"\x52\x0A\x53\x3C\x4A\x0A\x4E\x3C\x45\x0A"
"\x46\x3C\x49\x0A\x41\x3C\x44\x0A\x44\x3C"
"\x46\x0A\x51\x3C\x4F\x0A\x4A\x3C\x4F\x0A"
"\x4F\x3C\x45\x0A\x43\x3C\x4C\x0A\x41\x3C"
"\x42\x0A\x4E\x3C\x4B\x0A\x4E\x3C\x46\x0A"
"\x47\x3C\x4B\x0A\x44\x3C\x54\x0A\x4E\x3C"
"\x49\x0A\x48\x3C\x4C\x0A\x4D\x3C\x49\x0A"
"\x4C\x3C\x4A\x0A\x30\x20\x30\x0A"
;

char answer_buffer[] = 
"\x53\x6F\x72\x74\x65\x64\x20\x73\x65\x71"
"\x75\x65\x6E\x63\x65\x20\x64\x65\x74\x65"
"\x72\x6D\x69\x6E\x65\x64\x20\x61\x66\x74"
"\x65\x72\x20\x34\x20\x72\x65\x6C\x61\x74"
"\x69\x6F\x6E\x73\x3A\x20\x41\x42\x43\x44"
"\x2E\x0A\x49\x6E\x63\x6F\x6E\x73\x69\x73"
"\x74\x65\x6E\x63\x79\x20\x66\x6F\x75\x6E"
"\x64\x20\x61\x66\x74\x65\x72\x20\x32\x20"
"\x72\x65\x6C\x61\x74\x69\x6F\x6E\x73\x2E"
"\x0A\x53\x6F\x72\x74\x65\x64\x20\x73\x65"
"\x71\x75\x65\x6E\x63\x65\x20\x63\x61\x6E"
"\x6E\x6F\x74\x20\x62\x65\x20\x64\x65\x74"
"\x65\x72\x6D\x69\x6E\x65\x64\x2E\x0A\x53"
"\x6F\x72\x74\x65\x64\x20\x73\x65\x71\x75"
"\x65\x6E\x63\x65\x20\x64\x65\x74\x65\x72"
"\x6D\x69\x6E\x65\x64\x20\x61\x66\x74\x65"
"\x72\x20\x36\x20\x72\x65\x6C\x61\x74\x69"
"\x6F\x6E\x73\x3A\x20\x44\x43\x41\x42\x2E"
"\x0A\x53\x6F\x72\x74\x65\x64\x20\x73\x65"
"\x71\x75\x65\x6E\x63\x65\x20\x64\x65\x74"
"\x65\x72\x6D\x69\x6E\x65\x64\x20\x61\x66"
"\x74\x65\x72\x20\x32\x39\x20\x72\x65\x6C"
"\x61\x74\x69\x6F\x6E\x73\x3A\x20\x43\x46"
"\x44\x41\x45\x42\x48\x47\x4A\x49\x2E\x0A"
"\x53\x6F\x72\x74\x65\x64\x20\x73\x65\x71"
"\x75\x65\x6E\x63\x65\x20\x63\x61\x6E\x6E"
"\x6F\x74\x20\x62\x65\x20\x64\x65\x74\x65"
"\x72\x6D\x69\x6E\x65\x64\x2E\x0A\x49\x6E"
"\x63\x6F\x6E\x73\x69\x73\x74\x65\x6E\x63"
"\x79\x20\x66\x6F\x75\x6E\x64\x20\x61\x66"
"\x74\x65\x72\x20\x34\x38\x20\x72\x65\x6C"
"\x61\x74\x69\x6F\x6E\x73\x2E\x0A\x53\x6F"
"\x72\x74\x65\x64\x20\x73\x65\x71\x75\x65"
"\x6E\x63\x65\x20\x64\x65\x74\x65\x72\x6D"
"\x69\x6E\x65\x64\x20\x61\x66\x74\x65\x72"
"\x20\x33\x31\x38\x20\x72\x65\x6C\x61\x74"
"\x69\x6F\x6E\x73\x3A\x20\x47\x4D\x4E\x56"
"\x4B\x43\x48\x46\x4F\x42\x52\x4A\x44\x5A"
"\x4C\x50\x58\x41\x59\x53\x45\x49\x57\x51"
"\x54\x55\x2E\x0A\x53\x6F\x72\x74\x65\x64"
"\x20\x73\x65\x71\x75\x65\x6E\x63\x65\x20"
"\x64\x65\x74\x65\x72\x6D\x69\x6E\x65\x64"
"\x20\x61\x66\x74\x65\x72\x20\x32\x35\x20"
"\x72\x65\x6C\x61\x74\x69\x6F\x6E\x73\x3A"
"\x20\x41\x42\x43\x44\x45\x46\x47\x48\x49"
"\x4A\x4B\x4C\x4D\x4E\x4F\x50\x51\x52\x53"
"\x54\x55\x56\x57\x58\x59\x5A\x2E\x0A\x53"
"\x6F\x72\x74\x65\x64\x20\x73\x65\x71\x75"
"\x65\x6E\x63\x65\x20\x64\x65\x74\x65\x72"
"\x6D\x69\x6E\x65\x64\x20\x61\x66\x74\x65"
"\x72\x20\x37\x20\x72\x65\x6C\x61\x74\x69"
"\x6F\x6E\x73\x3A\x20\x42\x41\x44\x43\x45"
"\x2E\x0A\x53\x6F\x72\x74\x65\x64\x20\x73"
"\x65\x71\x75\x65\x6E\x63\x65\x20\x64\x65"
"\x74\x65\x72\x6D\x69\x6E\x65\x64\x20\x61"
"\x66\x74\x65\x72\x20\x31\x35\x38\x20\x72"
"\x65\x6C\x61\x74\x69\x6F\x6E\x73\x3A\x20"
"\x48\x4E\x41\x4D\x47\x49\x50\x43\x54\x42"
"\x4A\x46\x52\x4C\x45\x4F\x44\x4B\x53\x51"
"\x2E\x0A\x49\x6E\x63\x6F\x6E\x73\x69\x73"
"\x74\x65\x6E\x63\x79\x20\x66\x6F\x75\x6E"
"\x64\x20\x61\x66\x74\x65\x72\x20\x33\x35"
"\x20\x72\x65\x6C\x61\x74\x69\x6F\x6E\x73"
"\x2E\x0A\x53\x6F\x72\x74\x65\x64\x20\x73"
"\x65\x71\x75\x65\x6E\x63\x65\x20\x63\x61"
"\x6E\x6E\x6F\x74\x20\x62\x65\x20\x64\x65"
"\x74\x65\x72\x6D\x69\x6E\x65\x64\x2E\x0A"
"\x53\x6F\x72\x74\x65\x64\x20\x73\x65\x71"
"\x75\x65\x6E\x63\x65\x20\x64\x65\x74\x65"
"\x72\x6D\x69\x6E\x65\x64\x20\x61\x66\x74"
"\x65\x72\x20\x37\x20\x72\x65\x6C\x61\x74"
"\x69\x6F\x6E\x73\x3A\x20\x41\x42\x44\x45"
"\x43\x2E\x0A\x53\x6F\x72\x74\x65\x64\x20"
"\x73\x65\x71\x75\x65\x6E\x63\x65\x20\x63"
"\x61\x6E\x6E\x6F\x74\x20\x62\x65\x20\x64"
"\x65\x74\x65\x72\x6D\x69\x6E\x65\x64\x2E"
"\x0A\x53\x6F\x72\x74\x65\x64\x20\x73\x65"
"\x71\x75\x65\x6E\x63\x65\x20\x64\x65\x74"
"\x65\x72\x6D\x69\x6E\x65\x64\x20\x61\x66"
"\x74\x65\x72\x20\x31\x31\x20\x72\x65\x6C"
"\x61\x74\x69\x6F\x6E\x73\x3A\x20\x41\x43"
"\x44\x42\x46\x45\x2E\x0A\x53\x6F\x72\x74"
"\x65\x64\x20\x73\x65\x71\x75\x65\x6E\x63"
"\x65\x20\x63\x61\x6E\x6E\x6F\x74\x20\x62"
"\x65\x20\x64\x65\x74\x65\x72\x6D\x69\x6E"
"\x65\x64\x2E\x0A\x53\x6F\x72\x74\x65\x64"
"\x20\x73\x65\x71\x75\x65\x6E\x63\x65\x20"
"\x63\x61\x6E\x6E\x6F\x74\x20\x62\x65\x20"
"\x64\x65\x74\x65\x72\x6D\x69\x6E\x65\x64"
"\x2E\x0A\x53\x6F\x72\x74\x65\x64\x20\x73"
"\x65\x71\x75\x65\x6E\x63\x65\x20\x64\x65"
"\x74\x65\x72\x6D\x69\x6E\x65\x64\x20\x61"
"\x66\x74\x65\x72\x20\x31\x37\x39\x20\x72"
"\x65\x6C\x61\x74\x69\x6F\x6E\x73\x3A\x20"
"\x43\x48\x51\x4E\x41\x4D\x44\x4C\x52\x46"
"\x50\x47\x49\x53\x42\x4A\x4F\x4B\x45\x54"
"\x2E\x0A"
;

#include "trap.h"
#include <stdarg.h>
#include <string.h>

/* TEMPLATE CODE */

char output_buffer[sizeof(answer_buffer) + 0x100];


/* only usable when a >= 0 */
void LLdiv10(unsigned long long a, unsigned long long *q, int *r)
{
    union {
        long long value;
        unsigned short s[4];
    } LL;
    
    int i;
    unsigned int cur, sq, sr = 0;
    LL.value = a;

    for (i = 3; i >= 0; i--) {
        cur = sr * 0x10000 + LL.s[i];
        sq = cur / 10;
        sr = cur % 10;
        LL.s[i] = sq;
    }

    *q = LL.value;
    *r = sr;
}

/* useful functions */

int naive_isdigit(char c)
{
    return '0' <= c && c <= '9';
}

int naive_isspace(char c)
{
    switch (c) {
        case ' ': case '\f': case '\n': case '\r': case '\t': case '\v':
            return 1;
        default:
            return 0;
    }
}

/* write_TYPE(): print TYPE to output buffer
 * return outputed char cnt
 */

char *write_ptr = output_buffer;

void finish_output()
{
    *write_ptr = '\0';
}

int write_char(char c)
{
    *write_ptr++ = c;
    return 1;
}

int write_string(char *s)
{
    int cnt = 0;
    while (*s) cnt += write_char(*s++);
    return cnt;
}

int write_llint(long long lld)
{
    int buf[100];
    int p = 0, ret;
    unsigned long long llu;
    if (lld < 0) { write_char('-'); lld = -lld; }
    llu = lld;
    do {
        LLdiv10(llu, &llu, &buf[p++]);
    } while (llu > 0);
    ret = p;
    while (p > 0) write_char('0' + buf[--p]);
    return ret;
}

int write_int(int d)
{
    char buf[100];
    int p = 0, ret;
    unsigned int u;
    if (d < 0) { write_char('-'); d = -d; }
    u = d;
    do {
        buf[p++] = u % 10;
        u /= 10;
    } while (u > 0);
    ret = p;
    while (p > 0) write_char('0' + buf[--p]);
    return ret;
}

int naive_printf(const char *fmt, ...)
{
    va_list ap;
    long long lld;
    int d;
    char c, *s;
    int cnt = 0;
    
    va_start(ap, fmt);
    while (*fmt) {
        if (*fmt == '%') {
            switch (*++fmt) {
                case 's':
                    s = va_arg(ap, char *);
                    cnt += write_string(s);
                    break;
                case 'd':
                    d = va_arg(ap, int);
                    cnt += write_int(d);
                    break;
                case 'c':
                    c = va_arg(ap, int);
                    cnt += write_char(c);
                    break;
                case 'l':
                    if (*++fmt == 'l' && *++fmt == 'd') {
                        lld = va_arg(ap, long long);
                        cnt += write_llint(lld);
                    }
                    break;
                case '%':
                    cnt += write_char('%');
                    break;
            }
        } else {
            cnt += write_char(*fmt);
        }
        fmt++;
    }
    va_end(ap);
    return cnt;
}


/* read_TYPE(): read TYPE from input buffer
 * return read object count
 */

char *read_ptr = input_buffer;

int read_char(char *cp)
{
    if (*read_ptr) {
        *cp = *read_ptr++;
        return 1;
    } else {
        return 0;
    }
}

void unread_char(char c)
{
    *--read_ptr = c;
}

void read_space()
{
    char c = '\0';
    while (read_char(&c) && naive_isspace(c));
    if (c) unread_char(c);
}

int read_string(char *s)
{
    int flag = 0;
    char c = '\0';
    read_space();
    while (read_char(&c) && !naive_isspace(c)) {
        *s++ = c;
        flag = 1;
    }
    if (c) unread_char(c);
    if (flag) *s = '\0';
    return flag;
}

int read_llint(long long *lldp)
{
    int flag = 0;
    long long lld = 0;
    int f = 0;
    char c = '\0';
    read_space();
    read_char(&c);
    if (c == '-') f = 1; else unread_char(c);
    while (read_char(&c) && naive_isdigit(c)) {
        lld = lld * 10 + (c - '0');
        flag = 1;
    }
    if (c) unread_char(c);
    if (flag) *lldp = f ? -lld : lld;
    if (!flag && f) unread_char('-');
    return flag;
}

int read_int(int *dp)
{
    int flag = 0;
    int d = 0;
    int f = 0;
    char c = '\0';
    read_space();
    read_char(&c);
    if (c == '-') f = 1; else unread_char(c);
    while (read_char(&c) && naive_isdigit(c)) {
        d = d * 10 + (c - '0');
        flag = 1;
    }
    if (c) unread_char(c);
    if (flag) *dp = f ? -d : d;
    if (!flag && f) unread_char('-');
    return flag;
}

int naive_scanf(const char *fmt, ...)
{
    va_list ap;
    long long *lldp;
    int *dp;
    char c, *cp, *s;
    int cnt = 0;
    int flag = 0;
    
    va_start(ap, fmt);
    while (*fmt) {
        if (*fmt == '%') {
            switch (*++fmt) {
                case 's':
                    s = va_arg(ap, char *);
                    cnt += flag = read_string(s);
                    break;
                case 'd':
                    dp = va_arg(ap, int *);
                    cnt += flag = read_int(dp);
                    break;
                case 'c':
                    cp = va_arg(ap, char *);
                    cnt += flag = read_char(cp);
                    break;
                case 'l':
                    if (*++fmt == 'l' && *++fmt == 'd') {
                        lldp = va_arg(ap, long long *);
                        cnt += flag = read_llint(lldp);
                    }
                    break;
                case '%':
                    if (read_char(&c)) flag = (c == '%');
                    else flag = 0;
                    break;
            }
        } else {
            if (read_char(&c)) flag = (c == *fmt);
            else flag = 0;
        }
        if (!flag) goto done;
        fmt++;
    }
done:
    va_end(ap);
    return cnt;
}





int naive_memcmp(void *p1, void *p2, int n)
{
    unsigned char *s1 = p1, *s2 = p2;
    int i;
    for (i = 0; i < n; i++)
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
    return 0;
}

void naive_memset(void *p, char c, int n)
{
    unsigned char *s = p;
    int i;
    for (i = 0; i < n; i++)
        s[i] = c;
}








int program_main();

#define FILLCHAR 'E'

int main()
{
    naive_memset(output_buffer, FILLCHAR, sizeof(output_buffer));    
    program_main();
    finish_output();
    nemu_assert(naive_memcmp(output_buffer, answer_buffer, sizeof(answer_buffer)) == 0);
    nemu_assert(memcmp(output_buffer, answer_buffer, sizeof(answer_buffer)) == 0);
    HIT_GOOD_TRAP;
    return 0;
}

#define main program_main
#define scanf naive_scanf
#define printf naive_printf
#define puts(str) naive_printf("%s\n", (str))
#define putchar(ch) naive_printf("%c", (ch))

/* REAL USER PROGRAM */


#include <string.h>
int n, m;
int g[26][26], d[26], d2[26];
int vis[26];
int test2(int k)
{
    memcpy(d2, d, sizeof(d2));
    char buf[27];
    char *ans = buf;
    while (1) {
        int u = 0, flag = 0;
        int i;
        for (i = 0; i < n; i++)
            if (d2[i] == 0) {
                u = i;
                flag++;
            }
        if (flag > 1) return 0;
        if (flag == 0) break;
        d2[u] = -1;
        *ans++ = 'A' + u;
        int v;
        for (v = 0; v < n; v++)
            if (g[u][v]) d2[v]--;
    }
    *ans = '\0';
    if ((int) (ans - buf) != n) return 0;
    printf("Sorted sequence determined after %d relations: %s.\n", k, buf);
    return 1;
}

int bfs(int s)
{
    int q[26];
    int t = 0, w = 0;
    q[0] = s;
    vis[s] = 1;
    while (t <= w) {
        int u = q[t++];
        int v;
        for (v = 0; v < n; v++) {
            if (g[u][v] && v == s) return 1;
            if (!vis[v] && g[u][v]) {
                vis[v] = 1;
                q[++w] = v;
            }
        }
    }
    return 0;
}

int test1(int k)
{
    int i;
    for (i = 0; i < n; i++) {
        memset(vis, 0, sizeof(vis));
        if (bfs(i)) {
            printf("Inconsistency found after %d relations.\n", k);
            return 1;
        }
    }
    return 0;
}
void solve()
{
    memset(g, 0, sizeof(g));
    memset(d, 0, sizeof(d));
    int i;
    int flag = 0;
    for (i = 1; i <= m; i++) {
        char s[4];
        scanf("%s", s);
        int u = s[0] - 'A', v = s[2] - 'A';
        if (!g[u][v]) {
            g[u][v] = 1;
            d[v]++;
        }
        if (!flag && (test1(i) || test2(i)))
            flag = 1;
    }
    if (!flag)
        printf("Sorted sequence cannot be determined.\n");
}
int main()
{
    while (scanf("%d%d", &n, &m) == 2 && n && m) solve();
    return 0;
}
