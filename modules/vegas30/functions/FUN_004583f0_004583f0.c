/* Module: vegas30.exe
   Function: FUN_004583f0
   Address: 004583f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004583f0(int param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xab0) + 4))(param_1,DAT_0064aec4);
  if (iVar1 == 0) {
    (*(code *)**(undefined4 **)(param_1 + 0xab0))(param_1,unaff_retaddr);
    return;
  }
  FUN_00456d70(param_1,0);
  return;
}


