/* Module: rmme3260.dll
   Function: FUN_6625b8c0
   Address: 6625b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6625b8c0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_6626d228;
  *(undefined ***)this = &PTR_LAB_6626d200;
  FUN_6625ba30((int)puVar1);
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_6626b290;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


