/* Module: encn3260.dll
   Function: FUN_664d4180
   Address: 664d4180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d4180(void *this,byte param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint local_8;
  
  *(undefined ***)this = &PTR_FUN_664dff28;
  uVar1 = **(uint **)((int)this + 0x1c);
  uVar5 = *(uint *)(uVar1 + 4);
  local_8 = *(uint *)(*(uint *)(uVar1 + 4) + 4);
  while ((-(uint)(uVar5 != uVar1) & uVar5) != 0) {
    pvVar6 = (void *)(-(uint)(uVar5 != uVar1) & uVar5);
    if (*(void **)((int)pvVar6 + 8) != (void *)0x0) {
      operator_delete(*(void **)((int)pvVar6 + 8));
    }
    FUN_664d8100(*(void **)((int)this + 0x1c),(int)pvVar6);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
    uVar5 = local_8;
    local_8 = *(uint *)(local_8 + 4);
  }
  piVar2 = *(int **)((int)this + 0x1c);
  if (piVar2 != (int *)0x0) {
    FUN_664d80a0(piVar2);
    operator_delete(piVar2);
  }
  puVar3 = *(undefined4 **)((int)this + 4);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete((void *)*puVar3);
    operator_delete(*(void **)((int)puVar3 + 0x19));
    operator_delete(puVar3);
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 == 1) {
    if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x18))(1);
    }
  }
  else if (iVar4 == 4) {
    piVar2 = *(int **)((int)this + 0x18);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else if ((iVar4 == 5) && (piVar2 = *(int **)((int)this + 0x18), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


