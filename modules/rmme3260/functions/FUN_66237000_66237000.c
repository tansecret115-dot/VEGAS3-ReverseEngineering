/* Module: rmme3260.dll
   Function: FUN_66237000
   Address: 66237000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66237000(HDC param_1)

{
  short sVar1;
  HDC pHVar2;
  HDC pHVar3;
  byte bVar4;
  ushort uVar5;
  DWORD DVar6;
  int iVar7;
  HWND pHVar8;
  undefined4 local_2c;
  HWND local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  RECT local_14;
  
  pHVar3 = param_1;
  if (param_1[0x2d].unused == 0) {
    DVar6 = GetCurrentThreadId();
    if (DVar6 == param_1[0x30].unused) {
      uVar5 = GetAsyncKeyState(0x1b);
      if (((uVar5 & 0x8000) == 0x8000) || (((byte)uVar5 & 1) == 1)) {
        FUN_66236fb0((int)(param_1 + -1));
        return 0;
      }
    }
  }
  else {
    GetAsyncKeyState(0x1b);
  }
  if ((((DAT_6627cf20 == 0) && ((param_1[0x17].unused & 0x20) != 0)) ||
      ((param_1[0x17].unused & 0x200) == 0)) && ((param_1[0x17].unused & 0x400) == 0)) {
    pHVar8 = *(HWND *)((int)&param_1[0x43].unused + 1);
    if (pHVar8 != (HWND)0x0) {
      UpdateWindow(pHVar8);
      return 0;
    }
  }
  else {
    iVar7 = (**(code **)(param_1[4].unused + 0x14))(param_1 + 4);
    if ((iVar7 != 0) && (param_1[0xc].unused != 0)) {
      bVar4 = (byte)param_1[0x17].unused & 0x20;
      if (bVar4 == 0) {
        pHVar8 = *(HWND *)((int)&param_1[0x43].unused + 1);
      }
      else {
        pHVar8 = *(HWND *)((int)&param_1[0x3b].unused + 1);
      }
      pHVar2 = param_1 + 0x17;
      param_1 = (HDC)0x0;
      if ((pHVar2->unused & 0x200) == 0) {
        iVar7 = pHVar3[0x16].unused;
        param_1 = GetDC(pHVar8);
        FUN_66243ef0((void *)pHVar3[0x16].unused,param_1);
      }
      else if (bVar4 == 0) {
        iVar7 = pHVar3[0x2e].unused;
      }
      else {
        iVar7 = pHVar3[0x2f].unused;
      }
      local_2c = 0x2001;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_28 = pHVar8;
      local_24 = iVar7;
      if (iVar7 != 0) {
        (**(code **)(*(int *)pHVar3[0xc].unused + 0x14))((int *)pHVar3[0xc].unused,&local_2c);
      }
      if ((local_18 == 0) && (pHVar8 != (HWND)0x0)) {
        DVar6 = GetCurrentThreadId();
        if (pHVar3[0x31].unused == DVar6) {
          sVar1 = *(short *)((int)&pHVar3[0x2b].unused + 2);
          if (sVar1 == 1) {
            InvalidateRgn(pHVar8,*(HRGN *)((int)&pHVar3[0x2a].unused + 2),1);
          }
          else if (sVar1 == 2) {
            local_14.top = *(LONG *)((int)&pHVar3[0x27].unused + 2);
            local_14.left = *(LONG *)((int)&pHVar3[0x26].unused + 2);
            local_14.right = *(LONG *)((int)&pHVar3[0x28].unused + 2);
            local_14.bottom = *(LONG *)((int)&pHVar3[0x29].unused + 2);
            InvalidateRect(pHVar8,&local_14,1);
          }
          *(undefined2 *)((int)&pHVar3[0x2b].unused + 2) = 0;
          UpdateWindow(pHVar8);
        }
      }
      if (param_1 != (HDC)0x0) {
        ReleaseDC(pHVar8,param_1);
      }
    }
  }
  return 0;
}


