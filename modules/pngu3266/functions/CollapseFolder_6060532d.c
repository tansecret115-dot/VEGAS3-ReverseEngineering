/* Module: pngu3266.dll
   Function: CollapseFolder
   Address: 6060532d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::CollapseFolder(long) */

void __thiscall CPNTreeControl::CollapseFolder(CPNTreeControl *this,long param_1)

{
  int iVar1;
  int local_8;
  
                    /* 0x1532d  865  ?CollapseFolder@CPNTreeControl@@UAEXJ@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if ((iVar1 != 0) && (local_8 != 0)) {
    SendMessageA(*(HWND *)(this + 0xc),0x1102,1,**(LPARAM **)(local_8 + 0x10));
  }
  return;
}


