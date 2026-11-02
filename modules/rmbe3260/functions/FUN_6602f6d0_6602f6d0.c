/* Module: rmbe3260.dll
   Function: FUN_6602f6d0
   Address: 6602f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_6602f6d0(undefined4 param_1,undefined4 param_2)

{
  void *this;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  this = operator_new(0xe8);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_6603bd70(this,param_1,param_2);
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 4))();
  }
  if (iVar2 == 0) {
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 100))();
    }
    if (iVar2 == 0) {
      return piVar1;
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  return (int *)0x0;
}


