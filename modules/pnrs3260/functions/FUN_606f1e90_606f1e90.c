/* Module: pnrs3260.dll
   Function: FUN_606f1e90
   Address: 606f1e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_606f1e90(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_606f1f00(this,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_606f1f80(this,param_1), iVar1 != 0)) {
    FUN_606f1f60(this,iVar1,param_1);
  }
  return iVar1;
}


