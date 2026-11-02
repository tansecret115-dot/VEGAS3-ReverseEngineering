/* Module: rmto3260.dll
   Function: FUN_662f1870
   Address: 662f1870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f1870(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + -4);
  *puVar1 = &PTR_FUN_66307da0;
  *(undefined ***)this = &PTR_LAB_66307d78;
  FUN_662f1960((int)puVar1);
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_66306400;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


