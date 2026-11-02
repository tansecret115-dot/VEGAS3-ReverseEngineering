/* Module: pngu3266.dll
   Function: FUN_60619de0
   Address: 60619de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_60619de0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_60619ea0(this,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_60619f20(this,param_1), iVar1 != 0)) {
    FUN_60619f00(this,iVar1,param_1);
  }
  return iVar1;
}


