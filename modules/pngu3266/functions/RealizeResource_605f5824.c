/* Module: pngu3266.dll
   Function: RealizeResource
   Address: 605f5824
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNFont::RealizeResource(void) */

int __thiscall CPNFont::RealizeResource(CPNFont *this)

{
  int iVar1;
  HDC hdc;
  HFONT pHVar2;
  uint uVar3;
  char *pcVar4;
  LPCSTR local_1c [3];
  int local_10;
  DWORD local_c;
  byte local_5;
  
                    /* 0x5824  1735  ?RealizeResource@CPNFont@@MAEHXZ */
  if ((*(int *)(this + 0x2c) == 0) && (*(int *)(this + 0x30) == 0)) {
    local_10 = 0;
    FUN_60618d40(local_1c,*(char **)(this + 0x28));
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 10) {
      local_c = 0x50;
    }
    else {
      if (iVar1 == 0xb) {
        local_c = 0x10;
        pcVar4 = s_Times_New_Roman_60649198;
      }
      else if (iVar1 == 0xc) {
        local_c = 0x40;
        pcVar4 = s_Script_606491a8;
      }
      else if (((iVar1 == 0xd) || (iVar1 < 0xe)) || (0xf < iVar1)) {
        local_c = 0x20;
        pcVar4 = s_Arial_606491b0;
      }
      else {
        local_c = 0x30;
        pcVar4 = s_Courier_New_606491b8;
      }
      FUN_60618ed0(local_1c,pcVar4);
    }
    if ((*(int *)(this + 0x18) == 0x10) || (local_5 = 0, *(int *)(this + 0x18) == 0x11)) {
      local_5 = 1;
    }
    iVar1 = *(int *)(this + 0x1c);
    if (iVar1 == 0x12) {
      local_10 = 400;
    }
    else if (iVar1 == 0x13) {
      local_10 = 300;
    }
    else if (iVar1 == 0x14) {
      local_10 = 700;
    }
    if (*(char **)(this + 0x28) != (char *)0x0) {
      FUN_60618ed0(local_1c,*(char **)(this + 0x28));
    }
    hdc = GetDC((HWND)0x0);
    GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    pHVar2 = CreateFontA((*(int *)(this + 0xc) * 0x60) / -0x48,0,*(int *)(this + 0x20),
                         *(int *)(this + 0x20),local_10,(uint)local_5,*(uint *)(this + 0x24) & 0xff,
                         0,1,0,0,2,local_c,local_1c[0]);
    *(HFONT *)(this + 0x2c) = pHVar2;
    FUN_60618cd0((int *)local_1c);
    uVar3 = (uint)(pHVar2 != (HFONT)0x0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


