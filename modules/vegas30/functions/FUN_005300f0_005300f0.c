/* Module: vegas30.exe
   Function: FUN_005300f0
   Address: 005300f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005300f0(HWND param_1,uint param_2,undefined4 param_3,uint param_4)

{
  HWND hWnd;
  LONG LVar1;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_retaddr;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UINT UVar11;
  undefined4 uVar12;
  WPARAM WVar13;
  undefined4 uVar14;
  LPARAM LVar15;
  int *piVar16;
  uint local_8;
  int local_4;
  
  hWnd = param_1;
  LVar1 = GetWindowLongA(param_1,8);
  if ((int)param_2 < 0x471) {
    if (param_2 == 0x470) {
      FUN_0052ff20(hWnd,LVar1);
      return;
    }
    if ((int)param_2 < 0x3ec) {
      if (param_2 == 0x3eb) {
        if (param_4 == 1) {
          FUN_0052f880(hWnd,LVar1);
          return;
        }
      }
      else if (param_2 == 9) {
        LVar15 = 0;
        WVar13 = 0;
        UVar11 = 0x147;
        iVar2 = 0x470;
        pHVar3 = GetParent(hWnd);
        pHVar3 = GetDlgItem(pHVar3,iVar2);
        LVar4 = SendMessageA(pHVar3,UVar11,WVar13,LVar15);
        if ((LVar4 != -1) && (local_4 = *(int *)(LVar1 + 0x147c + LVar4 * 4), -1 < local_4)) {
          LVar15 = 0;
          WVar13 = 0;
          UVar11 = 0x147;
          param_1 = (HWND)0x0;
          pHVar3 = GetDlgItem(hWnd,0x3eb);
          WVar13 = SendMessageA(pHVar3,UVar11,WVar13,LVar15);
          if (WVar13 != 0xffffffff) {
            LVar15 = 0;
            UVar11 = 0x150;
            pHVar3 = GetDlgItem(hWnd,0x3eb);
            param_1 = (HWND)SendMessageA(pHVar3,UVar11,WVar13,LVar15);
          }
          if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
            iVar2 = FUN_00601ab0(&param_4,&param_2,1);
            if (iVar2 < 0) {
              DAT_0064b4f0 = 1;
            }
            else if ((int)DAT_0064b4e0 <= (int)(param_2 & 0xff)) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = param_4;
              DAT_0064b4e0 = param_2 & 0xff;
            }
          }
          param_2 = 48000;
          if (0x3f < (int)DAT_0064b4e0) {
            param_2 = 96000;
          }
          if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
            iVar2 = FUN_00601ab0(&local_8,&param_4,1);
            if (iVar2 < 0) {
              DAT_0064b4f0 = 1;
            }
            else if ((int)DAT_0064b4e0 <= (int)(param_4 & 0xff)) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_8;
              DAT_0064b4e0 = param_4 & 0xff;
            }
          }
          uVar6 = 0x10;
          if (0x3f < (int)DAT_0064b4e0) {
            uVar6 = 0x18;
          }
          piVar5 = (int *)FUN_005e3f40();
          if ((piVar5 != (int *)0x0) && (DAT_0064b138 != 0)) {
            FUN_005e3f90(DAT_0064b138,piVar5);
          }
          uVar14 = *(undefined4 *)(LVar1 + 0x1448);
          uVar12 = *(undefined4 *)(LVar1 + 0xbb0);
          uVar10 = *(undefined4 *)(LVar1 + 0x1468);
          iVar2 = LVar1 + 0xbb4;
          iVar8 = LVar1 + 0xb64;
          puVar7 = &param_1;
          uVar9 = param_2;
          param_2 = *DAT_0064b510;
          piVar16 = piVar5;
          pHVar3 = GetParent(hWnd);
          (**(code **)(param_2 + 0x88))
                    (DAT_0064b510,local_4,pHVar3,puVar7,iVar8,iVar2,uVar9,uVar6,uVar10,uVar12,uVar14
                     ,piVar16);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          FUN_0052ecd0(hWnd,LVar1,uVar6);
          return;
        }
      }
      else if (param_2 == 10) {
        param_1 = (HWND)0x0;
        iVar2 = FUN_0052ea80(hWnd,LVar1,&param_1);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_1->unused + 0x78))(param_1);
          if (iVar2 == 0) {
            (**(code **)(*unaff_retaddr + 0x7c))(unaff_retaddr,hWnd);
          }
          (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
          return;
        }
      }
    }
    else {
      if (param_2 == 0x43b) {
        FUN_0052ffd0(hWnd,LVar1);
        return;
      }
      if (param_2 == 0x46f) {
        FUN_0052ff70(hWnd,LVar1);
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x471:
      FUN_0052fe80(hWnd,LVar1);
      break;
    case 0x472:
      FUN_0052fe20(hWnd,LVar1);
      return;
    case 0x47b:
      FUN_0052ffe0(hWnd,LVar1);
      return;
    case 0x47c:
      FUN_0052fed0(hWnd,LVar1);
      return;
    }
  }
  return;
}


