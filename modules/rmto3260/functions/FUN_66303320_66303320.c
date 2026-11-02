/* Module: rmto3260.dll
   Function: FUN_66303320
   Address: 66303320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66303320(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + -8);
  *puVar1 = &PTR_FUN_663085b8;
  *(undefined ***)((int)this + -4) = &PTR_LAB_66308598;
  *(undefined ***)this = &PTR_LAB_66308570;
  iVar2 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_66304150(*(int **)((int)this + 0x10));
    *(int *)((int)this + 0x10) = iVar2;
  }
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_66306400;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


