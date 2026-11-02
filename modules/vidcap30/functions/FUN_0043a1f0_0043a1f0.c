/* Module: vidcap30.exe
   Function: FUN_0043a1f0
   Address: 0043a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043a1f0(int param_1,int param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  LRESULT LVar7;
  uint uVar8;
  HCURSOR pHVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 local_44c [100];
  undefined1 local_3e8 [1000];
  
  uVar1 = DAT_005bb838;
  iVar4 = FUN_0042f100(DAT_005bb838);
  if (param_4 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar8 = *param_4;
    if (param_3 != 0) {
      KillTimer(*(HWND *)(param_1 + 8),7);
      *(uint *)(param_1 + 0x1adc) = uVar8;
    }
    if ((int)uVar8 < 1) {
      return -0x7ffb1fe5;
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x1adc) = 0;
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 0x200;
      *(undefined4 *)(param_1 + 0x1ae4) = 1;
      uVar5 = (DAT_005bb4a4 & 1) << 1 | 1;
      *(uint *)(param_1 + 0x1ae4) = uVar5;
      uVar10 = (DAT_005bb4e8 & 1) << 2;
      *(uint *)(param_1 + 0x1ae4) = uVar10 | uVar5;
      uVar5 = (DAT_005bb0f4 & 1) << 3 | uVar10 | uVar5;
      *(uint *)(param_1 + 0x1ae4) = uVar5;
      uVar5 = (DAT_005bb7f0 & 1) << 4 | uVar5;
      *(uint *)(param_1 + 0x1ae4) = uVar5;
      *(uint *)(param_1 + 0x1ae4) = (DAT_005bb208 & 1) << 5 | uVar5;
      DAT_005bb4a4 = 0;
      DAT_005bb4e8 = 0;
      DAT_005bb0f4 = 0;
      DAT_005bb7f0 = 0;
      iVar11 = *(int *)(DAT_005bb808 + 0x58) + 1;
      *(int *)(DAT_005bb808 + 0x58) = iVar11;
      if (iVar11 == 1) {
        FUN_00406750(DAT_005ba4c0);
      }
      uVar6 = FUN_00415ec0(*(undefined4 *)(param_1 + 8),uVar8);
      *(undefined4 *)(param_1 + 0x1ae0) = uVar6;
    }
    if (uVar8 <= *(uint *)(param_1 + 0x1adc)) {
      FUN_00416060(*(undefined4 *)(param_1 + 0x1ae0),"Recapture complete.");
      FUN_00416000(*(undefined4 *)(param_1 + 0x1ae0),1);
      FUN_00415f40(*(undefined4 *)(param_1 + 0x1ae0));
      iVar4 = DAT_005bb808;
      iVar11 = *(int *)(DAT_005bb808 + 0x58) + -1;
      *(int *)(DAT_005bb808 + 0x58) = iVar11;
      if (iVar11 == 0) {
        FUN_00406820(DAT_005ba4c0);
      }
      uVar8 = *(uint *)(iVar4 + 0x58);
      *(uint *)(iVar4 + 0x58) = uVar8 & ((int)uVar8 < 1) - 1;
      pHVar9 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
      pHVar9 = SetCursor(pHVar9);
      FUN_00440c80(param_1);
      if (DAT_005bb20c != 0) {
        FUN_00456250(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c64),1,0);
        RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x181);
      }
      iVar4 = FUN_00440510(param_1,uVar1,*(undefined4 *)(param_1 + 0x1c64),1);
      if ((*(uint *)(param_1 + 0x1ae4) & 1) != 0) {
        DAT_005bb4a4 = *(uint *)(param_1 + 0x1ae4) >> 1 & 1;
        DAT_005bb4e8 = *(uint *)(param_1 + 0x1ae4) >> 2 & 1;
        DAT_005bb0f4 = *(uint *)(param_1 + 0x1ae4) >> 3 & 1;
        DAT_005bb7f0 = *(uint *)(param_1 + 0x1ae4) >> 4 & 1;
        DAT_005bb208 = *(uint *)(param_1 + 0x1ae4) >> 5 & 1;
        *(undefined4 *)(param_1 + 0x1ae4) = 0;
      }
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffd7f;
      FUN_00409c30(DAT_005ba4c0,0);
      FUN_0043fe90(param_1,param_1 + 0x1ae8);
      FUN_00440040();
      FUN_0043efc0(param_1);
      SetCursor(pHVar9);
      return iVar4;
    }
    iVar11 = *(int *)(param_4[2] + *(uint *)(param_1 + 0x1adc) * 4);
    if (iVar4 != *(int *)(*(int *)(iVar11 + 4) + 8)) {
      SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,"Please insert tape \'%s\'.",
               *(undefined4 *)(*(int *)(iVar11 + 4) + 0xc));
      FUN_0042f0d0(uVar1,*(undefined4 *)(*(int *)(iVar11 + 4) + 8));
      lstrcpynA(&DAT_005bb680,*(LPCSTR *)(*(int *)(iVar11 + 4) + 0xc),0x104);
      DAT_005bb783 = 0;
      LVar7 = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14d,0xffffffff,
                           *(LPARAM *)(*(int *)(iVar11 + 4) + 0xc));
      if (LVar7 == -1) {
        SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14e,0xffffffff,0);
        SetWindowTextA(*(HWND *)(param_1 + 0x14e0),*(LPCSTR *)(*(int *)(iVar11 + 4) + 0xc));
      }
      SetWindowTextA(*(HWND *)(param_1 + 0x14dc),"");
      FUN_00441da0(param_1);
    }
    uVar1 = *(undefined4 *)(iVar11 + 0x28);
    uVar6 = *(undefined4 *)(iVar11 + 0x2c);
    uVar2 = *(undefined4 *)(iVar11 + 0x20);
    uVar3 = *(undefined4 *)(iVar11 + 0x24);
    uVar13 = FUN_004443a0(iVar11);
    uVar15 = 100;
    puVar14 = local_44c;
    fVar12 = (float10)FUN_0042ed90();
    FUN_0045aec0(uVar2,uVar3,(double)fVar12,puVar14,uVar15);
    SfPrintF(local_3e8,"Seeking $s, at $s",*(undefined4 *)(iVar11 + 0x10),local_44c);
    FUN_00416060(*(undefined4 *)(param_1 + 0x1ae0),local_3e8);
    FUN_004160b0(*(undefined4 *)(param_1 + 0x1ae0),*(undefined4 *)(param_1 + 0x1adc));
    FUN_004160f0(*(undefined4 *)(param_1 + 0x1ae0),0);
    if ((*(uint *)(iVar11 + 0x38) & 0x100) == 0) {
      uVar8 = *(uint *)(param_1 + 0x1ae4) >> 5;
    }
    else {
      uVar8 = *(uint *)(iVar11 + 0x38) >> 7;
    }
    if ((DAT_005bb208 == (uVar8 & 1)) ||
       (DAT_005bb208 = uVar8 & 1, iVar4 = FUN_0042c770(param_1 + 0xa48), -1 < iVar4)) {
      SetTimer(*(HWND *)(param_1 + 8),7,1000,(TIMERPROC)0x0);
      iVar4 = FUN_00427500(param_1 + 0xa48,uVar2,uVar3,uVar1,uVar6,uVar13,
                           *(undefined4 *)(iVar11 + 0x84),*(undefined4 *)(iVar11 + 0x14));
      *(int *)(param_1 + 0x1adc) = *(int *)(param_1 + 0x1adc) + 1;
      return iVar4;
    }
  }
  return iVar4;
}


