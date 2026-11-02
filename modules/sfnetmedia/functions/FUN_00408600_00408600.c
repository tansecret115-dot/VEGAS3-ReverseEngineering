/* Module: sfnetmedia.dll
   Function: FUN_00408600
   Address: 00408600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00408600(void *this,HWND param_1)

{
  undefined4 *dwNewLong;
  int iVar1;
  HANDLE hProcess;
  LONG LVar2;
  undefined4 *lpBaseAddress;
  SIZE_T dwSize;
  
  iVar1 = (**(code **)(*(int *)this + 4))();
  dwNewLong = (undefined4 *)((int)this + 8);
  dwSize = 0xd;
  *dwNewLong = 0x42444c7;
  *(void **)((int)this + 0xc) = this;
  *(undefined1 *)((int)this + 0x10) = 0xe9;
  *(int *)((int)this + 0x11) = (iVar1 - (int)dwNewLong) + -0xd;
  lpBaseAddress = dwNewLong;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  LVar2 = SetWindowLongA(param_1,-4,(LONG)dwNewLong);
  if (LVar2 == 0) {
    return 0;
  }
  *(LONG *)((int)this + 0x1c) = LVar2;
  *(HWND *)((int)this + 4) = param_1;
  return 1;
}


