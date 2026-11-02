/* Module: rmme3260.dll
   Function: FUN_66215330
   Address: 66215330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66215330(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x3e);
  *(undefined4 **)this = &DAT_6626b888;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3e) = 0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


