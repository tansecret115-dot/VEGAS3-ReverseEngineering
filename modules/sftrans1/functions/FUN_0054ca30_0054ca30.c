/* Module: sftrans1.dll
   Function: FUN_0054ca30
   Address: 0054ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054ca30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  HMENU hMenu;
  int *piVar3;
  int iVar4;
  int iVar5;
  POINT pt;
  tagRECT local_28;
  tagRECT tStack_18;
  
  GetWindowRect(*(HWND *)(param_1 + -4),&local_28);
  pt.y = param_4;
  pt.x = param_3;
  BVar2 = PtInRect(&local_28,pt);
  if (BVar2 == 0) {
    param_3 = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130)) / 2 + local_28.left;
    param_4 = (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134)) / 2 + local_28.top;
  }
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return;
  }
  iVar5 = 0;
  bVar1 = true;
  if (-1 < *(int *)(param_1 + 0x144)) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
    iVar4 = *piVar3;
    if (0 < iVar4) {
      piVar3 = (int *)piVar3[2];
      do {
        if ((*(char *)(*piVar3 + 0x10) != '\0') &&
           (iVar5 = iVar5 + 1, *(char *)(*piVar3 + 0x15) == '\0')) {
          bVar1 = false;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (0 < iVar5) {
        AppendMenuA(hMenu,0,2,"&Delete Point(s)");
        AppendMenuA(hMenu,0,3,"&Reset Tangent(s)");
        if (bVar1) {
          AppendMenuA(hMenu,8,4,"Lock Tangents");
        }
        else {
          AppendMenuA(hMenu,0,4,"Lock Tangents");
        }
        goto LAB_0054cb60;
      }
    }
    AppendMenuA(hMenu,0,1,"&Create Point");
  }
LAB_0054cb60:
  if (*(code **)(param_1 + 0x1490) != (code *)0x0) {
    (**(code **)(param_1 + 0x1490))(hMenu,5,iVar5);
  }
  iVar5 = GetMenuItemCount(hMenu);
  if (0 < iVar5) {
    BVar2 = TrackPopupMenu(hMenu,0x182,param_3,param_4,0,*(HWND *)(param_1 + -4),(RECT *)0x0);
    switch(BVar2) {
    case 1:
      FUN_0054e720(((double)((param_3 - *(int *)(param_1 + 0x130)) - local_28.left) /
                   (double)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130))) *
                   *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xa0),
                   ((double)((*(int *)(param_1 + 0x13c) - param_4) + local_28.top) /
                   (double)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134))) *
                   *(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xb0));
      *(undefined4 *)(param_1 + 0x158) = 0;
      GetClientRect(*(HWND *)(param_1 + -4),&tStack_18);
      InvalidateRect(*(HWND *)(param_1 + -4),&tStack_18,0);
      DestroyMenu(hMenu);
      return;
    case 2:
      iVar5 = 0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
      if (0 < *piVar3) {
        do {
          if ((*(char *)(*(int *)(piVar3[2] + iVar5 * 4) + 0x10) != '\0') &&
             (iVar4 = FUN_0054ed50(iVar5,0), iVar4 != 0)) {
            iVar5 = iVar5 + -1;
          }
          iVar5 = iVar5 + 1;
          piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
        } while (iVar5 < *piVar3);
      }
      FUN_0054ddf0();
      GetClientRect(*(HWND *)(param_1 + -4),&tStack_18);
      break;
    case 3:
      iVar5 = 0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
      if (0 < *piVar3) {
        do {
          iVar4 = *(int *)(piVar3[2] + iVar5 * 4);
          if (*(char *)(iVar4 + 0x10) != '\0') {
            *(undefined4 *)(iVar4 + 0x40) = 0;
            *(undefined4 *)(iVar4 + 0x18) = 0;
            *(undefined4 *)(iVar4 + 0x44) = 0x3fd00000;
            *(undefined4 *)(iVar4 + 0x1c) = 0x3fd00000;
            *(undefined4 *)(iVar4 + 0x48) = 0;
            *(undefined4 *)(iVar4 + 0x20) = 0;
            *(undefined4 *)(iVar4 + 0x58) = 0;
            *(undefined4 *)(iVar4 + 0x30) = 0;
            *(undefined4 *)(iVar4 + 0x4c) = 0;
            *(undefined4 *)(iVar4 + 0x24) = 0;
            *(undefined4 *)(iVar4 + 0x5c) = 0;
            *(undefined4 *)(iVar4 + 0x34) = 0;
            *(undefined1 *)(iVar4 + 0x61) = 0;
            *(undefined1 *)(iVar4 + 0x39) = 0;
            FUN_0054da10();
          }
          iVar5 = iVar5 + 1;
          piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
        } while (iVar5 < *piVar3);
      }
      GetClientRect(*(HWND *)(param_1 + -4),&tStack_18);
      break;
    case 4:
      iVar5 = 0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
      if (0 < *piVar3) {
        do {
          iVar4 = *(int *)(piVar3[2] + iVar5 * 4);
          if (*(char *)(iVar4 + 0x10) != '\0') {
            *(bool *)(iVar4 + 0x15) = !bVar1;
          }
          iVar5 = iVar5 + 1;
          piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
        } while (iVar5 < *piVar3);
      }
      FUN_0054f0c0();
      DestroyMenu(hMenu);
      return;
    default:
      if (*(code **)(param_1 + 0x1494) != (code *)0x0) {
        (**(code **)(param_1 + 0x1494))();
      }
      goto LAB_0054cdfa;
    }
    InvalidateRect(*(HWND *)(param_1 + -4),&tStack_18,0);
    FUN_0054f0c0();
    DestroyMenu(hMenu);
    return;
  }
LAB_0054cdfa:
  DestroyMenu(hMenu);
  return;
}


