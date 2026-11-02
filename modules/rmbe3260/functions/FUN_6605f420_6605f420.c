/* Module: rmbe3260.dll
   Function: FUN_6605f420
   Address: 6605f420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605f420(void *this,byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_66068df8;
  *(undefined ***)this = &PTR_LAB_66068dd0;
  if (*(int *)((int)this + 0x10) != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(int *)((int)this + 0x18) != 0) {
      do {
        piVar2 = *(int **)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14) * 4);
        (**(code **)(*piVar2 + 8))(piVar2);
        uVar3 = *(int *)((int)this + 0x14) + 1;
        *(uint *)((int)this + 0x14) = uVar3;
      } while (uVar3 < *(uint *)((int)this + 0x18));
    }
    operator_delete(*(void **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_66063e30;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


