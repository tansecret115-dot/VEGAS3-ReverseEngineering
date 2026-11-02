/* Module: pngu3266.dll
   Function: GetFollowingSibling
   Address: 60604ede
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::GetFollowingSibling(unsigned long)const
    */

ulong __thiscall CPNTreeControl::GetFollowingSibling(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
                    /* 0x14ede  1194  ?GetFollowingSibling@CPNTreeControl@@UBEKK@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if (iVar1 != 0) {
    uVar2 = SendMessageA(*(HWND *)(this + 0xc),0x110a,1,**(LPARAM **)(local_8 + 0x10));
    param_1 = 0;
    iVar1 = FUN_60619b60(*(void **)(this + 200),uVar2,&param_1);
    if ((iVar1 != 0) && (param_1 != 0)) {
      return *(ulong *)param_1;
    }
  }
  return 0xffffffff;
}


