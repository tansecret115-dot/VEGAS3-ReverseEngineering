/* Module: vegas30.exe
   Function: FUN_00538340
   Address: 00538340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538340(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005382e0(param_2);
  iVar2 = FUN_00538320(uVar1,param_2);
  floor(((double)*(longlong *)(param_1 + 0xb90) * (double)iVar2) / (double)*(int *)(param_1 + 0xb98)
        + _DAT_00610560);
  uVar3 = ftol();
  __alldiv(uVar3,2,0);
  return;
}


