/* Module: vidcap30.exe
   Function: FUN_00455620
   Address: 00455620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455620(int param_1)

{
  if (*(int *)(param_1 + 0x400) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x400));
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  if (*(int *)(param_1 + 0x50c) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x50c));
    *(undefined4 *)(param_1 + 0x50c) = 0;
  }
  return;
}


