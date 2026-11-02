/* Module: vidcap30.exe
   Function: FUN_00402b70
   Address: 00402b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

HWND FUN_00402b70(HINSTANCE__ *param_1)

{
  LPCVOID pvVar1;
  UINT UVar2;
  LONG LVar3;
  LONG LVar4;
  SHORT SVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  BOOL BVar13;
  int iVar14;
  char *pcVar15;
  UINT nCmdShow;
  char *pcVar16;
  char *_Source;
  undefined4 *puVar17;
  HWND local_170;
  int local_16c;
  uint local_168 [2];
  WINDOWPLACEMENT local_160;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [64];
  char local_c0 [64];
  uchar local_80 [64];
  char local_40 [64];
  
  _Source = "Sonic Foundry Video Capture";
  puVar17 = &DAT_005ba290;
  for (iVar14 = 0x624; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  local_170 = (HWND)0x0;
  pcVar16 = "Video Capture";
  pcVar15 = "Sonic Foundry Video Capture";
  DAT_005ba298 = param_1;
  DAT_005ba290 = _SfIsWin95_0();
  DAT_005ba2a4 = GetCurrentThreadId();
  DAT_005ba294 = _SfIsHighColor_0();
  GetSystemInfo((LPSYSTEM_INFO)&DAT_005ba48c);
  _SfMsgBoxSetAppData_12(param_1,0,"Sonic Foundry Video Capture");
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0xa71029;
  local_108 = 0x919a4b43;
  local_104 = 0x19481937;
  local_134 = 0xd10f1;
  local_130 = 0x9b15f955;
  local_12c = 0x7de87ee7;
  local_128 = 0xe9c05;
  local_124 = 0x8cb3afab;
  local_120 = 0x1279758e;
  pvVar6 = GlobalAlloc(0x40,0xc08);
  pvVar7 = GlobalLock(pvVar6);
  if (pvVar7 == (LPVOID)0x0) {
    DAT_005bba3c = (LPCVOID)0x0;
  }
  else {
    DAT_005bba3c = (LPCVOID)FUN_0056dcd0(0x19c,0xe7,"Video Capture\\3.0",&local_11c,&local_134,1,1,0
                                         ,2,0,"VIDCAP.3.0.Class.Frame",0);
  }
  FUN_00402980();
  if (DAT_005bba34 != 0) {
    _SfLoadString_16(DAT_005ba2a0,0xaf,local_100,0x40);
    SfPrintF(local_c0,"%s %s","Video Capture",local_100);
    pcVar16 = local_c0;
    SfPrintF(local_80,"%s %s","Sonic Foundry Video Capture",local_100);
    _Source = (char *)local_80;
    SfPrintF(local_40,"%s %s","Sonic Foundry Video Capture",local_100);
    pcVar15 = local_40;
  }
  _SfPrintF_AddToken_8("AppName",pcVar16);
  _SfPrintF_AddToken_8("AppName.Full",_Source);
  _SfPrintF_AddToken_8("AppName.Title",pcVar15);
  _SfPrintF_AddToken_8("CompanyName","Sonic Foundry");
  _mbscpy(&DAT_005ba2ac,(uchar *)_Source);
  SVar5 = GetAsyncKeyState(0x10);
  if (((SVar5 < 0) && (SVar5 = GetAsyncKeyState(0x11), SVar5 < 0)) || (DAT_005bba34 != 0)) {
    FUN_00402790(pcVar16);
  }
  iVar14 = _SfOleInit_4(1);
  if (iVar14 == 0) {
    iVar14 = -0x7fff0001;
    goto LAB_00402fb5;
  }
  iVar14 = _SfMetric_Open_16(&DAT_005ba29c,"Video Capture",0x300003f,0);
  if (((iVar14 != 0) || (iVar14 = _SfLang_Open_16(&DAT_005ba2a0,param_1,0,0), iVar14 != 0)) ||
     (iVar14 = _SfMetric_Open_16(&DAT_005bba88,"Video Capture",0x300003f,"Scratch"), iVar14 != 0))
  goto LAB_004031d6;
  _SfMetric_Open_16(&DAT_005c16d4,"Video Capture",0x300003f,"Kernel");
  SfPrintF(&DAT_005ba44c,&DAT_00586b68,"Version 3.0 (Build 63)");
  if (DAT_005bba34 == 0) {
    local_16c = 0;
    local_168[1] = 0;
    local_168[0] = local_168[0] & 0xffff0000;
    iVar14 = FUN_00462700(local_168,&local_16c,local_168 + 1);
    pvVar1 = DAT_005bba3c;
    if (iVar14 == 0) {
      if (DAT_005bba3c != (LPCVOID)0x0) {
        FUN_0056dee0();
        pvVar6 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(pvVar1);
        GlobalFree(pvVar6);
      }
      pvVar1 = DAT_005bba40;
      DAT_005bba3c = (LPCVOID)0x0;
      if (DAT_005bba40 != (LPCVOID)0x0) {
        FUN_0056dee0();
        pvVar6 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(pvVar1);
        GlobalFree(pvVar6);
        DAT_005bba40 = (LPCVOID)0x0;
      }
      return (HWND)0x0;
    }
    DAT_005bba30 = local_168[0] & 0xffff;
    uVar8 = FUN_00462dc0(0);
    _SfPrintF_AddToken_8("AppName",uVar8);
    uVar8 = FUN_00462dc0(1);
    _SfPrintF_AddToken_8("AppName.Full",uVar8);
    FUN_00573d10(&DAT_005ba32c,0x80);
    FUN_005740a0(&DAT_005ba3ac,0x80);
    FUN_00570880(&DAT_005ba42c,0x20);
  }
  FUN_0041d750(&DAT_005ba530);
  _SfWheel_Initialize_8(param_1,1);
  pvVar6 = GlobalAlloc(0x40,0x23c);
  pvVar7 = GlobalLock(pvVar6);
  if (pvVar7 == (LPVOID)0x0) {
    DAT_005bb0e8 = 0;
  }
  else {
    DAT_005bb0e8 = FUN_0045c190();
    if (DAT_005bb0e8 != 0) {
      iVar14 = FUN_0045c200();
      if ((iVar14 < 0) || (iVar14 = FUN_0045cde0(), iVar14 < 0)) goto LAB_00402fb5;
      iVar9 = FUN_0046ed20();
      if (iVar9 != 0) {
        FUN_004027d0(param_1);
        FUN_004163e0(param_1);
        WebBrowse_AppInitialize(param_1);
        SfControls_Initialize(param_1);
        FUN_00499be0(param_1,"SfKrn_ExplorerEx_Class");
        FUN_00497a10();
        pvVar6 = GlobalAlloc(0x40,0xcc);
        pvVar7 = GlobalLock(pvVar6);
        if (pvVar7 == (LPVOID)0x0) {
          DAT_005bba60 = 0;
        }
        else {
          DAT_005bba60 = FUN_004643d0();
        }
        iVar14 = FUN_00464520();
        if (-1 < iVar14) {
          iVar14 = FUN_00464860();
        }
        iVar9 = FUN_0042e780();
        if (iVar9 == 0) goto LAB_00402fac;
        FUN_0042f6b0(iVar9);
        iVar9 = _SfLoadWindowPlacement_16(DAT_005ba29c,100,2,&local_160);
        LVar4 = local_160.rcNormalPosition.bottom;
        LVar3 = local_160.rcNormalPosition.right;
        if (iVar9 == 1) {
          if (local_160.rcNormalPosition.left + 0x35c < local_160.rcNormalPosition.right) {
            local_160.rcNormalPosition.right = local_160.rcNormalPosition.left + 0x35c;
          }
          if (local_160.rcNormalPosition.top + 0x280 < local_160.rcNormalPosition.bottom) {
            local_160.rcNormalPosition.bottom = local_160.rcNormalPosition.top + 0x280;
          }
          if ((LVar3 == local_160.rcNormalPosition.right) ||
             (LVar4 == local_160.rcNormalPosition.bottom)) {
            local_160.showCmd = 3;
            DAT_005ba55c = 0x96;
          }
        }
        _SfFixWindowPlacement_4(&local_160);
        local_170 = (HWND)FUN_004080b0(param_1,&local_160);
        UVar2 = local_160.showCmd;
        if (local_170 != (HWND)0x0) {
          nCmdShow = 1;
          if (((byte)DAT_005ba4b4 & 0x10) == 0) {
            if (DAT_005ba4b8 != 0) {
              local_160.showCmd = 0;
              nCmdShow = UVar2;
            }
            SetWindowPlacement(local_170,&local_160);
            if (*(int *)(DAT_005ba4c0 + 0x34) != 0) {
              FUN_00409480(DAT_005ba4c0);
            }
          }
          else {
            local_160.showCmd = 0;
            piVar10 = (int *)_SfGetUIFontSize_4(100);
            local_160.rcNormalPosition.right = local_160.rcNormalPosition.left + *piVar10 * 0x3c;
            local_16c = GetSystemMetrics(0x21);
            iVar11 = GetSystemMetrics(4);
            iVar9 = local_16c * 2;
            iVar12 = FUN_00410190();
            local_160.rcNormalPosition.bottom =
                 iVar12 + local_160.rcNormalPosition.top + iVar11 + iVar9;
            _SfForceRectOntoDesktop_12(&local_160.rcNormalPosition,0x50,0x50);
            SetWindowPlacement(local_170,&local_160);
          }
          BVar13 = IsWindowVisible(local_170);
          if (BVar13 == 0) {
            ShowWindow(local_170,nCmdShow);
          }
          PostMessageA(local_170,0x600,DAT_005ba4b8,0);
        }
        DAT_005bba9c = 0;
      }
LAB_004031d6:
      if (-1 < iVar14) {
        return local_170;
      }
      goto LAB_00402fb5;
    }
  }
LAB_00402fac:
  iVar14 = -0x7ff8fff2;
LAB_00402fb5:
  _SfErrorHandler_MsgBox_24(0,0x30,0x1a,iVar14,0,0);
  return local_170;
}


