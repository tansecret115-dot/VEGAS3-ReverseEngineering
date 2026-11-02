/* Module: vegas30.exe
   Function: FUN_005d9720
   Address: 005d9720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d9720(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x218) != 0) {
    FUN_005b83b0(param_1,1);
    iVar1 = **(int **)(param_1 + 0x218);
    if (0 < iVar1) {
      do {
        FUN_005d9a60(param_1,0);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x218));
    *(undefined4 *)(param_1 + 0x218) = 0;
    FUN_005b84d0(param_1,1);
  }
  return;
}


