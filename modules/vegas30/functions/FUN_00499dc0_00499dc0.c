/* Module: vegas30.exe
   Function: FUN_00499dc0
   Address: 00499dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00499dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ftol();
  lVar2 = (lVar2 - *(longlong *)(param_1 + 0x98)) + *(longlong *)(param_1 + 0xb88);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 == 4) {
    if ((*(uint *)(param_1 + 0x18) & 0x1000000) != 0) {
      FUN_0049bab0(param_1,lVar2,param_3,param_4);
      return;
    }
    iVar1 = FUN_0049c3a0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_00497f60(param_1,lVar2,param_4);
      return;
    }
  }
  else if (iVar1 != 0) {
    FUN_00498ae0(param_1,iVar1,lVar2,param_4);
  }
  return;
}


