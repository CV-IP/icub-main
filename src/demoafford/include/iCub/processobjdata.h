

#ifndef __PROCESSOBJDATA__
#define __PROCESSOBJDATA__

class processobjdata
{
public:
	processobjdata(void);
	~processobjdata(void);

	int readdata();
	int classifycolor(double* colorhist);
	int classifyshape(double* shapehist);
	int classifyeffects(double *effects, unsigned char *effectclassification);

	double* getcolorhist(double *data);
	double* getshapehist(double *data);
	// having the data gathered, compute the effects
	int computeEffects(double* effects);

	int printhist(double* hist);

	int addDataPoint(double* dataPoint);


	int restartDataAcquisition(void);
	int detectActionInit(void);

	int bufferfull(void);

	int getlastcolor();
	int getlastshape();

	int setlastcolor(int color);
        int setlastshape(int shape);

private:
	
	int maxnsamples;
	int index;
	int npoints;

	int lastshape;
	int lastcolor;

	double *objposx;	
	double *objposy;
	double *objw;
	double *objh;
	double *objangle;
	
	int deleteBuffers(void);
	

};

#endif
