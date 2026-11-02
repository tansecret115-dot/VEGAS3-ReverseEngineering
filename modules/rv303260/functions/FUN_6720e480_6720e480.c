/* Module: rv303260.dll
   Function: FUN_6720e480
   Address: 6720e480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6720e480(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_6720ec10(local_10);
  iVar1 = FUN_6720f400((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_6720ed30(local_10);
    return 0;
  }
  piVar2 = FUN_6720f440((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_6720ed30(local_10);
  return iVar1;
}


