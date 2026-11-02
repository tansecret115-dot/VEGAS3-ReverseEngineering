/* Module: pngu3266.dll
   Function: GetTopWindow
   Address: 60604e7a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::GetTopWindow(unsigned long)const  */

ulong __thiscall CPNTreeControl::GetTopWindow(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
                    /* 0x14e7a  1402  ?GetTopWindow@CPNTreeControl@@UBEKK@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if (iVar1 != 0) {
    uVar2 = SendMessageA(*(HWND *)(this + 0xc),0x110a,4,**(LPARAM **)(local_8 + 0x10));
    param_1 = 0;
    iVar1 = FUN_60619b60(*(void **)(this + 200),uVar2,&param_1);
    if ((iVar1 != 0) && (param_1 != 0)) {
      return *(ulong *)param_1;
    }
  }
  return 0xffffffff;
}


