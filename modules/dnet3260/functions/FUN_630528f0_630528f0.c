/* Module: dnet3260.dll
   Function: FUN_630528f0
   Address: 630528f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_630528f0(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_63052fc0(local_10);
  iVar1 = FUN_630537b0((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_630530e0(local_10);
    return 0;
  }
  piVar2 = FUN_630537f0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_630530e0(local_10);
  return iVar1;
}


