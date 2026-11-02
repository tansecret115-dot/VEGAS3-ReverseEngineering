/* Module: sfpublish.dll
   Function: FUN_00420590
   Address: 00420590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00420590(void *this,undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  if ((*(int *)((int)this + 0x3c) != 100) && (*(HWND *)((int)this + 0x28) != (HWND)0x0)) {
    PostMessageA(*(HWND *)((int)this + 0x28),0xf00,0,0);
  }
  SetEvent(*(HANDLE *)((int)this + 0x2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}


