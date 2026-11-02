/* Module: vidcap30.exe
   Function: FUN_004338a0
   Address: 004338a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004338a0(int param_1)

{
  if (*(int *)(param_1 + 0x108) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return 0;
}


