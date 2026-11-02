/* Module: rmme3260.dll
   Function: FUN_662558d0
   Address: 662558d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662558d0(void *this,byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_6626cd68;
  *(undefined ***)this = &PTR_LAB_6626cd40;
  piVar2 = *(int **)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_6626b290;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


