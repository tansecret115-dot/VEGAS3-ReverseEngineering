/* Module: vegas30.exe
   Function: FUN_00402ea0
   Address: 00402ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00402ea0(HMODULE param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 uVar6;
  uchar *puVar7;
  undefined4 uVar8;
  uint uVar9;
  BOOL BVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  tagBITMAPINFOHEADER *ptStack_480;
  HWND local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  WINDOWPLACEMENT WStack_470;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  CHAR aCStack_410 [260];
  CHAR aCStack_30c [520];
  undefined1 auStack_104 [260];
  
  puVar3 = &DAT_006471f0;
  for (iVar13 = 0x10e6; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_47c = (HWND)0x0;
  DAT_006471fc = param_1;
  DAT_006471f0 = _SfIsWin95_0();
  DAT_00647208 = GetCurrentThreadId();
  DAT_006471f4 = _SfIsHighColor_0();
  _DAT_0064b51c = 0x7f;
  GetSystemInfo((LPSYSTEM_INFO)&DAT_006475f8);
  iVar13 = _SfLang_Open_16(&DAT_00647204,param_1,0,0);
  if (iVar13 < 0) {
LAB_00402ffa:
    if (DAT_0064b580 != (undefined4 *)0x0) {
      if ((undefined4 *)DAT_0064b580[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)DAT_0064b580[1])(1);
      }
      if (DAT_0064b580 != (undefined4 *)0x0) {
        (**(code **)*DAT_0064b580)(1);
      }
      DAT_0064b580 = (undefined4 *)0x0;
    }
    if (iVar13 < 0) goto LAB_004036f7;
  }
  else {
    pvVar1 = GlobalAlloc(0x40,0x5c);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      iVar13 = -0x7ff8fff2;
      DAT_0064b580 = (undefined4 *)0x0;
      goto LAB_00402ffa;
    }
    DAT_0064b580 = (undefined4 *)FUN_0057ee60();
    if (DAT_0064b580 == (undefined4 *)0x0) {
      iVar13 = -0x7ff8fff2;
      goto LAB_00402ffa;
    }
    pvVar1 = GlobalAlloc(0x40,0x20);
    pvVar2 = GlobalLock(pvVar1);
    if ((pvVar2 == (LPVOID)0x0) || (iVar13 = FUN_0057ee10(), iVar13 == 0)) {
LAB_00402ff0:
      iVar13 = -0x7ff8fff2;
      goto LAB_00402ffa;
    }
    FUN_00580c90("Sonic Foundry Vegas");
    *(undefined4 *)(iVar13 + 0x14) = 0;
    *(undefined4 *)(iVar13 + 0x18) = 0;
    FUN_00580c90("Vegas");
    FUN_00580c90("Version 3.0 (Build 76)");
    *(undefined4 *)(iVar13 + 0xc) = 0x300004c;
    iVar13 = FUN_0057f2e0(param_1,DAT_00647204,iVar13);
    if (iVar13 < 0) goto LAB_00402ffa;
    pvVar1 = GlobalAlloc(0x40,4);
    puVar3 = GlobalLock(pvVar1);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00402ff0;
    FUN_0057ed90();
    *puVar3 = &PTR_FUN_0060fac0;
    DAT_0064b580[0xd] = puVar3;
  }
  pHVar4 = FindWindowA("Vegas.Class.Frame",(LPCSTR)0x0);
  DAT_006471f8 = (uint)(pHVar4 != (HWND)0x0);
  iVar13 = _SfKernel_CheckVersion_20(0,"Sonic Foundry Vegas",0x300004c,2,0);
  if (iVar13 != 0) {
    return local_47c;
  }
  _SfMsgBoxSetAppData_12(param_1,0,"Vegas");
  uStack_42c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_41c = 0x1e8ff37;
  uStack_418 = 0x947c9bbd;
  uStack_414 = 0x72f0931c;
  uStack_444 = 0xf585c;
  uStack_440 = 0x29ece853;
  uStack_43c = 0x315c382;
  uStack_438 = 0x1ea9d76;
  uStack_434 = 0x99598eb8;
  uStack_430 = 0x6729ec87;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    DAT_0064b4f8 = (LPCVOID)0x0;
  }
  else {
    DAT_0064b4f8 = (LPCVOID)FUN_005feab0(0x132,199,"Vegas\\3.0",&uStack_42c,&uStack_444,1,1,0,2,0,
                                         "Vegas.Class.Frame",0);
  }
  FUN_00402c50();
  if (((byte)DAT_0064761c & 0x10) != 0) {
    _SfMsgBoxSetNoUIHook_4(FUN_004100d0);
  }
  iVar13 = _SfOleInit_4(1);
  if (iVar13 == 0) {
    iVar13 = -0x7fff0001;
    goto LAB_004036f7;
  }
  iVar13 = _SfMetric_Open_16(&DAT_00647200,"Vegas",0x300004c,0);
  bVar14 = iVar13 < 0;
  if (iVar13 == 0) {
    SfPrintF(auStack_104,"%s.%d","Plug-In Manager",1);
    iVar13 = _SfMetric_OpenSubKey_12(&DAT_0064b520,DAT_00647200,auStack_104);
    bVar14 = iVar13 < 0;
    if (iVar13 == 0) {
      iVar13 = _SfLang_AddStringTable_16(DAT_00647204,&PTR_s_Desktop_0063c210,0x3b,1000);
      bVar14 = iVar13 < 0;
      if (iVar13 == 0) {
        SfPrintF(&DAT_006473b0,&DAT_0060fa70,"Version 3.0 (Build 76)");
        if (DAT_0064b4f0 == 0) {
          uStack_478 = 0;
          uStack_474 = 0;
          iVar5 = FUN_0043ca20(&ptStack_480,&uStack_478,&uStack_474);
          pMem = DAT_0064b4f8;
          if (iVar5 != 0) {
            DAT_0064b4dc = (uint)ptStack_480 & 0xffff;
            DAT_0064b4e0 = (uint)ptStack_480 & 0xff;
            DAT_0064b4e4 = DAT_0064b4dc >> 8;
            FUN_00604af0(&DAT_00647290,0x80);
            FUN_00604e80(&DAT_00647310,0x80);
            FUN_00601660(&DAT_00647390,0x20);
            if ((DAT_00647390 == '\0') || (DAT_0064b4f0 != 0)) {
              FUN_00605b60(DAT_0064b4f8,&DAT_00647390,0x20);
            }
            goto LAB_0040328f;
          }
          if (DAT_0064b4f8 != (LPCVOID)0x0) {
            FUN_005fecc0();
            pvVar1 = GlobalHandle(pMem);
            GlobalUnlock(pvVar1);
            pvVar1 = GlobalHandle(pMem);
            GlobalFree(pvVar1);
          }
          DAT_0064b4f8 = (LPCVOID)0x0;
        }
        else {
LAB_0040328f:
          uVar6 = FUN_0043cf70(0);
          puVar7 = (uchar *)FUN_0043cf70(1);
          uVar8 = FUN_0043cf70(1);
          _SfPrintF_AddToken_8("AppName",uVar6);
          _SfPrintF_AddToken_8("AppName.Full",puVar7);
          _SfPrintF_AddToken_8("AppName.Title",uVar8);
          _mbscpy(&DAT_00647210,puVar7);
          if (DAT_0064b4f0 == 0) {
            _mbscpy(&DAT_00647210,puVar7);
          }
          else {
            SfPrintF(&DAT_00647210,"%s %s",puVar7,&DAT_0060f91c);
          }
          FUN_004f9990(&DAT_006476a0);
          if (DAT_0064b4e4 == 0) {
            iVar13 = FUN_00601ab0(&uStack_478,&ptStack_480,1);
            if (iVar13 < 0) {
              DAT_0064b4f0 = 1;
            }
            else {
              uVar9 = ((uint)ptStack_480 & 0xffff) >> 8;
              if ((int)DAT_0064b4e4 <= (int)uVar9) {
                DAT_0064b4f0 = 0;
                _DAT_0064b4f4 = uStack_478;
                DAT_0064b4e4 = uVar9;
              }
            }
          }
          if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
            aCStack_410[0] = '\0';
            GetModuleFileNameA(DAT_006471fc,aCStack_410,0x104);
            puVar7 = (uchar *)_SfGetFileNamePtrA_4(aCStack_410);
            _mbscpy(puVar7,&DAT_0064aefc);
            BVar10 = PathCanonicalizeA(aCStack_30c,aCStack_410);
            if ((BVar10 != 0) && (BVar10 = PathFileExistsA(aCStack_30c), BVar10 != 0)) {
              _SfVideoPlugin_SetToNonSharedMode_12(aCStack_30c,DAT_00647200,0);
            }
            iVar13 = _SfVideoPlugin_CreateInstance_4(&DAT_0064b50c);
            if (iVar13 < 0) goto LAB_004036f7;
          }
          _SfWheel_Initialize_8(param_1,DAT_0064a47c);
          FUN_00402950(param_1);
          SfLoadPngDib(DAT_00647204,(char *)0x336,0,&ptStack_480);
          DAT_0064b500 = ptStack_480;
          iVar13 = CoCreateInstance((IID *)&DAT_0062eba8,(LPUNKNOWN)0x0,1,(IID *)&DAT_0062ebb8,
                                    &DAT_0064b504);
          if (iVar13 < 0) goto LAB_004036f7;
          pHVar4 = FindWindowA("Vegas.Class.Frame",(LPCSTR)0x0);
          if (pHVar4 == (HWND)0x0) {
            FUN_00535390();
          }
          FUN_004e6ac0(param_1);
          iVar13 = FUN_005fac00(DAT_0064aa2c,DAT_0064aa38 | DAT_0064aa34 | DAT_0064aa30);
          if (iVar13 < 0) goto LAB_004036f7;
          iVar13 = FUN_0059e230();
          bVar14 = iVar13 < 0;
          if (iVar13 != 0) goto LAB_004036f5;
          iVar13 = FUN_00443ba0();
          if (iVar13 < 0) goto LAB_004036f7;
          _SfVideoKeyframe_SetDefaultKeyframeType_4(DAT_0064ab7c);
          iVar13 = FUN_00543150();
          if (iVar13 < 0) goto LAB_004036f7;
          iVar13 = FUN_005b9ca0();
          if (iVar13 == 0) {
            iVar13 = -0x7ff8fff2;
            goto LAB_004036f7;
          }
          FUN_004325c0(iVar13);
          iVar5 = _SfLoadWindowPlacement_16(DAT_00647200,100,2,&WStack_470);
          if (iVar5 == 1) {
            WStack_470.showCmd = 3;
          }
          _SfFixWindowPlacement_4(&WStack_470);
          FUN_00589d00();
          FUN_00589e40();
          DAT_0064b570 = FUN_005754e0();
          DAT_0064b574 = FUN_005752b0();
          DAT_0064b578 = FUN_00579c10();
          if ((DAT_0064b578 != 0) && (iVar5 = FUN_00579dd0(), -1 < iVar5)) {
            FUN_0057a400();
          }
          pHVar4 = (HWND)FUN_00410250(param_1,&WStack_470);
          local_47c = pHVar4;
          if (pHVar4 != (HWND)0x0) {
            if (((byte)DAT_0064761c & 0x10) == 0) {
              if (DAT_00647620 != 0) {
                WStack_470.showCmd = 0;
              }
              SetWindowPlacement(pHVar4,&WStack_470);
              FUN_00411bc0(DAT_0064762c);
            }
            else {
              WStack_470.showCmd = 0;
              piVar11 = (int *)_SfGetUIFontSize_4(100);
              WStack_470.rcNormalPosition.right = WStack_470.rcNormalPosition.left + *piVar11 * 0x3c
              ;
              ptStack_480 = (tagBITMAPINFOHEADER *)GetSystemMetrics(0x21);
              iVar12 = GetSystemMetrics(4);
              iVar5 = (int)ptStack_480 * 2;
              WStack_470.rcNormalPosition.bottom = FUN_004e7800();
              WStack_470.rcNormalPosition.bottom =
                   WStack_470.rcNormalPosition.bottom +
                   WStack_470.rcNormalPosition.top + iVar12 + iVar5;
              _SfForceRectOntoDesktop_12(&WStack_470.rcNormalPosition,0x50,0x50);
              SetWindowPlacement(pHVar4,&WStack_470);
            }
            BVar10 = IsWindowVisible(pHVar4);
            if (BVar10 == 0) {
              ShowWindow(pHVar4,8);
            }
            PostMessageA(pHVar4,0x600,DAT_00647620,0);
          }
          FUN_005b3fd0(iVar13);
          FUN_00562390(&DAT_0064b538,pHVar4,&DAT_0064a4a8);
          iVar13 = SfWtsRegisterSessionNotification(DAT_00647624,0);
          pHVar4 = FindWindowA("VIDCAP.3.0.Class.Frame",(LPCSTR)0x0);
          if ((pHVar4 != (HWND)0x0) && (DAT_00647d28 == 1)) {
            SfPrintF(aCStack_30c,"%s /NOLOGO /NotifyWindow:%x /pkey %s",&DAT_00647c24,DAT_00647624,
                     &DAT_00647390);
            FUN_004050f0(aCStack_30c,1);
          }
        }
        bVar14 = iVar13 < 0;
      }
    }
  }
LAB_004036f5:
  if (!bVar14) {
    return local_47c;
  }
LAB_004036f7:
  _SfErrorHandler_MsgBox_24(0,0x30,0x1a,iVar13,0,0);
  (**(code **)(*DAT_0064b504 + 8))(DAT_0064b504);
  DAT_0064b504 = (int *)0x0;
  return local_47c;
}


