/* Module: rmme3260.dll
   Function: FUN_66255a70
   Address: 66255a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66255a70(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + -8);
  *puVar1 = &PTR_FUN_6626cdd0;
  *(undefined ***)((int)this + -4) = &PTR_LAB_6626cdb0;
  *(undefined ***)this = &PTR_LAB_6626cd88;
  iVar2 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_662568a0(*(int **)((int)this + 0x10));
    *(int *)((int)this + 0x10) = iVar2;
  }
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)this) = &PTR_FUN_6626b290;
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return puVar1;
}


