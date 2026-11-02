/* Module: pnrs3260.dll
   Function: FUN_606f1f80
   Address: 606f1f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_606f1f80(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_606f1dd0(this,param_1);
  puVar2 = (undefined4 *)FUN_606f2010(this,iVar1,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}


