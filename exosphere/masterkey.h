#ifndef EXOSPHERE_MASTERKEY_H
#define EXOSPHERE_MASTERKEY_H

/* This is glue code to enable master key support across versions. */

/* TODO: Update to 0x5 on release of new master key. */
#define MASTERKEY_REVISION_MAX 0x4

/* This should be called early on in initialization. */
void mkey_detect_revision(void);

unsigned int mkey_get_revision(void);

unsigned int mkey_get_keyslot(unsigned int revision);

#endif