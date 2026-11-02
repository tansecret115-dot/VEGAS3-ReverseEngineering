/* Module: vegas30.exe
   Function: FUN_0052ecd0
   Address: 0052ecd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ecd0(HWND param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  WPARAM WVar5;
  int iVar6;
  LRESULT LVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  WPARAM WVar12;
  CHAR *lParam;
  int *piVar13;
  int *piVar14;
  int iVar15;
  UINT UVar16;
  WPARAM WVar17;
  LPARAM LVar18;
  BOOL BVar19;
  CHAR aCStack_330 [4];
  undefined4 local_32c;
  int local_328;
  undefined4 local_320;
  undefined1 uStack_24d;
  WCHAR aWStack_24c [10];
  undefined2 auStack_238 [5];
  undefined1 uStack_22d;
  WCHAR aWStack_22c [250];
  undefined4 uStack_38;
  undefined4 uStack_24;
  int iStack_1c;
  uint uStack_18;
  
  LVar18 = 0;
  WVar17 = 0;
  UVar16 = 0x147;
  iVar15 = 0x470;
  pHVar1 = GetParent(param_1);
  pHVar1 = GetDlgItem(pHVar1,iVar15);
  iVar15 = SendMessageA(pHVar1,UVar16,WVar17,LVar18);
  if (iVar15 != -1) {
    iVar15 = *(int *)(param_2 + 0x147c + iVar15 * 4);
  }
  LVar18 = 0;
  WVar17 = 0;
  UVar16 = 0x14b;
  local_328 = iVar15;
  if (iVar15 < 0) {
    pHVar1 = GetDlgItem(param_1,0x3eb);
    SendMessageA(pHVar1,UVar16,WVar17,LVar18);
    BVar19 = 0;
    pHVar1 = GetDlgItem(param_1,0x3eb);
    EnableWindow(pHVar1,BVar19);
    FUN_0052eb30();
    return;
  }
  pHVar1 = GetDlgItem(param_1,0x3eb);
  SendMessageA(pHVar1,UVar16,WVar17,LVar18);
  local_320 = 0;
  local_32c = 0;
  WVar17 = 0;
  iVar6 = *(int *)(param_2 + 0x1448);
  uVar8 = param_2 + 0xfe0;
  piVar13 = (int *)(param_2 + 0xb7c);
  iVar2 = (**(code **)(*DAT_0064b510 + 0x74))(DAT_0064b510,iVar15,piVar13,1);
  if ((((iVar2 == -0x7ffb1fb9) || (-1 < iVar2)) &&
      (iVar2 = (**(code **)(*DAT_0064b510 + 0x78))(DAT_0064b510,iVar15,&stack0xfffffcb0), -1 < iVar2
      )) && (uVar8 != 0)) {
    BVar19 = 1;
    pHVar1 = GetDlgItem(param_1,0x3eb);
    EnableWindow(pHVar1,BVar19);
    uVar10 = 0;
    if (uVar8 != 0) {
      do {
        iVar2 = 1;
        if ((*(int *)(iStack_1c + 0x1468) != 0) &&
           (uVar3 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,iVar15,uVar10,8,0,0), 1 < uVar3
           )) {
          iVar2 = 0;
        }
        if ((*(int *)(iStack_1c + 0x1448) == 0) &&
           (iVar4 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,iVar15,uVar10,0x1f,0,0),
           iVar4 != 0)) {
          iVar2 = 0;
        }
        uVar3 = 0;
        iVar4 = (**(code **)(*DAT_0064b510 + 0x8c))(DAT_0064b510,iVar15,uVar10,&stack0xfffffcb8);
        if ((((-1 < iVar4) && (iVar2 != 0)) && ((uVar3 & 0xff000000) < 0x1000001)) &&
           (iVar2 = (**(code **)(*DAT_0064b510 + 0x80))
                              (DAT_0064b510,iVar15,uVar10,aWStack_22c,0x104), -1 < iVar2)) {
          if ((&stack0x00000000 == (undefined1 *)0x22c) || (aWStack_22c[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_22c,-1,aCStack_330,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar15 = iVar6;
          }
          else {
            iVar15 = iVar6;
            if (&stack0x00000000 != (undefined1 *)0x330) {
              aCStack_330[0] = '\0';
            }
          }
          lParam = aCStack_330;
          uStack_22d = 0;
          WVar12 = 0;
          UVar16 = 0x143;
          pHVar1 = GetDlgItem(param_1,0x3eb);
          WVar5 = SendMessageA(pHVar1,UVar16,WVar12,(LPARAM)lParam);
          UVar16 = 0x151;
          WVar12 = WVar5;
          uVar3 = uVar10;
          pHVar1 = GetDlgItem(param_1,0x3eb);
          SendMessageA(pHVar1,UVar16,WVar12,uVar3);
          if (uStack_18 == 0xffffffff) {
            iVar2 = lstrcmpA(*(LPCSTR *)(iStack_1c + 0x1470),aCStack_330);
            iVar6 = iVar15;
            if (iVar2 == 0) {
              WVar17 = WVar5;
              uStack_18 = uVar10;
            }
          }
          else {
            iVar6 = iVar15;
            if (uStack_18 == uVar10) {
              WVar17 = WVar5;
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
    param_2 = iStack_1c;
    WVar12 = WVar17;
    if (uStack_18 == 0xffffffff) {
      piVar14 = (int *)0x0;
      iVar6 = (**(code **)(*DAT_0064b510 + 0x34))(DAT_0064b510,&stack0xfffffcac,iVar15);
      if (-1 < iVar6) {
        (**(code **)(*piVar14 + 0x1c))(piVar14,&stack0xfffffcc0);
        (**(code **)(*piVar13 + 8))(piVar13);
      }
      uStack_18 = FUN_0052f220(*(undefined4 *)(iStack_1c + 0xbb0),
                               *(undefined4 *)(iStack_1c + 0x1448),iVar15,uVar8,&stack0xfffffcc0);
      LVar18 = 0;
      WVar12 = 0;
      UVar16 = 0x146;
      pHVar1 = GetDlgItem(param_1,0x3eb);
      LVar7 = SendMessageA(pHVar1,UVar16,WVar12,LVar18);
      WVar5 = 0;
      param_2 = iStack_1c;
      WVar12 = WVar17;
      if (0 < LVar7) {
        do {
          LVar18 = 0;
          UVar16 = 0x150;
          WVar12 = WVar5;
          pHVar1 = GetDlgItem(param_1,0x3eb);
          uVar8 = SendMessageA(pHVar1,UVar16,WVar12,LVar18);
          param_2 = iStack_1c;
          WVar12 = WVar5;
          if (uStack_18 == uVar8) break;
          WVar5 = WVar5 + 1;
          WVar12 = WVar17;
        } while ((int)WVar5 < LVar7);
      }
    }
  }
  else {
    BVar19 = 0;
    pHVar1 = GetDlgItem(param_1,0x3eb);
    EnableWindow(pHVar1,BVar19);
    WVar12 = WVar17;
  }
  LVar18 = 0;
  WVar17 = 0;
  UVar16 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x3eb);
  LVar7 = SendMessageA(pHVar1,UVar16,WVar17,LVar18);
  if (LVar7 == 0) {
    *(undefined4 *)(param_2 + 0x1474) = 1;
    pHVar1 = GetDlgItem(param_1,0x3eb);
    EnableWindow(pHVar1,LVar7);
    uStack_18 = 0;
    (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,iVar15,0);
  }
  else {
    LVar18 = 0;
    UVar16 = 0x14e;
    *(undefined4 *)(param_2 + 0x1474) = 0;
    pHVar1 = GetDlgItem(param_1,0x3eb);
    SendMessageA(pHVar1,UVar16,WVar12,LVar18);
    iVar6 = (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,iVar15,uStack_18);
    if (iVar6 < 0) {
      auStack_238[0] = 0;
      (**(code **)(*DAT_0064b510 + 0x80))(DAT_0064b510,iVar15,uStack_24,auStack_238,0x104);
      if ((&stack0x00000000 == (undefined1 *)0x24c) || (aWStack_24c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_24c,-1,&stack0xfffffcb0,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      puVar11 = &stack0xfffffcb0;
      uStack_24d = 0;
      uVar9 = _SfGetString_8(DAT_00647204,0x6dbf);
      SfMsgBox(param_1,0x30,uVar9,puVar11);
      uStack_38 = 0;
      (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,iVar15,0);
      LVar18 = 0;
      WVar17 = 0;
      UVar16 = 0x14e;
      pHVar1 = GetDlgItem(param_1,0x3eb);
      SendMessageA(pHVar1,UVar16,WVar17,LVar18);
    }
  }
  *(undefined4 *)(param_2 + 0x146c) = uStack_24;
  FUN_0052eb30(param_1,param_2);
  return;
}


