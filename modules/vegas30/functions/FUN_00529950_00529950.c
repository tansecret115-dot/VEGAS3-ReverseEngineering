/* Module: vegas30.exe
   Function: FUN_00529950
   Address: 00529950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00529950(int param_1,int param_2)

{
  if (*(int *)(param_2 + 8) == 0x1001) {
    _SfList_MoveRange_16
              (*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),1);
    FUN_00526cc0(param_1);
    FUN_00524880(param_1);
    FUN_00525770(param_1,*(undefined4 *)(param_2 + 0x10));
    FUN_00524ad0(param_1);
    return 0;
  }
  return 0;
}


