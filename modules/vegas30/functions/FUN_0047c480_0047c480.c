/* Module: vegas30.exe
   Function: FUN_0047c480
   Address: 0047c480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c480(void *param_1)

{
  if (*(int *)((int)param_1 + 0x30) != 0) {
    _SfList_Destroy_4(*(int *)((int)param_1 + 0x30));
  }
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  free(param_1);
  return;
}


