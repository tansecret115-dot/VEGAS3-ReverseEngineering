/* Module: vegas30.exe
   Function: FUN_0047c100
   Address: 0047c100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c100(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = *(int *)(param_1 + 0x48) + -1 + *(int *)(param_1 + 0x4c);
    if (uVar1 < **(uint **)(param_2 + 0x30)) {
      FUN_00479160(param_1,param_2,uVar1,&local_8,0);
      local_8 = local_8 + 10;
      local_4 = local_4 + -1;
      iVar2 = FUN_004796c0(param_1,param_2,local_8,local_4);
      if ((iVar2 != -1) && (iVar2 != 0)) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        FUN_00479520(param_1);
      }
    }
  }
  return;
}


