/* Module: vidcap30.exe
   Function: FUN_00411120
   Address: 00411120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined4 uVar9;
  int local_2e8;
  int iStack_2e4;
  int local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  byte local_2c4 [4];
  tagRECT local_2c0;
  undefined1 local_2b0 [8];
  uchar local_2a8 [32];
  uchar local_288 [260];
  uchar local_184 [260];
  uchar local_80 [128];
  
  iVar5 = DAT_005bb838;
  local_2c8 = DAT_005bb838;
  iVar1 = FUN_0043df30();
  local_2e0 = iVar1;
  local_2d0 = FUN_0043df50();
  if (((iVar1 != 0) && (local_2d0 != 0)) && (iVar5 != 0)) {
    iVar1 = FUN_0042f360(iVar5);
    local_2cc = 0;
    local_2dc = 0;
    uVar2 = _SfGetUIFont_4(100);
    iVar5 = local_2e0;
    if (param_1 == 0) {
      iVar5 = 2;
    }
    else {
      FUN_00426b50(local_2e0,local_2c4);
      FUN_00423d10();
      iVar3 = lstrcmpA((LPCSTR)local_184,"No Capture Device");
      if (iVar3 == 0) {
        SfPrintF(local_184,"No Device Detected");
      }
      else if ((local_2c4[0] & 4) != 0) {
        iVar5 = FUN_0042c7a0(iVar5,&local_2e8);
        if (-1 < iVar5) {
          SfPrintF();
          _mbscat(local_184,local_80);
        }
      }
      _SfGetTextExtent_16(uVar2,local_184,0xffffffff,&local_2d8);
      _DAT_005bc004 = 0;
      _DAT_005bbffc = local_2d8 + 7;
      iVar5 = 1;
      FUN_00411090(0,0,0,local_184);
      if (iVar1 == 0) {
        iVar3 = FUN_00428c90(local_2e0,&local_2e8);
      }
      else {
        iVar3 = FUN_00424de0(local_2d0,&local_2e8);
      }
      if (-1 < iVar3) {
        if ((local_2e8 == 0) && (iStack_2e4 == 0)) {
          SfPrintF(local_288,"Unknown Resolution");
        }
        else {
          SfPrintF(local_288,"Source: %dx%d",local_2e8,iStack_2e4);
        }
        _SfGetTextExtent_16(uVar2,local_288,0xffffffff,&local_2e8);
        _DAT_005bc088 = 0;
        _DAT_005bc080 = local_2e8 + 7;
        iVar5 = 2;
        FUN_00411090(1,0,0,local_288);
      }
    }
    iVar3 = local_2d0;
    if (iVar1 == 0) {
      iVar3 = local_2e0;
    }
    local_2d8 = *(int *)(iVar3 + 0x158) - *(int *)(iVar3 + 0x150);
    local_2d4 = *(int *)(iVar3 + 0x15c) - *(int *)(iVar3 + 0x154);
    if ((local_2d8 == 0) && (local_2d4 == 0)) {
      SfPrintF(local_288,"Unknown resolution");
    }
    else {
      SfPrintF(local_288,"Display: %dx%d",local_2d8,local_2d4);
    }
    _SfGetTextExtent_16(uVar2,local_288,0xffffffff,&local_2d8);
    *(int *)(&DAT_005bbffc + iVar5 * 0x84) = local_2d8 + 7;
    *(undefined4 *)(&DAT_005bc004 + iVar5 * 0x84) = 0;
    FUN_00411090(iVar5,0,0,local_288);
    iVar1 = FUN_0043f790(local_2e0,local_2b0);
    if (-1 < iVar1) {
      iVar1 = FUN_0045c380();
      if (iVar1 == 0) {
        _mbscpy(local_288,(uchar *)"No capture space available");
      }
      else {
        _mbscpy(local_288,(uchar *)"Available Time: ");
        iStack_2e4 = 0;
        local_2e8 = iVar1;
        uVar4 = ftol();
        if (DAT_005ba4c0 != 0) {
          iVar1 = FUN_00434f90(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
          if (iVar1 != 0) {
            if (uVar4 < 600) {
              local_2cc = 100;
              local_2dc = 0xffff;
            }
            if (uVar4 < 300) {
              local_2dc = 0xff;
            }
          }
        }
        uVar7 = FUN_0045bb80(uVar4 * 1000,0);
        puVar8 = local_2a8;
        uVar9 = 0x20;
        fVar6 = (float10)FUN_0042ed90();
        FUN_0045aec0(uVar7,(double)fVar6,puVar8,uVar9);
        _mbscat(local_288,local_2a8);
      }
      _SfGetTextExtent_16(uVar2,local_288,0xffffffff,&local_2d8);
      iVar1 = (iVar5 + 1) * 0x84;
      *(int *)(&DAT_005bbffc + iVar1) = local_2d8 + 7;
      *(undefined4 *)(&DAT_005bc004 + iVar1) = 0;
      FUN_00411090(iVar5 + 1,local_2cc,local_2dc,local_288);
    }
    GetWindowRect(DAT_005bbe30,&local_2c0);
    FUN_004109d0(&DAT_005bbe30,0,local_2c0.right - local_2c0.left,local_2c0.bottom - local_2c0.top);
  }
  return;
}


