/* Module: pngu3266.dll
   Function: SetItemIcon
   Address: 606053e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::SetItemIcon(long,int) */

void __thiscall CPNTreeControl::SetItemIcon(CPNTreeControl *this,long param_1,int param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  int local_18;
  int local_14;
  int local_8;
  
                    /* 0x153e7  1936  ?SetItemIcon@CPNTreeControl@@UAEXJH@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if ((iVar1 != 0) && (local_8 != 0)) {
    memset(&local_30,0,0x28);
    local_2c = **(undefined4 **)(local_8 + 0x10);
    local_30 = 0x22;
    local_14 = param_2;
    local_18 = param_2;
    SendMessageA(*(HWND *)(this + 0xc),0x110d,0,(LPARAM)&local_30);
  }
  return;
}


