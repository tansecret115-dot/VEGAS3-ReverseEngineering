/* Module: wavplug.dll
   Function: FUN_5f387e40
   Address: 5f387e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f387e40(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  FUN_5f395300(this);
  *(undefined ***)((int)this + 0xa8) = &PTR_LAB_5f3caa38;
  *(undefined4 *)((int)this + 0xac) = param_1;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined ***)this = &PTR_FUN_5f3caa28;
  *(undefined ***)((int)this + 0xa8) = &PTR_LAB_5f3ca9e0;
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xb4) = DVar1;
  *(undefined4 *)((int)this + 0xb8) = 0;
  return this;
}


