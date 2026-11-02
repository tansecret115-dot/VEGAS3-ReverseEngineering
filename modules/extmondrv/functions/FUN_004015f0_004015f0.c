/* Module: extmondrv.dll
   Function: FUN_004015f0
   Address: 004015f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004015f0(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  FUN_00401520(this);
  puVar1 = (undefined4 *)((int)this + 8);
  *puVar1 = &PTR_LAB_0044d654;
  *(undefined ***)this = &PTR_LAB_0044d644;
  *puVar1 = &PTR_LAB_0044d638;
  if (param_1 == 0) {
    param_1 = -(uint)(this != (void *)0x0) & (uint)puVar1;
  }
  *(uint *)((int)this + 0xc) = param_1;
  return this;
}


