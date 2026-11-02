/* Module: erv13260.dll
   Function: FUN_63602990
   Address: 63602990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63602990(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_636030d0(local_10);
  iVar1 = FUN_636038c0((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_636031f0(local_10);
    return 0;
  }
  piVar2 = FUN_63603900((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_636031f0(local_10);
  return iVar1;
}


