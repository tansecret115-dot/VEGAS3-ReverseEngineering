/* Module: vidcap30.exe
   Function: FUN_00448970
   Address: 00448970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448970(int param_1)

{
  if (*(int *)(param_1 + 0x108) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


