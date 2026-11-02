/* Module: encn3260.dll
   Function: FUN_664c2660
   Address: 664c2660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c2660(void *this,byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_664df8d8;
  *(undefined ***)this = &PTR_LAB_664df8b0;
  piVar2 = *(int **)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_664df878;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


