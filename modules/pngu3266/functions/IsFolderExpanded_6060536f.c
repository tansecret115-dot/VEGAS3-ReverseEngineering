/* Module: pngu3266.dll
   Function: IsFolderExpanded
   Address: 6060536f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNTreeControl::IsFolderExpanded(unsigned long)const  */

long __thiscall CPNTreeControl::IsFolderExpanded(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_8;
  
                    /* 0x1536f  1503  ?IsFolderExpanded@CPNTreeControl@@UBEJK@Z */
  local_8 = 0;
  iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  if ((iVar1 == 0) || (local_8 == 0)) {
    uVar2 = 0;
  }
  else {
    memset(&local_30,0,0x28);
    local_2c = **(undefined4 **)(local_8 + 0x10);
    local_30 = 8;
    local_24 = 0x20;
    SendMessageA(*(HWND *)(this + 0xc),0x110c,0,(LPARAM)&local_30);
    uVar2 = local_28 >> 5 & 1;
  }
  return uVar2;
}


