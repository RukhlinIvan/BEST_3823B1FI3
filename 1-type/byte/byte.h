unsigned char max_byte(unsigned short number) {
    unsigned short a = number & 0x00ff;
    unsigned short b = number & 0xff00;
    b = b>>8;
    if (a > b)   
        return a;
    else
        return b;
    
}
