/* Module: sfppack2.dll
   Function: FUN_5cd41ba9
   Address: 5cd41ba9
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd41ba9(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5cd4198a(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_5cd419aa(iVar1);
    param_1 = FUN_5cd41b4c(this,param_1,iVar2);
    if (param_1 == 0) break;
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return 0;
}


