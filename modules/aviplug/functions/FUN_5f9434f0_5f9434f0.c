/* Module: aviplug.dll
   Function: FUN_5f9434f0
   Address: 5f9434f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f9434f0(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  FUN_5f943420(this);
  puVar1 = (undefined4 *)((int)this + 8);
  *puVar1 = &PTR_LAB_5f9d7d6c;
  *(undefined ***)this = &PTR_LAB_5f9d7d5c;
  *puVar1 = &PTR_LAB_5f9d7d50;
  if (param_1 == 0) {
    param_1 = -(uint)(this != (void *)0x0) & (uint)puVar1;
  }
  *(uint *)((int)this + 0xc) = param_1;
  return this;
}


