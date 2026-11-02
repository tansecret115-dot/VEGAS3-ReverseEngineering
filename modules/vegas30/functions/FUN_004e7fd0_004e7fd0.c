/* Module: vegas30.exe
   Function: FUN_004e7fd0
   Address: 004e7fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e7fd0(HWND param_1,int *param_2)

{
  undefined4 *dwNewLong;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  WPARAM wParam;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int local_130 [2];
  uint local_128;
  undefined4 local_124;
  undefined1 local_120 [32];
  CHAR local_100 [256];
  
  dwNewLong = (undefined4 *)*param_2;
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  *dwNewLong = param_1;
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  puVar2 = (undefined4 *)_SfGetUIFontSize_4(100);
  dwNewLong[7] = *puVar2;
  dwNewLong[8] = puVar2[1];
  uVar3 = FUN_004e7800();
  dwNewLong[1] = uVar3;
  wParam = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(wParam,&DAT_00613e10,0xffffffff,dwNewLong + 0xd);
  SfPrintF(local_100,"$d %% (MMMMMMMMMMMMMMMMMMMMMMMMMM)",100);
  _SfGetTextExtent_16(wParam,local_100,0xffffffff,dwNewLong + 0xb);
  dwNewLong[2] = dwNewLong[0xb] + 4;
  _SfLoadString_16(DAT_00647204,0x4f7c,local_100,0xff);
  piVar9 = dwNewLong + 9;
  _SfGetTextExtent_16(wParam,local_100,0xffffffff,piVar9);
  iVar6 = *piVar9;
  iVar4 = dwNewLong[10] + 4;
  *piVar9 = iVar6 + 0xc;
  dwNewLong[10] = iVar4;
  if ((int)dwNewLong[1] <= iVar4) {
    iVar4 = dwNewLong[1];
  }
  dwNewLong[10] = iVar4;
  pHVar5 = CreateWindowExA(4,"BUTTON",local_100,0x40000f00,3,1,iVar6 + 0xc,iVar4 + 2,param_1,
                           (HMENU)0x2,DAT_006471fc,(LPVOID)0x0);
  dwNewLong[0x6e] = pHVar5;
  if (pHVar5 != (HWND)0x0) {
    SendMessageA(pHVar5,0x30,wParam,0);
    iVar6 = *piVar9;
    pHVar5 = CreateWindowExA(0x204,"SfKrn_DoneBar_Class","",0x40000000,iVar6 + 6,1,dwNewLong[2],
                             dwNewLong[10] + 2,param_1,(HMENU)0xffffffff,DAT_006471fc,(LPVOID)0x0);
    dwNewLong[0x6d] = pHVar5;
    if (pHVar5 != (HWND)0x0) {
      SendMessageA(pHVar5,0x30,wParam,0);
      SendMessageA(pHVar5,0x60d,0,100);
      SendMessageA(pHVar5,0x60c,0,0);
      dwNewLong[2] = dwNewLong[2] + iVar6 + 9;
      uVar3 = _SfGetString2_8(DAT_00647204,0x3f4);
      dwNewLong[0x6f] = uVar3;
      uVar3 = _SfGetString2_8(DAT_00647204,0x3f6);
      dwNewLong[0x70] = uVar3;
      uVar3 = _SfGetString2_8(DAT_00647204,0x3f5);
      dwNewLong[0x71] = uVar3;
      piVar9 = local_130;
      uVar8 = 0xffffffff;
      uVar3 = _SfGetString2_8(DAT_00647204,0x3f0);
      _SfGetTextExtent_16(wParam,uVar3,uVar8,piVar9);
      uVar3 = 1;
      dwNewLong[0x77] = local_130[0] + 7;
      if (DAT_0064b4e4 == 0) {
        iVar6 = FUN_00601ab0(&local_124,&local_128,1);
        if (iVar6 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar7 = (local_128 & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar7) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = local_124;
            DAT_0064b4e4 = uVar7;
          }
        }
      }
      if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      dwNewLong[0x72] = (uint)!bVar1;
      if (!bVar1 != 0) {
        uVar3 = FUN_004e8680();
        SfPrintF(local_120,dwNewLong[0x71],uVar3,uVar3);
        _SfGetTextExtent_16(wParam,local_120,0xffffffff,local_130);
        piVar9 = local_130;
        uVar8 = 0xffffffff;
        dwNewLong[0x8b] = local_130[0] + 7;
        uVar3 = _SfGetString2_8(DAT_00647204,0x3f1);
        _SfGetTextExtent_16(wParam,uVar3,uVar8,piVar9);
        uVar3 = 3;
        dwNewLong[0x9f] = local_130[0] + 7;
      }
      dwNewLong[0x2f3] = uVar3;
      return 1;
    }
    return 0;
  }
  return 0;
}


