/* Module: gifplug.dll
   Function: FUN_5f6c1f70
   Address: 5f6c1f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f6c1f70(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f7023f8;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined ***)this = &PTR_LAB_5f70239c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f702384;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 100) = DVar1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return this;
}


