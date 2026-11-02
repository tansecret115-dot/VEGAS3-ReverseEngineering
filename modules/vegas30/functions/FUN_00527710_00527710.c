/* Module: vegas30.exe
   Function: FUN_00527710
   Address: 00527710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xec) + -1;
  _SfList_MoveRange_16
            (*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),*(int *)(param_1 + 0xec),iVar1,1);
  FUN_00526cc0(param_1);
  FUN_00524880(param_1);
  FUN_00525770(param_1,iVar1);
  *(undefined4 *)(param_1 + 0x124) = 1;
  return;
}


