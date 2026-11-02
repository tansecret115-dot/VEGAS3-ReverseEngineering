/* Module: vegas30.exe
   Function: FUN_00516c10
   Address: 00516c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516c10(int *param_1,HWND param_2)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  HWND pHVar5;
  LPARAM LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  BOOL BVar14;
  undefined4 local_15c [23];
  undefined1 local_100 [24];
  undefined4 local_e8 [20];
  double local_98;
  undefined1 local_84 [132];
  
  if ((((param_1 != (int *)0x0) && (iVar3 = *param_1, iVar3 != 0)) &&
      (iVar8 = *(int *)(iVar3 + 0x98), iVar8 != 0)) && ((*(byte *)(iVar8 + 4) & 1) != 0)) {
    iVar2 = *(int *)(iVar8 + 0x9c);
    LVar1 = GetWindowLongA(param_2,-0xc);
    if (LVar1 != iVar2) {
      *(undefined4 *)(*(int *)(iVar3 + 0x98) + 0x9c) = 3;
      FUN_0051cff0();
      return;
    }
    iVar2 = FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar8 + 0x88),
                         *(undefined4 *)(iVar8 + 0x8c),local_100,0,0,0);
    if (iVar2 != -1) {
      puVar9 = local_e8;
      puVar11 = local_15c;
      for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_005a6120(local_15c,local_15c,-local_98,0);
      FUN_005a5f80(iVar8 + 0x24);
      FUN_005a5ff0(iVar8 + 0x24);
      FUN_005a5f80(local_15c);
      FUN_005a5ff0(local_15c);
      iVar2 = *(int *)(iVar8 + 0x9c);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          iVar3 = FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar8 + 0x88),
                               *(undefined4 *)(iVar8 + 0x8c),local_84,1,0,0);
          pcVar10 = GetDlgItem_exref;
          if ((iVar3 == -1) || ((*(byte *)(iVar8 + 4) & 4) != 0)) {
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x522);
            pcVar12 = EnableWindow_exref;
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x523);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x524);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x527);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x529);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52d);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52f);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x525);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x526);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x528);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52a);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x52e);
            EnableWindow(pHVar4,BVar14);
          }
          else {
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x522);
            pcVar12 = EnableWindow_exref;
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x523);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x524);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x527);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x529);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52d);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52f);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x525);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x526);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x528);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52a);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x52e);
            EnableWindow(pHVar4,BVar14);
          }
          pHVar4 = GetDlgItem(param_2,0x530);
          (*pcVar12)();
          pHVar5 = GetDlgItem(param_2,0x525);
          iVar3 = ftol();
          pcVar12 = SendMessageA_exref;
          SendMessageA(pHVar5,0x60e,0,iVar3 * 3);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 << 2);
          pHVar5 = GetDlgItem(param_2,0x526);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60e,0,iVar3 * 3);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 4);
          pHVar5 = GetDlgItem(param_2,0x528);
          SendMessageA(pHVar5,0x60e,0,0);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 3);
          pHVar5 = GetDlgItem(param_2,0x52a);
          SendMessageA(pHVar5,0x60e,0,0);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 3);
          pHVar5 = GetDlgItem(param_2,0x52c);
          SendMessageA(pHVar5,0x60e,0,-0x168);
          SendMessageA(pHVar5,0x60f,0,0x168);
          pHVar5 = GetDlgItem(param_2,0x52e);
          SendMessageA(pHVar5,0x60e,0,0);
          LVar6 = ftol();
          SendMessageA(pHVar5,0x60f,0,LVar6);
          uVar13 = CONCAT44(pHVar4,0x530);
        }
        else {
          if (iVar2 != 2) {
            return;
          }
          iVar3 = FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar8 + 0x88),
                               *(undefined4 *)(iVar8 + 0x8c),local_84,2,0,0);
          pcVar10 = GetDlgItem_exref;
          if ((iVar3 == -1) || ((*(byte *)(iVar8 + 4) & 8) != 0)) {
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x532);
            pcVar12 = EnableWindow_exref;
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x535);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x536);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x539);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x53a);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x54b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x537);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x538);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x53b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x53c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x54c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x53f);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x540);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 0;
            pHVar4 = GetDlgItem(param_2,0x53d);
            EnableWindow(pHVar4,BVar14);
          }
          else {
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x532);
            pcVar12 = EnableWindow_exref;
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x535);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x536);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x539);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x53a);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x54b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x537);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x538);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x53b);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x53c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x54c);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x53f);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x540);
            EnableWindow(pHVar4,BVar14);
            BVar14 = 1;
            pHVar4 = GetDlgItem(param_2,0x53d);
            EnableWindow(pHVar4,BVar14);
          }
          pHVar4 = GetDlgItem(param_2,0x53e);
          (*pcVar12)();
          pHVar5 = GetDlgItem(param_2,0x537);
          iVar3 = ftol();
          pcVar12 = SendMessageA_exref;
          SendMessageA(pHVar5,0x60e,0,iVar3 * 3);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 4);
          pHVar5 = GetDlgItem(param_2,0x538);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60e,0,iVar3 * 3);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 << 2);
          pHVar5 = GetDlgItem(param_2,0x53b);
          SendMessageA(pHVar5,0x60e,0,0);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 3);
          pHVar5 = GetDlgItem(param_2,0x53c);
          SendMessageA(pHVar5,0x60e,0,0);
          iVar3 = ftol();
          SendMessageA(pHVar5,0x60f,0,iVar3 * 3);
          pHVar5 = GetDlgItem(param_2,0x54c);
          SendMessageA(pHVar5,0x60e,0,-0x168);
          SendMessageA(pHVar5,0x60f,0,0x168);
          pHVar5 = GetDlgItem(param_2,0x53e);
          SendMessageA(pHVar5,0x60e,0,0);
          LVar6 = ftol();
          SendMessageA(pHVar5,0x60f,0,LVar6);
          uVar13 = CONCAT44(pHVar4,0x540);
        }
        uVar7 = (*pcVar10)(param_2,uVar13);
        (*pcVar12)(uVar7,0x60e,0,0);
        (*pcVar12)(uVar7,0x60f,0,100);
        return;
      }
      pHVar4 = GetDlgItem(param_2,0x51a);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60e,0,iVar8 * 3);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60f,0,iVar8 << 2);
      pHVar4 = GetDlgItem(param_2,0x51c);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60e,0,iVar8 * 3);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60f,0,iVar8 * 4);
      pHVar4 = GetDlgItem(param_2,0x517);
      SendMessageA(pHVar4,0x60e,0,0);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60f,0,iVar8 * 3);
      pHVar4 = GetDlgItem(param_2,0x518);
      SendMessageA(pHVar4,0x60e,0,0);
      iVar8 = ftol();
      SendMessageA(pHVar4,0x60f,0,iVar8 * 3);
      pHVar4 = GetDlgItem(param_2,0x51e);
      SendMessageA(pHVar4,0x60e,0,-36000);
      SendMessageA(pHVar4,0x60f,0,36000);
      pHVar4 = GetDlgItem(param_2,0x520);
      SendMessageA(pHVar4,0x60e,0,0);
      SendMessageA(pHVar4,0x60f,0,100);
      if ((*(uint *)(*(int *)(iVar3 + 0x98) + 4) & 0x1000) == 0) {
        CheckDlgButton(param_2,0x544,*(uint *)(*(int *)(*(int *)(iVar3 + 0x98) + 0x90) + 0xf8) & 1);
        CheckDlgButton(param_2,0x545,~*(uint *)(*(int *)(iVar3 + 0x98) + 4) >> 1 & 1);
        iVar3 = 5;
        pHVar4 = GetDlgItem(param_2,0x542);
        pcVar10 = ShowWindow_exref;
        ShowWindow(pHVar4,iVar3);
        iVar3 = 5;
        pHVar4 = GetDlgItem(param_2,0x543);
        ShowWindow(pHVar4,iVar3);
        iVar3 = 5;
        pHVar4 = GetDlgItem(param_2,0x544);
        ShowWindow(pHVar4,iVar3);
      }
      else {
        iVar3 = 0;
        pHVar4 = GetDlgItem(param_2,0x542);
        pcVar10 = ShowWindow_exref;
        ShowWindow(pHVar4,iVar3);
        iVar3 = 0;
        pHVar4 = GetDlgItem(param_2,0x543);
        ShowWindow(pHVar4,iVar3);
        iVar3 = 0;
        pHVar4 = GetDlgItem(param_2,0x544);
        ShowWindow(pHVar4,iVar3);
      }
      GetDlgItem(param_2,0x545);
      (*pcVar10)();
    }
  }
  return;
}


