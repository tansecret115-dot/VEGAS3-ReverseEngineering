/* Module: pngu3266.dll
   Function: FUN_60619f20
   Address: 60619f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_60619f20(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_60619d60(this,param_1);
  puVar2 = (undefined4 *)FUN_6061a020(this,iVar1,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}


