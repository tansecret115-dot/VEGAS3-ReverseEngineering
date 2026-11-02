/* Module: vidcap30.exe
   Function: FUN_00408000
   Address: 00408000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408000(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0xa8));
    *(undefined4 *)((int)param_1 + 0xa8) = 0;
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0xa4));
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    free(param_1);
  }
  return;
}


