/* Module: pngu3266.dll
   Function: ExpandFolder
   Address: 606052eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::ExpandFolder(long) */

void __thiscall CPNTreeControl::ExpandFolder(CPNTreeControl *this,long param_1)

{
  int iVar1;
  int local_8;
  
                    /* 0x152eb  1044  ?ExpandFolder@CPNTreeControl@@UAEXJ@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if ((iVar1 != 0) && (local_8 != 0)) {
    SendMessageA(*(HWND *)(this + 0xc),0x1102,2,**(LPARAM **)(local_8 + 0x10));
  }
  return;
}


