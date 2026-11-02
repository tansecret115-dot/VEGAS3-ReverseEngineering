/* Module: rmbe3260.dll
   Function: FUN_66050af0
   Address: 66050af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66050af0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_660688a0;
  *(undefined ***)this = &PTR_LAB_66068878;
  FUN_66050c60((int)puVar1);
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_66063e30;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


