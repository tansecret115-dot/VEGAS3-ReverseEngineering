/* Module: oggplug.dll
   Function: FUN_00409620
   Address: 00409620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00409620(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1c8) = 0;
  SetEvent(*(HANDLE *)((int)this + 0x10));
  if (*(int *)((int)this + 0x1cc) != 0) {
    *(undefined4 *)((int)this + 0x1d4) = param_1;
  }
  return 0;
}


