/* Module: qt4plug.dll
   Function: FUN_5f520700
   Address: 5f520700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f520700(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  puVar1 = (undefined4 *)((int)this + 0x28);
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_5f5207c0((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_5f595aa0);
  if (iVar2 < 0) {
    return -0x7fffbffe;
  }
  piVar3 = *(int **)((int)this + 0x2c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)&stack0xfffffff8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
  if (-1 < iVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5f595c10,(undefined4 *)((int)this + 0x2c));
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  *puVar1 = 0;
  return -0x7fffbffe;
}


