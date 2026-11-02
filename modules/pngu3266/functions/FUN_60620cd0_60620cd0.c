/* Module: pngu3266.dll
   Function: FUN_60620cd0
   Address: 60620cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60620cd0(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + -8);
  *puVar1 = &PTR_FUN_6062d3c8;
  *(undefined ***)((int)this + -4) = &PTR_LAB_6062d3a8;
  *(undefined ***)this = &PTR_LAB_6062d380;
  iVar2 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_60621b00(*(int **)((int)this + 0x10));
    *(int *)((int)this + 0x10) = iVar2;
  }
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_6062d1f8;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


