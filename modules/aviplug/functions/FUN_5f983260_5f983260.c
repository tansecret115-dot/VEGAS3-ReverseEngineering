/* Module: aviplug.dll
   Function: FUN_5f983260
   Address: 5f983260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f983260(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = &PTR_LAB_5f9d7d6c;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  *(undefined4 *)((int)this + 0x50) = param_3;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined ***)this = &PTR_LAB_5f9eba84;
  *puVar1 = &PTR_LAB_5f9eba78;
  if (param_1 == 0) {
    param_1 = -(uint)(this != (void *)0x0) & (uint)puVar1;
  }
  *(uint *)((int)this + 0xc) = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x28));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c));
  return this;
}


