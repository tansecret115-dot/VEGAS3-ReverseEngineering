/* Module: encn3260.dll
   Function: FUN_664cbdf0
   Address: 664cbdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664cbdf0(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_664bb2c0(local_10);
  iVar1 = FUN_664db740((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_664bb3e0(local_10);
    return 0;
  }
  piVar2 = FUN_664db780((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_664bb3e0(local_10);
  return iVar1;
}


