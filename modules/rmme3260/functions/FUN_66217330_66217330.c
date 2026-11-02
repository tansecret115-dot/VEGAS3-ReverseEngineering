/* Module: rmme3260.dll
   Function: FUN_66217330
   Address: 66217330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66217330(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x26);
  *(undefined **)this = &DAT_6626b88c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x26) = 0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


