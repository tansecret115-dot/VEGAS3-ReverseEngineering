/* Module: pngu3266.dll
   Function: FUN_6061ccc0
   Address: 6061ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061ccc0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_6062d1d8;
  *(undefined ***)this = &PTR_LAB_6062d1b0;
  FUN_6061ce80((int)puVar1);
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_6062d1f8;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


