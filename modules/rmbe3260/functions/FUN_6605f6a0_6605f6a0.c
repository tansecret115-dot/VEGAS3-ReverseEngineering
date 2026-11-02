/* Module: rmbe3260.dll
   Function: FUN_6605f6a0
   Address: 6605f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605f6a0(void *this,byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_66068e40;
  *(undefined ***)this = &PTR_LAB_66068e18;
  piVar2 = *(int **)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_66063e30;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


