/* Module: vegas30.exe
   Function: SfImageList_Destroy
   Address: 00549280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfImageList_Destroy(struct tSFIMAGELIST *) */

void SfImageList_Destroy(tSFIMAGELIST *param_1)

{
                    /* 0x149280  26  ?SfImageList_Destroy@@YGXPAUtSFIMAGELIST@@@Z */
  if (param_1 != (tSFIMAGELIST *)0x0) {
    if (*(int *)(param_1 + 0x444) != 0) {
      _SfDibFree_8(*(int *)(param_1 + 0x444),0);
    }
    FUN_00548f50(param_1 + 0x10);
    free(param_1);
  }
  return;
}


