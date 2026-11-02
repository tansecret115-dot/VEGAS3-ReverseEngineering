/* Module: pngu3266.dll
   Function: SetCurrentSelection
   Address: 60604cf9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNTreeControl::SetCurrentSelection(unsigned long) */

int __thiscall CPNTreeControl::SetCurrentSelection(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  LPARAM lParam;
  int local_8;
  
                    /* 0x14cf9  1881  ?SetCurrentSelection@CPNTreeControl@@UAEHK@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if (iVar1 == 0) {
    lParam = 0;
  }
  else {
    lParam = **(LPARAM **)(local_8 + 0x10);
  }
  SendMessageA(*(HWND *)(this + 0xc),0x110b,9,lParam);
  return 1;
}


