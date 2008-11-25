#ifndef PSKREP_H_
#define PSKREP_H_

bool pskrep_start(void);
void pskrep_stop();
const char* pskrep_error(void);
unsigned pskrep_count(void);

#endif // PSKREP_H_
