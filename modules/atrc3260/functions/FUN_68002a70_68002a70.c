/* Module: atrc3260.dll
   Function: FUN_68002a70
   Address: 68002a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68002a70(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_68003140(local_10);
  iVar1 = FUN_68003930((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_68003260(local_10);
    return 0;
  }
  piVar2 = FUN_68003970((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_68003260(local_10);
  return iVar1;
}


