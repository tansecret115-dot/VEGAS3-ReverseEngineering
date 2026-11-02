/* Module: vegas30.exe
   Function: FUN_004ee4d0
   Address: 004ee4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ee4d0(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  uchar *_Source;
  char *pcVar2;
  int iVar3;
  HCURSOR pHVar4;
  LRESULT LVar5;
  int iVar6;
  LPCSTR lpString2;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_214;
  int local_210;
  char *local_20c;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  local_210 = 0;
  if (param_2 != 0x432) {
    return 0;
  }
  switch(param_3[2]) {
  case 1:
  case 6:
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    FUN_005fd4f0(0);
    local_210 = FUN_0040c3e0(DAT_0064762c,param_3[5],*(undefined4 *)(param_1 + 0x14));
    if (local_210 != 0) {
      local_210 = FUN_0040c4b0(DAT_0064762c,param_3[5],param_3[3],param_3[4]);
    }
    break;
  case 2:
  case 7:
  case 0x15:
    local_210 = FUN_0040c4b0(DAT_0064762c,param_3[5],param_3[3],param_3[4]);
    break;
  case 3:
  case 8:
    iVar6 = param_3[5];
    local_20c = (char *)(uint)(param_3[2] == 8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    local_210 = 1;
    if (iVar6 != 0) {
      pHVar4 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
      pHVar4 = SetCursor(pHVar4);
      local_210 = FUN_0040c570(DAT_0064762c,iVar6,param_3[3],param_3[4],local_20c);
      SetCursor(pHVar4);
      FUN_004ec820(iVar6);
      FUN_004595e0(DAT_00647630,0);
      FUN_00412500(DAT_0064762c,99);
      return local_210;
    }
    break;
  case 4:
  case 9:
    local_210 = 1;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_0040c740(DAT_0064762c);
    goto LAB_004eea9e;
  case 5:
    local_210 = FUN_0040c650(DAT_0064762c,param_3[3],param_3[4]);
    break;
  case 10:
    iVar6 = Transport_IsPreviewPlaying();
    if (iVar6 != 0) {
      FUN_005fd4c0(1);
    }
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x188) = 0x10;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
    pcVar2 = (char *)FUN_005ec620();
    if (pcVar2 != (char *)0x0) {
      local_20c = pcVar2;
      FUN_004f0620(param_3[5],local_208);
      local_214 = 0;
      iVar6 = -0x7fffbffb;
      if (*pcVar2 != '\0') {
        puVar7 = *(undefined4 **)(pcVar2 + 8);
        iVar6 = -0x7ffb1ff6;
        bVar1 = *(byte *)(puVar7 + 6);
        while ((bVar1 & 2) != 2) {
          iVar3 = lstrcmpiA((LPCSTR)local_208,(LPCSTR)*puVar7);
          if (iVar3 == 0) break;
          if (iVar3 < 0) {
            puVar7 = (undefined4 *)puVar7[4];
          }
          else {
            puVar7 = (undefined4 *)puVar7[5];
          }
          bVar1 = *(byte *)(puVar7 + 6);
        }
        if ((*(byte *)(puVar7 + 6) & 2) != 2) {
          local_214 = puVar7[1];
          iVar6 = 0;
        }
      }
      if ((-1 < iVar6) && ((*(byte *)(local_214 + 0x134) & 0x20) != 0)) {
        FUN_005effc0(0);
      }
      uVar9 = DAT_0064b138;
      FUN_005b83b0(DAT_0064b138,1);
      if (iVar6 < 0) {
        iVar6 = FUN_005ec8a0(local_208,&local_214,0,0);
      }
      FUN_005b84d0(uVar9,1);
      *(int *)(param_1 + 0x1a0) = local_214;
      if (-1 < iVar6) {
        FUN_005fcfc0((undefined4 *)(param_1 + 0x188),0,0,0,0,0,0,0,0x3ff00000,0);
        return local_210;
      }
    }
    break;
  case 0xb:
    iVar6 = Transport_IsPreviewPlaying();
    if (iVar6 != 0) {
      local_210 = 1;
    }
    FUN_005fd4f0(0);
    return local_210;
  case 0xc:
    _SfList_CreateExZ_32(&local_214,4,0x40,0x10,0x40000002,0,0,0);
    if (local_214 != 0) {
      SendMessageA(*(HWND *)(param_1 + 0x184),0x605,1,local_214);
      FUN_004edda0(param_1,local_214,param_3[3],param_3[4]);
      FUN_004ec820(local_214);
      return local_210;
    }
    break;
  case 0xd:
    lpString2 = (LPCSTR)FUN_004ed410(param_3[1]);
    if ((lpString2 != (LPCSTR)0x0) && (iVar6 = param_3[5], iVar6 != 0)) {
      lstrcpynA((LPSTR)(iVar6 + 0x10),lpString2,0x50);
      *(undefined1 *)(iVar6 + 0x5f) = 0;
      return local_210;
    }
    break;
  case 0xe:
    FUN_004ed990(param_1,param_3[3],param_3[4],param_3[5]);
    return local_210;
  case 0xf:
    _SfList_CreateExZ_32(&local_214,4,0x40,0x10,0x40000002,0,0,0);
    if (local_214 != 0) {
      LVar5 = SendMessageA(*(HWND *)(param_1 + 0x184),0x60e,0,local_214);
      if (LVar5 != 0) {
        FUN_004ee380(param_1,local_214,param_3[3],param_3[4]);
      }
      FUN_004ec820(local_214);
      return local_210;
    }
    break;
  case 0x10:
    FUN_004eda90(param_1,param_3[3],param_3[4],param_3[5]);
    return local_210;
  case 0x13:
    _SfList_CreateExZ_32(&local_214,4,0x40,0x10,0x40000002,0,0,0);
    if (local_214 != 0) {
      SendMessageA(*(HWND *)(param_1 + 0x184),0x605,1,local_214);
      uVar9 = FUN_004edcf0(param_1,local_214,param_3[3],param_3[4]);
      param_3[2] = uVar9;
      FUN_004ec820(local_214);
      return local_210;
    }
    break;
  case 0x1e:
    FUN_004ec4f0(param_3[5],1,&local_20c,0);
    if ((DAT_00649cec == 0) || (((uint)local_20c & 0x1c) == 0)) {
      FUN_004ec630(param_3[5],0,0,0);
    }
    else {
      FUN_004edbb0(param_3[5],1);
    }
    iVar6 = _SfErrorHandler_GetLastError_0();
    if (iVar6 < 0) {
      _SfErrorHandler_MsgBox_24(0,0x30,0x16,iVar6,0,0);
    }
    local_210 = 1;
LAB_004eea9e:
    if (param_3[5] != 0) {
      FUN_004ec820(param_3[5]);
      return local_210;
    }
    break;
  case 0x20:
    param_3[10] = DAT_0064b358;
    param_3[0xb] = DAT_0064b35c;
    param_3[0xc] = DAT_0064b360;
    return 0;
  case 0x21:
    if (param_3[7] == 0x9c6f) {
      _Source = (uchar *)FUN_0043cf70(2);
      _mbscpy(local_208,_Source);
      SfPrintF(local_104,"http://www.sonicfoundry.com/productinfo.asp?Product=%s&Place=Media",
               local_208);
      _Internet_BrowseWebPage_8(*(undefined4 *)(param_1 + 0x184),local_104);
      return local_210;
    }
    break;
  case 0x28:
    local_210 = FUN_004eec30(param_3[5]);
    break;
  case 0x29:
    local_210 = FUN_004ef2a0(param_3[5]);
    break;
  case 0x32:
    _mbscpy((uchar *)(param_1 + 0x80),(uchar *)param_3[5]);
    if (((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 1) {
      SetWindowTextA(*(HWND *)(param_1 + 8),(LPCSTR)(param_1 + 0x80));
      return local_210;
    }
    break;
  case 0x33:
    FUN_00404790(*param_3);
    return local_210;
  case 0x34:
    FUN_00404790(0);
    return local_210;
  case 0x36:
    if (param_3[7] == 1) {
      uVar9 = param_3[5];
      uVar8 = 0;
    }
    else {
      if (param_3[7] != 2) {
        return 0;
      }
      uVar8 = param_3[5];
      uVar9 = 0;
    }
    local_210 = FUN_004ef2e0(param_1,uVar8,uVar9);
  }
  return local_210;
}


