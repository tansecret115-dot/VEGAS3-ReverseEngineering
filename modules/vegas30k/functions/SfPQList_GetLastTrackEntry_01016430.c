/* Module: vegas30k.dll
   Function: SfPQList_GetLastTrackEntry
   Address: 01016430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct cditemtag * __stdcall SfPQList_GetLastTrackEntry(struct tSFLIST *) */

cditemtag * SfPQList_GetLastTrackEntry(tSFLIST *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x16430  479  ?SfPQList_GetLastTrackEntry@@YGPAUcditemtag@@PAUtSFLIST@@@Z */
  if (param_1 == (tSFLIST *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1;
  }
  uVar2 = iVar1 - 1;
  if (-1 < (int)uVar2) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 4);
    do {
      if (*(int *)*puVar3 == 3) {
        return (cditemtag *)*puVar3;
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + -1;
    } while (uVar2 < 0x80000000);
  }
  return (cditemtag *)0x0;
}


