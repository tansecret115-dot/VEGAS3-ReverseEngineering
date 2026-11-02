/* Module: sipr3260.dll
   Function: FUN_632a23c0
   Address: 632a23c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_632a23c0(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_632a2c90(local_10);
  iVar1 = FUN_632a3480((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_632a2db0(local_10);
    return 0;
  }
  piVar2 = FUN_632a34c0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_632a2db0(local_10);
  return iVar1;
}


