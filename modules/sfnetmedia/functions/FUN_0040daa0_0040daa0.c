/* Module: sfnetmedia.dll
   Function: FUN_0040daa0
   Address: 0040daa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040daa0(void *this,undefined4 param_1,UINT_PTR param_2)

{
  if (*(UINT_PTR *)((int)this + 0xb0) == param_2) {
    KillTimer(*(HWND *)((int)this + 4),*(UINT_PTR *)((int)this + 0xb0));
    *(undefined4 *)((int)this + 0xb0) = 0;
    FUN_0040dae0((int)this);
  }
  return 0;
}


