#ifndef PROGRAMOPTIONS_H
#define PROGRAMOPTIONS_H

#define MODE_NONE		0
#define MODE_ADD		1
#define MODE_DELETE		2
#define MODE_EXTRACT	3
#define MODE_UPDATE		4
#define MODE_CREATE		5
#define MODE_LIST 		6
#define MODE_DIFF		7
#define MODE_HELP		8

typedef struct programOptions* programOptions;

programOptions programOptionsCreate();

void programOptionsDestroy(programOptions po);

unsigned int programOptionsGetMode(programOptions po);

void programOptionsSetMode(programOptions po, unsigned int mode);

void programOptionsAddFile(programOptions po, char* filename);

void programOptionsSetArchiveName(programOptions po, char* archiveName);

char* programOptionsGetArchiveName(programOptions po);

char** programOptionsGetFilesName(programOptions po);

unsigned int programOptionsGetFilesCount(programOptions po);

unsigned int programOptionsGetVerbose(programOptions po);

void programOptionsSetVerbose(programOptions po, unsigned int verbose);

void programOptionsSetGZip(programOptions po, unsigned int gzip);

unsigned int programOptionsGetGZip(programOptions po);

unsigned int programOptionsGetGZip(programOptions po);

void programOptionsSetSparse(programOptions po, unsigned int sparse);

void multipleCommandError();

#endif // PROGRAMOPTIONS_H
