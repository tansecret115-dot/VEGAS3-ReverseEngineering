/* Module: vegas30.exe
   Function: FUN_00410080
   Address: 00410080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410080(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0xcc));
    *(undefined4 *)((int)param_1 + 0xcc) = 0;
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 200));
    *(undefined4 *)((int)param_1 + 200) = 0;
    free(param_1);
  }
  return;
}


