/* Module: rmbe3260.dll
   Function: FUN_66052f90
   Address: 66052f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66052f90(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_6605b650(local_10);
  iVar1 = FUN_6605d1d0((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_6605b770(local_10);
    return 0;
  }
  piVar2 = FUN_6605d210((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_6605b770(local_10);
  return iVar1;
}


