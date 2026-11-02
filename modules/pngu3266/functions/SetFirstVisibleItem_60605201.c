/* Module: pngu3266.dll
   Function: SetFirstVisibleItem
   Address: 60605201
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::SetFirstVisibleItem(unsigned long) */

void __thiscall CPNTreeControl::SetFirstVisibleItem(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  int local_8;
  
                    /* 0x15201  1907  ?SetFirstVisibleItem@CPNTreeControl@@UAEXK@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if (iVar1 != 0) {
    SendMessageA(*(HWND *)(this + 0xc),0x110b,5,**(LPARAM **)(local_8 + 0x10));
  }
  return;
}


