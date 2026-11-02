/* Module: encn3260.dll
   Function: FUN_66488290
   Address: 66488290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66488290(void *this,undefined4 param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_8;
  
  if (*(int *)((int)this + 0x13e) == 0) {
    return 0x80004005;
  }
  local_8 = this;
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  uVar4 = 0;
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_664bad50(puVar1);
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  (**(code **)(*piVar2 + 0x10))(piVar2,param_1,param_2);
  iVar3 = FUN_664bbdc0(*(void **)((int)this + 0x13e),param_3 & 0xffff,&local_8);
  if (iVar3 != 0) {
    uVar4 = (**(code **)(*local_8 + 0x34))(piVar2);
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  if (*(int *)((int)this + 0x16e) == 0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x38))(*(int **)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x16e) = 1;
  }
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return uVar4;
}


