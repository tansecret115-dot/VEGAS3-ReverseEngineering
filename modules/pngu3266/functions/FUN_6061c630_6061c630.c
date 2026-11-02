/* Module: pngu3266.dll
   Function: FUN_6061c630
   Address: 6061c630
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061c630(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_60618bb0(local_10);
  iVar1 = FUN_60620170((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_60618cd0(local_10);
    return 0;
  }
  piVar2 = FUN_606201b0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_60618cd0(local_10);
  return iVar1;
}


