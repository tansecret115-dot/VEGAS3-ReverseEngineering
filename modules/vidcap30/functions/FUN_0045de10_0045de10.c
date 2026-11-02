/* Module: vidcap30.exe
   Function: FUN_0045de10
   Address: 0045de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045de10(HWND param_1,int param_2,undefined4 *param_3,int *param_4)

{
  WPARAM WVar1;
  DWORD DVar2;
  HWND pHVar3;
  LONG dwNewLong;
  HWND hWnd;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  UINT UVar10;
  LPARAM LVar11;
  undefined4 uVar12;
  tagPOINT local_258;
  undefined4 local_250;
  WPARAM local_24c;
  undefined4 local_248;
  CHAR *local_244;
  undefined4 local_240;
  undefined1 local_230 [8];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  char *local_21c;
  char local_208 [258];
  undefined1 local_106;
  CHAR local_104 [260];
  
  uVar4 = param_3[2];
  if ((uVar4 == 0xfffffffb) && (param_2 == 0x4d1)) {
    DVar2 = GetMessagePos();
    FUN_0045e5f0(param_1,(int)(short)DVar2,(int)(short)(DVar2 >> 0x10));
    return 1;
  }
  if (uVar4 < 0xffffff66) {
    if (uVar4 == 0xffffff65) {
      FUN_0045ec60(param_1,param_3);
      return 0;
    }
    if (0xffffff36 < uVar4) {
      return 0;
    }
    if (uVar4 == 0xffffff36) {
      if (param_4[4] == 0) {
        return 0;
      }
      iVar7 = FUN_0045e380(param_1);
      if (iVar7 == 2) {
        SetWindowLongA(param_1,0,1);
        return 1;
      }
      FUN_0045e540(param_1,param_4);
      FUN_00418bc0(param_1,*param_4,param_4[1]);
      param_4[3] = 1;
      DAT_005ba50c = DAT_005ba50c | 0x20;
      param_4[4] = 0;
      return 0;
    }
    if (uVar4 == 0xfffffdf8) {
      FUN_00431e30(param_3,param_3[1]);
      return 0;
    }
    if (uVar4 != 0xffffff35) {
      return 0;
    }
    puVar8 = (undefined4 *)param_4[1];
    puVar9 = (undefined4 *)*param_4;
    for (iVar7 = 0x4b6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_0045d2a0(param_4,param_1);
    if (param_4[4] != 0) {
      DAT_005ba50c = DAT_005ba50c | 0x20;
      param_4[4] = 0;
    }
switchD_0045e051_caseD_fffffffd:
    DVar2 = GetMessagePos();
    local_250 = 0;
    local_24c = 0;
    local_258.x = (LONG)(short)DVar2;
    local_248 = 0;
    local_258.y = (LONG)(short)(DVar2 >> 0x10);
    pHVar3 = GetDlgItem(param_1,0x4d1);
    ScreenToClient(pHVar3,&local_258);
    SendMessageA(pHVar3,0x1012,0,(LPARAM)&local_258);
    WVar1 = local_24c;
    if (local_24c != 0xffffffff) {
      SendMessageA(pHVar3,0x1043,0,local_24c);
      local_220 = 3;
      local_224 = 3;
      SendMessageA(pHVar3,0x102b,WVar1,(LPARAM)local_230);
      SendMessageA(param_1,0x111,0x9d7e,0);
      return 0;
    }
  }
  else {
    switch(uVar4) {
    case 0xffffff96:
      if (param_3[4] == 0xffffffff) {
        return 0;
      }
      local_244 = local_104;
      local_250 = 0;
      local_240 = 0x104;
      SendMessageA((HWND)*param_3,0x102d,param_3[4],(LPARAM)&local_258);
      if ((LPCSTR)param_3[8] == (LPCSTR)0x0) {
        iVar7 = lstrcmpA(local_104,"");
        if (iVar7 != 0) {
          return 0;
        }
        SendMessageA((HWND)*param_3,0x1008,param_3[4],0);
        return 0;
      }
      iVar7 = lstrlenA((LPCSTR)param_3[8]);
      if (iVar7 == 0) {
        return 0;
      }
      lstrcpynA(local_208,(LPCSTR)param_3[8],0x103);
      local_106 = 0;
      _SfAddSlashToPathName_8(local_208,0x104);
      uVar4 = _mbctoupper((int)local_208[0]);
      local_208[0] = (char)uVar4;
      iVar7 = lstrcmpiA(local_104,local_208);
      if (iVar7 != 0) {
        iVar7 = FUN_0045b740(local_208);
        if (iVar7 == 0) {
          uVar12 = 0x23;
          uVar5 = _SfGetString_8(DAT_005ba2a0,0xc4c1);
          uVar6 = _SfGetString_8(DAT_005ba2a0,0xc4c0);
          iVar7 = _SfMessageBox_16(param_1,uVar6,uVar5,uVar12);
          if (iVar7 == 6) {
            iVar7 = _SfCreateDirectory_8(local_208,0);
            if (iVar7 == 0) {
              FUN_00404910(0x8004e009,0);
              return 0;
            }
          }
          else if (iVar7 == 2) {
            return 0;
          }
        }
        if (param_3[4] == 0) {
          param_4[5] = 0;
        }
        local_228 = 0;
        local_21c = local_208;
        SendMessageA((HWND)*param_3,0x102e,param_3[4],(LPARAM)local_230);
        FUN_0045cb80(*param_3,param_3[4],local_208);
        WVar1 = param_3[4];
        pHVar3 = (HWND)*param_3;
        SendMessageA(pHVar3,0x1043,0,WVar1);
        local_220 = 3;
        local_224 = 3;
        SendMessageA(pHVar3,0x102b,WVar1,(LPARAM)local_230);
        LVar11 = 0;
        UVar10 = 0x468;
        pHVar3 = GetParent(param_1);
        SendMessageA(pHVar3,UVar10,(WPARAM)param_1,LVar11);
        param_4[4] = 1;
        return 1;
      }
      return 0;
    case 0xffffff9b:
      if (((param_3[6] ^ param_3[5]) & 0xf000) != 0) {
        if (param_3[3] == 0) {
          param_4[5] = 0;
        }
        LVar11 = 0;
        UVar10 = 0x468;
        pHVar3 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,UVar10,(WPARAM)pHVar3,LVar11);
        param_4[4] = 1;
        FUN_0045d450(param_1,*param_3,*(undefined4 *)(*param_4 + 0xbc0));
        return 0;
      }
      break;
    case 0xfffffff4:
      dwNewLong = FUN_0045e7e0(param_3,param_4);
      SetWindowLongA(param_1,0,dwNewLong);
      return 1;
    case 0xfffffffd:
      goto switchD_0045e051_caseD_fffffffd;
    }
  }
  return 0;
}


