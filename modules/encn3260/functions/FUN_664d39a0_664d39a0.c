/* Module: encn3260.dll
   Function: FUN_664d39a0
   Address: 664d39a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d39a0(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar4 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    return 0x80004005;
  }
  piVar1 = (int *)*piVar4;
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  iVar2 = (**(code **)(*piVar1 + 0x5c))();
  if (iVar2 != 0) {
    return 0x80004005;
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (iVar2 != 5) {
    return 0x80040284;
  }
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*piVar1 + 0xc))(param_2,5);
  (**(code **)(*param_2 + 8))(param_2);
  uVar3 = (**(code **)(*(int *)this + 4))(piVar4,piVar1);
  return uVar3;
}


