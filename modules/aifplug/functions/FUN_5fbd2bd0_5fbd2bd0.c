/* Module: aifplug.dll
   Function: FUN_5fbd2bd0
   Address: 5fbd2bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5fbd2bd0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_5fbff418;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}


