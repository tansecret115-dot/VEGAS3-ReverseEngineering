/* Module: rmbe3260.dll
   Function: FUN_66053740
   Address: 66053740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66053740(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar3 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if ((piVar3 == (int *)0x0) || (piVar3 = (int *)*piVar3, piVar3 == (int *)0x0)) {
    return 0x80004005;
  }
  iVar1 = (**(code **)(*piVar3 + 0x28))();
  if (iVar1 == 2) {
    uVar2 = (**(code **)(*piVar3 + 0x3c))(param_2);
    return uVar2;
  }
  if (iVar1 != 3) {
    return 0x80040284;
  }
  uVar2 = (**(code **)(*piVar3 + 0x44))(param_2);
  return uVar2;
}


