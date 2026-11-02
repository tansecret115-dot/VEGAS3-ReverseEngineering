/* Module: vegas30.exe
   Function: FUN_00537320
   Address: 00537320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537320(HWND param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  int *piVar6;
  int *piVar7;
  LPCSTR lpString1;
  BOOL BVar8;
  undefined1 *lParam;
  UINT UVar9;
  WPARAM WVar10;
  LPARAM LVar11;
  WPARAM WStack_364;
  int *piStack_360;
  int aiStack_350 [2];
  HWND pHStack_348;
  WCHAR aWStack_23c [252];
  int iStack_44;
  undefined4 uStack_34;
  int iStack_2c;
  int *piStack_28;
  
  pHStack_348 = param_1;
  aiStack_350[1] = 0x53734a;
  iVar1 = FUN_00536dc0();
  if (iVar1 == 0) {
    pHStack_348 = (HWND)0x0;
    aiStack_350[1] = 0x53735e;
    piVar2 = (int *)(**(code **)(_DAT_00000000 + 0x10))();
    aiStack_350[0] = param_2 + 0x1408;
    aiStack_350[1] = 1;
    WStack_364 = param_2 + 0xb7c;
    piStack_360 = (int *)0x1;
    (**(code **)(*DAT_0064b510 + 0x74))();
    LVar11 = 0;
    WVar10 = 0;
    UVar9 = 0x14b;
    pHVar3 = GetDlgItem(param_1,0x3eb);
    SendMessageA(pHVar3,UVar9,WVar10,LVar11);
    iVar1 = (**(code **)(*DAT_0064b510 + 0x78))(DAT_0064b510,piVar2);
    piVar6 = piVar2;
    if ((iVar1 < 0) || (piVar2 == (int *)0x0)) {
      BVar8 = 0;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      EnableWindow(pHVar3,BVar8);
      WVar10 = WStack_364;
    }
    else {
      BVar8 = 1;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      EnableWindow(pHVar3,BVar8);
      piVar7 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        do {
          (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,piVar6,piVar7,8,0,0);
          if (*(int *)(iStack_44 + 0x1448) == 0) {
            (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,piVar6,piVar7,0x1f,0,0);
          }
          iVar1 = (**(code **)(*DAT_0064b510 + 0x8c))(DAT_0064b510,piVar6,piVar7,&stack0xfffffc90);
          if ((-1 < iVar1) &&
             (iVar1 = (**(code **)(*DAT_0064b510 + 0x80))
                                (DAT_0064b510,piVar6,piVar7,aWStack_23c,0x104), -1 < iVar1)) {
            if ((&stack0x00000000 == (undefined1 *)0x23c) || (aWStack_23c[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_23c,-1,&stack0xfffffcc0,0x104,(LPCSTR)0x0,(LPBOOL)0x0)
              ;
            }
            lParam = &stack0xfffffcc0;
            WVar10 = 0;
            UVar9 = 0x143;
            pHVar3 = GetDlgItem(param_1,0x3eb);
            WVar4 = SendMessageA(pHVar3,UVar9,WVar10,(LPARAM)lParam);
            UVar9 = 0x151;
            WVar10 = WVar4;
            piVar6 = piVar7;
            pHVar3 = GetDlgItem(param_1,0x3eb);
            SendMessageA(pHVar3,UVar9,WVar10,(LPARAM)piVar6);
            piVar6 = piStack_360;
            if (piStack_28 == (int *)0xffffffff) {
              if (*(int *)(iStack_2c + 0x1468) == 0) {
                lpString1 = &DAT_00648ed8;
              }
              else {
                lpString1 = &DAT_00648fe0;
              }
              iVar1 = lstrcmpA(lpString1,&stack0xfffffcc0);
              if (iVar1 == 0) {
                WStack_364 = WVar4;
                piStack_28 = piVar7;
              }
            }
            else if (piStack_28 == piVar7) {
              WStack_364 = WVar4;
            }
          }
          piVar7 = (int *)((int)piVar7 + 1);
        } while (piVar7 < piVar2);
      }
      param_2 = iStack_2c;
      WVar10 = WStack_364;
      if (piStack_28 == (int *)0xffffffff) {
        aiStack_350[0] = 0;
        aiStack_350[1] = 0;
        pHStack_348 = (HWND)0x0;
        (**(code **)(_DAT_00000000 + 0x1c))(0,aiStack_350);
        piStack_28 = (int *)FUN_00537730(*(undefined4 *)(iStack_2c + 0xbb0),
                                         *(undefined4 *)(iStack_2c + 0x1448),piVar6,piVar2,
                                         aiStack_350);
        LVar11 = 0;
        WVar4 = 0;
        UVar9 = 0x146;
        pHVar3 = GetDlgItem(param_1,0x3eb);
        LVar5 = SendMessageA(pHVar3,UVar9,WVar4,LVar11);
        WVar4 = 0;
        param_2 = iStack_2c;
        if (0 < LVar5) {
          do {
            LVar11 = 0;
            UVar9 = 0x150;
            WVar10 = WVar4;
            pHVar3 = GetDlgItem(param_1,0x3eb);
            piVar7 = (int *)SendMessageA(pHVar3,UVar9,WVar10,LVar11);
            param_2 = iStack_2c;
            WVar10 = WVar4;
            if (piStack_28 == piVar7) break;
            WVar4 = WVar4 + 1;
            WVar10 = WStack_364;
          } while ((int)WVar4 < LVar5);
        }
      }
    }
    WStack_364 = WVar10;
    LVar11 = 0;
    WVar10 = 0;
    UVar9 = 0x146;
    pHVar3 = GetDlgItem(param_1,0x3eb);
    LVar5 = SendMessageA(pHVar3,UVar9,WVar10,LVar11);
    if (LVar5 == 0) {
      *(undefined4 *)(param_2 + 0x147c) = 1;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      EnableWindow(pHVar3,LVar5);
      piStack_28 = (int *)0x0;
      iVar1 = *DAT_0064b510;
    }
    else {
      LVar11 = 0;
      UVar9 = 0x14e;
      *(undefined4 *)(param_2 + 0x147c) = 0;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      SendMessageA(pHVar3,UVar9,WStack_364,LVar11);
      iVar1 = *DAT_0064b510;
    }
    (**(code **)(iVar1 + 0x7c))(DAT_0064b510,piVar6,piStack_28);
    *(undefined4 *)(param_2 + 0x1478) = uStack_34;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  pHStack_348 = (HWND)0x53771d;
  FUN_00537140();
  return;
}


