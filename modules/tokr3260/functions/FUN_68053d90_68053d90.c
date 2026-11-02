/* Module: tokr3260.dll
   Function: FUN_68053d90
   Address: 68053d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68053d90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_68053e50((int)param_1);
  if (iVar1 == -999999) {
    return -999999;
  }
  iVar1 = FUN_68054020(param_1);
  if (iVar1 == -999999) {
    return -999999;
  }
  iVar1 = FUN_68053e20((int)param_1);
  iVar2 = FUN_68053e00((int)param_1);
  iVar3 = FUN_68054020(param_1);
  iVar4 = FUN_68053e50((int)param_1);
  return iVar1 + iVar2 + iVar3 + iVar4;
}


