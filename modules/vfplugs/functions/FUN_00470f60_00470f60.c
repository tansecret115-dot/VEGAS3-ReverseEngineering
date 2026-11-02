/* Module: vfplugs.dll
   Function: FUN_00470f60
   Address: 00470f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00470f60(void *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x44) = *param_1;
  *(undefined4 *)((int)this + 0x48) = param_1[1];
  *(undefined4 *)((int)this + 0x4c) = param_1[2];
  *(undefined4 *)((int)this + 0x50) = param_1[3];
  InvalidateRect(*(HWND *)((int)this + 0x10),(RECT *)0x0,0);
  return 1;
}


