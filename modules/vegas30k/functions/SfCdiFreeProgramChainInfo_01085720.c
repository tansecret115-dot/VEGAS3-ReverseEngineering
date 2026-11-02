/* Module: vegas30k.dll
   Function: SfCdiFreeProgramChainInfo
   Address: 01085720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiFreeProgramChainInfo(struct tagSFIFO_PGCI *) */

long SfCdiFreeProgramChainInfo(tagSFIFO_PGCI *param_1)

{
                    /* 0x85720  300  ?SfCdiFreeProgramChainInfo@@YGJPAUtagSFIFO_PGCI@@@Z */
  if (param_1 != (tagSFIFO_PGCI *)0x0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0xf0));
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0xf4));
    }
    if (*(int *)(param_1 + 0xf8) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0xf8));
    }
    if (*(int *)(param_1 + 0x114) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x114));
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x118));
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x110));
    }
    free(param_1);
  }
  return 0;
}


