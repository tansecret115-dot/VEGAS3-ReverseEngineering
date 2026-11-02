/* Module: rv103260.dll
   Function: FUN_636a5600
   Address: 636a5600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a5600(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_636a5fa0(local_10);
  iVar1 = FUN_636a6790((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_636a60c0(local_10);
    return 0;
  }
  piVar2 = FUN_636a67d0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_636a60c0(local_10);
  return iVar1;
}


