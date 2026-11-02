/* Module: vidcap30.exe
   Function: FUN_00489570
   Address: 00489570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00489570(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00488dc0(param_1);
  iVar2 = FUN_00488a70(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_00489210(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_004885a0(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  FUN_004895c0(param_1);
  return iVar1;
}


