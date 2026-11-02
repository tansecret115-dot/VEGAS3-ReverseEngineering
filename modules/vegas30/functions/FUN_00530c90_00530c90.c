/* Module: vegas30.exe
   Function: FUN_00530c90
   Address: 00530c90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00530c90(undefined4 param_1,DWORD param_2,HWND param_3,HINSTANCE param_4,LPCSTR param_5,
                 LPSTR param_6,DWORD param_7,DWORD param_8,LPCSTR param_9,DWORD param_10,
                 undefined4 param_11,undefined4 param_12,LPCSTR param_13,LPCSTR param_14,
                 DWORD param_15,uint param_16,LPCSTR param_17,undefined1 *param_18,code *param_19,
                 LPCSTR param_20,uchar param_21)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  LPCSTR lpString1;
  HCURSOR pHVar4;
  char *pcVar5;
  uchar *_Source;
  HGLOBAL pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  LPCVOID unaff_retaddr;
  CHAR in_stack_00000068;
  undefined4 in_stack_00000168;
  char in_stack_0000016c;
  WCHAR in_stack_00000374;
  int in_stack_000019c4;
  int in_stack_000019f0;
  int *in_stack_000019f4;
  HWND in_stack_00001d24;
  undefined4 *in_stack_00001d28;
  
  FUN_0060ac30();
  puVar10 = (undefined4 *)&stack0x0000057c;
  for (iVar7 = 0x5e8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = in_stack_00001d28;
  puVar11 = (undefined4 *)&stack0x0000057c;
  for (iVar7 = 0x28c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar10 = in_stack_00001d28;
  puVar11 = (undefined4 *)&stack0x00000fac;
  for (iVar7 = 0x28c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  bVar3 = false;
  SetCapture(in_stack_00001d24);
  pHVar4 = (HCURSOR)_SfLoadCursor_8();
  pHVar4 = SetCursor(pHVar4);
  iVar7 = FUN_00530ac0();
  SetCursor(pHVar4);
  ReleaseCapture();
  puVar10 = &param_2;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  param_2 = 0x4c;
  param_14 = (LPCSTR)_SfGetString_8();
  param_18 = &stack0x0000057c;
  param_6 = (LPSTR)0x0;
  param_7 = 0;
  param_8 = 1;
  param_16 = 0;
  param_17 = (LPCSTR)0x0;
  in_stack_0000016c = '\0';
  param_19 = FUN_00530460;
  param_15 = 0x80866;
  param_20 = (LPCSTR)0x325;
  param_4 = (HINSTANCE)_SfFindResInstance_12();
  if (DAT_00648dcc == -1) {
    if (in_stack_000019c4 == 0) {
      param_8 = FUN_0052e9c0();
    }
    else {
      param_8 = FUN_0052e9c0();
    }
  }
  else {
    iVar8 = 0;
    if (0 < iVar7) {
      piVar9 = (int *)&stack0x000019f8;
      do {
        if (*piVar9 == DAT_00648dcc) {
          param_8 = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar8 < iVar7);
    }
  }
  _mbscpy(&stack0x00000270,&DAT_006488a8);
  param_13 = &stack0x00000270;
  FUN_0052e8f0();
  param_17 = (LPCSTR)&param_21;
  _splitpath(&stack0x0000057c,(char *)0x0,(char *)0x0,&stack0x0000016c,(char *)0x0);
  SfPrintF();
  param_9 = &stack0x00000fac;
  param_10 = 0x104;
  iVar7 = GetSaveFileNameA((LPOPENFILENAMEA)&param_2);
  do {
    if (iVar7 == 0) {
      CommDlgExtendedError();
LAB_005310fe:
      if (param_8 != 0) {
        (**(code **)(*DAT_0064b510 + 0x94))();
      }
      if (unaff_retaddr != (LPCVOID)0x0) {
        pvVar6 = GlobalHandle(unaff_retaddr);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(unaff_retaddr);
        GlobalFree(pvVar6);
      }
      return !bVar3;
    }
    pcVar5 = (char *)FUN_005bad20();
    lpString1 = param_9;
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
LAB_00530f9a:
      SfOpenFile_GetPathName(param_9,param_16 & 0xffff,&DAT_006488a8,0x104);
      _splitpath(&stack0x00000fac,(char *)0x0,(char *)0x0,(char *)0x0,(char *)&param_21);
      _Source = &param_21;
      uVar2 = param_21;
      while ((uVar2 != '\0' && (uVar2 == '.'))) {
        _Source = (uchar *)CharNextA((LPCSTR)_Source);
        uVar2 = *_Source;
      }
      _mbscpy(&DAT_006489ac,_Source);
      DAT_00648dcc = *(int *)(&stack0x000019f4 + param_8 * 4);
      puVar10 = (undefined4 *)&stack0x00000fac;
      puVar11 = in_stack_00001d28;
      for (iVar7 = 0x28c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      if (in_stack_000019f4 != (int *)0x0) {
        (**(code **)(*in_stack_000019f4 + 0x10))();
        (**(code **)(*DAT_0064b510 + 0x80))();
        if ((&stack0x00000000 == (undefined1 *)0xfffffc8c) || (in_stack_00000374 != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0x00000374,-1,&stack0x00000068,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0xffffff98) {
          in_stack_00000068 = '\0';
        }
        in_stack_00000168._3_1_ = 0;
        lstrcpynA(&DAT_00648dd0,&stack0x00000068,0x104);
        DAT_00648ed3 = 0;
        in_stack_00001d28[0x44] = in_stack_000019f4;
      }
      bVar3 = true;
      if (in_stack_000019f0 == 0) goto LAB_005310fe;
    }
    else {
      puVar10 = *(undefined4 **)(pcVar5 + 8);
      bVar1 = *(byte *)(puVar10 + 6);
      while ((bVar1 & 2) != 2) {
        iVar7 = lstrcmpiA(lpString1,(LPCSTR)*puVar10);
        if (iVar7 == 0) break;
        if (iVar7 < 0) {
          puVar10 = (undefined4 *)puVar10[4];
        }
        else {
          puVar10 = (undefined4 *)puVar10[5];
        }
        bVar1 = *(byte *)(puVar10 + 6);
      }
      if ((*(byte *)(puVar10 + 6) & 2) == 2) goto LAB_00530f9a;
      if (in_stack_000019f4 != (int *)0x0) {
        (**(code **)(*in_stack_000019f4 + 8))();
      }
      in_stack_000019f4 = (int *)0x0;
      _SfGetString_8();
      iVar7 = SfMsgBox();
      if (iVar7 == 2) {
        bVar3 = false;
        goto LAB_005310fe;
      }
      in_stack_000019f0 = 1;
    }
    iVar7 = GetSaveFileNameA((LPOPENFILENAMEA)&param_2);
  } while( true );
}


