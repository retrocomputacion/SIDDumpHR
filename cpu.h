extern unsigned char mem[];
extern unsigned int cpucycles;
extern unsigned short pc;
extern int watchp;
void initcpu(unsigned short newpc, unsigned char newa, unsigned char newx, unsigned char newy);
int runcpu(void);
void watch(unsigned short startaddr, unsigned short endaddr, unsigned char actype);
