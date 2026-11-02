/* Module: stl2plg.dll
   Function: FUN_00401f00
   Address: 00401f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00401f00(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_LAB_004645f8;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  FUN_004027b0((undefined4 *)((int)this + 0x28));
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_LAB_0046459c;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x10) = DVar1;
  return this;
}


