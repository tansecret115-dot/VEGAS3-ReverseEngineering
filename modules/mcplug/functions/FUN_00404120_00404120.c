/* Module: mcplug.dll
   Function: FUN_00404120
   Address: 00404120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00404120(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xfffffff6;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(undefined ***)this = &PTR_LAB_0047676c;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar1;
  return this;
}


