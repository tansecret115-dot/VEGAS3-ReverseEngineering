/* Module: vegas30.exe
   Function: FUN_00530520
   Address: 00530520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00530a7b) */

bool FUN_00530520(undefined4 param_1,DWORD param_2,HWND param_3,HINSTANCE param_4,LPCSTR param_5,
                 LPSTR param_6,DWORD param_7,DWORD param_8,LPCSTR param_9,DWORD param_10,
                 undefined4 param_11,undefined4 param_12,LPCSTR param_13,LPCSTR param_14,
                 DWORD param_15,uint param_16,LPCSTR param_17,undefined1 *param_18,code *param_19,
                 LPCSTR param_20,uchar param_21)

{
  byte bVar1;
  bool bVar2;
  LPCSTR lpString1;
  HCURSOR pHVar3;
  char *pcVar4;
  uchar *_Source;
  uchar uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 in_stack_00000154;
  uchar in_stack_00000158;
  WCHAR in_stack_00000464;
  int in_stack_00001ab4;
  int in_stack_00001ae0;
  int *in_stack_00001ae4;
  HWND in_stack_00001e10;
  undefined4 *in_stack_00001e14;
  int in_stack_00001e18;
  
  FUN_0060ac30();
  puVar9 = (undefined4 *)&stack0x0000066c;
  for (iVar6 = 0x5e8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = in_stack_00001e14;
  puVar10 = (undefined4 *)&stack0x0000066c;
  for (iVar6 = 0x28c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = in_stack_00001e14;
  puVar10 = (undefined4 *)&stack0x0000109c;
  for (iVar6 = 0x28c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  bVar2 = false;
  SetCapture(in_stack_00001e10);
  pHVar3 = (HCURSOR)_SfLoadCursor_8();
  pHVar3 = SetCursor(pHVar3);
  iVar6 = FUN_00530ac0();
  SetCursor(pHVar3);
  ReleaseCapture();
  puVar9 = &param_2;
  for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  param_2 = 0x4c;
  param_5 = (LPCSTR)0x0;
  param_14 = (LPCSTR)_SfGetString_8();
  param_18 = &stack0x0000066c;
  param_6 = (LPSTR)0x0;
  param_7 = 0;
  param_8 = 1;
  param_16 = 0;
  param_17 = (LPCSTR)0x0;
  param_19 = FUN_00530460;
  param_15 = 0x80866;
  param_20 = (LPCSTR)0x325;
  param_4 = (HINSTANCE)_SfFindResInstance_12();
  if (DAT_00648cc4 == -1) {
    if (in_stack_00001ab4 == 0) {
      param_8 = FUN_0052e9c0();
    }
    else {
      param_8 = FUN_0052e9c0();
    }
  }
  else {
    iVar7 = 0;
    if (0 < iVar6) {
      piVar8 = (int *)&stack0x00001ae8;
      do {
        if (*piVar8 == DAT_00648cc4) {
          param_8 = iVar7 + 1;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 < iVar6);
    }
  }
  if (in_stack_00001e18 != 0) {
    param_8 = FUN_0052e9c0();
  }
  _mbscpy(&stack0x00000360,&DAT_006488a8);
  param_13 = &stack0x00000360;
  FUN_0052e8f0();
  param_17 = (LPCSTR)&stack0x00000158;
  _splitpath(&stack0x0000066c,(char *)0x0,(char *)0x0,&stack0x0000025c,(char *)0x0);
  SfPrintF();
  param_9 = &stack0x0000109c;
  param_10 = 0x104;
  iVar6 = GetSaveFileNameA((LPOPENFILENAMEA)&param_2);
  while (iVar6 != 0) {
    if (in_stack_00001ae0 == 0) {
      pcVar4 = (char *)FUN_005bad20();
      lpString1 = param_9;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        puVar9 = *(undefined4 **)(pcVar4 + 8);
        bVar1 = *(byte *)(puVar9 + 6);
        while ((bVar1 & 2) != 2) {
          iVar6 = lstrcmpiA(lpString1,(LPCSTR)*puVar9);
          if (iVar6 == 0) break;
          if (iVar6 < 0) {
            puVar9 = (undefined4 *)puVar9[4];
          }
          else {
            puVar9 = (undefined4 *)puVar9[5];
          }
          bVar1 = *(byte *)(puVar9 + 6);
        }
        if ((*(byte *)(puVar9 + 6) & 2) != 2) {
          if (in_stack_00001ae4 != (int *)0x0) {
            (**(code **)(*in_stack_00001ae4 + 8))();
          }
          in_stack_00001ae4 = (int *)0x0;
          _SfGetString_8();
          iVar6 = SfMsgBox();
          if (iVar6 != 2) {
            in_stack_00001ae0 = 1;
            goto LAB_005307ec;
          }
          bVar2 = false;
          goto LAB_00530a51;
        }
      }
      SfOpenFile_GetPathName(param_9,param_16 & 0xffff,&DAT_006488a8,0x104);
      _splitpath(&stack0x0000109c,(char *)0x0,(char *)0x0,(char *)0x0,(char *)&stack0x00000158);
      _Source = &stack0x00000158;
      uVar5 = in_stack_00000158;
      if (in_stack_00000158 != '\0') goto LAB_00530925;
      goto LAB_00530933;
    }
    iVar6 = SfMsgBox();
    if (iVar6 == 2) {
      bVar2 = false;
      if (in_stack_00001ae4 != (int *)0x0) {
        (**(code **)(*in_stack_00001ae4 + 8))();
      }
      goto LAB_00530a51;
    }
    if (in_stack_00001ae0 == 0) goto LAB_00530a51;
LAB_005307ec:
    iVar6 = GetSaveFileNameA((LPOPENFILENAMEA)&param_2);
  }
  CommDlgExtendedError();
  goto LAB_00530a51;
  while( true ) {
    _Source = (uchar *)CharNextA((LPCSTR)_Source);
    uVar5 = *_Source;
    if (*_Source == '\0') break;
LAB_00530925:
    if (uVar5 != '.') break;
  }
LAB_00530933:
  puVar9 = (undefined4 *)&stack0x0000109c;
  puVar10 = in_stack_00001e14;
  for (iVar6 = 0x28c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (in_stack_00001ae4 != (int *)0x0) {
    _mbscpy(&DAT_006489ac,_Source);
    DAT_00648cc4 = *(int *)(&stack0x00001ae4 + param_8 * 4);
    (**(code **)(*in_stack_00001ae4 + 0x10))();
    iVar6 = (**(code **)(*DAT_0064b510 + 0x80))();
    if (iVar6 < 0) {
      _mbscpy(&param_21,"");
    }
    else {
      if ((&stack0x00000000 == (undefined1 *)0xfffffb9c) || (in_stack_00000464 != L'\0')) {
        WideCharToMultiByte(0,0,(LPCWSTR)&stack0x00000464,-1,(LPSTR)&param_21,0x104,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0xffffffac) {
        param_21 = '\0';
        in_stack_00000154._3_1_ = 0;
        goto LAB_00530a19;
      }
      in_stack_00000154._3_1_ = 0;
    }
LAB_00530a19:
    lstrcpynA(&DAT_00648cc8,(LPCSTR)&param_21,0x104);
    DAT_00648dcb = 0;
    in_stack_00001e14[0x44] = in_stack_00001ae4;
  }
  bVar2 = true;
LAB_00530a51:
  if (param_8 != 0) {
    (**(code **)(*DAT_0064b510 + 0x94))();
  }
  return !bVar2;
}


