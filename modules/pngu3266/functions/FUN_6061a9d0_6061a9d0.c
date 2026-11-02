/* Module: pngu3266.dll
   Function: FUN_6061a9d0
   Address: 6061a9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061a9d0(void *this,undefined4 param_1)

{
  FUN_6061c830(this,param_1);
  *(undefined ***)((int)this + 8) = &PTR_LAB_6062d0d8;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined ***)this = &PTR_FUN_6062d0c0;
  *(undefined ***)((int)this + 8) = &PTR_FUN_6062d0a0;
  return this;
}


