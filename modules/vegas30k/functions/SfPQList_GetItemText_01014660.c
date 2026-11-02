/* Module: vegas30k.dll
   Function: SfPQList_GetItemText
   Address: 01014660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* char * __stdcall SfPQList_GetItemText(struct cditemtag *) */

char * SfPQList_GetItemText(cditemtag *param_1)

{
                    /* 0x14660  478  ?SfPQList_GetItemText@@YGPADPAUcditemtag@@@Z */
  if (param_1 == (cditemtag *)0x0) {
    return (char *)0x0;
  }
  return (char *)(param_1 + 0x28);
}


