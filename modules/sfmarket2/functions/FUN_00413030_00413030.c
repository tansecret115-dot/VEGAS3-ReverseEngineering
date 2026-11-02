/* Module: sfmarket2.dll
   Function: FUN_00413030
   Address: 00413030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041337d) */
/* WARNING: Removing unreachable block (ram,0x0041339c) */

bool __fastcall FUN_00413030(int param_1)

{
  undefined4 *puVar1;
  SHORT SVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  int *piVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  code *pcVar8;
  int *unaff_EDI;
  int iVar9;
  HWND local_20;
  undefined4 local_1c;
  undefined4 local_18;
  HWND local_14;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
    ShowWindow(pHVar3,0);
    pcVar8 = SendMessageA_exref;
  }
  else {
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
    ShowWindow(pHVar3,10);
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
    pcVar8 = SendMessageA_exref;
    SendMessageA(pHVar3,0xf1,1,0);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar9 = 0x154;
  }
  else {
    iVar9 = 0x158;
  }
  SetRect(&local_10,0,0,500,iVar9);
  iVar9 = GetSystemMetrics(0x21);
  iVar4 = GetSystemMetrics(4);
  iVar5 = GetSystemMetrics(3);
  local_10.bottom = iVar5 + local_10.bottom + iVar4 + iVar9 * 2;
  iVar9 = GetSystemMetrics(0x20);
  local_10.right = local_10.right + iVar9 * 2;
  MoveWindow(*(HWND *)(param_1 + 4),local_10.left,local_10.top,local_10.right - local_10.left,
             local_10.bottom - local_10.top,1);
  GetWindowRect(*(HWND *)(param_1 + 4),(LPRECT)(param_1 + 0x54));
  FUN_0043d3f0(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  FUN_00426420(*(HWND *)(param_1 + 4),(uchar *)"Sonic Foundry Net Notify");
  if (*(int *)(param_1 + 0x7c) != 0) {
    (*pcVar8)(*(undefined4 *)(param_1 + 4),0x80,0,*(int *)(param_1 + 0x7c));
  }
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  ptVar6 = &local_10;
  if (&stack0x00000000 == (undefined1 *)0x10) {
    ptVar6 = (tagRECT *)&DAT_004a7348;
  }
  pHVar3 = CreateWindowExA(0,"AtlAxWin",(LPCSTR)0x0,0x50000000,ptVar6->left,ptVar6->top,
                           ptVar6->right - ptVar6->left,ptVar6->bottom - ptVar6->top,
                           *(HWND *)(param_1 + 4),(HMENU)0x0,DAT_004a9c0c,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x48) = pHVar3;
  SetWindowLongA(pHVar3,-0xc,500);
  local_20 = (HWND)0x0;
  if (&stack0x00000000 == (undefined1 *)0x14) {
    iVar9 = -0x7fffbffd;
  }
  else {
    piVar7 = (int *)(*pcVar8)(*(undefined4 *)(param_1 + 0x48),DAT_004a99b4,0,0);
    iVar9 = (-(uint)(piVar7 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < iVar9) {
      iVar9 = (**(code **)*piVar7)(piVar7,&DAT_004956a8,&local_20);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  if (-1 < iVar9) {
    iVar9 = (**(code **)(local_20->unused + 0xc))
                      (local_20,L"{8856F961-340A-11D0-A96B-00C04FD705A2}",
                       *(undefined4 *)(param_1 + 0x48),0);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    local_20 = (HWND)0x0;
  }
  local_14 = GetDlgItem(*(HWND *)(param_1 + 4),500);
  if (-1 < iVar9) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    *puVar1 = 0;
    if (&stack0x00000000 == (undefined1 *)0x14) {
      iVar9 = -0x7fffbffd;
    }
    else {
      piVar7 = (int *)SendMessageA(*(HWND *)(param_1 + 0x48),DAT_004a99b0,0,0);
      iVar9 = (-(uint)(piVar7 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
      if (-1 < iVar9) {
        iVar9 = (**(code **)*piVar7)(piVar7,&DAT_004a4130,puVar1);
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
    }
    if (-1 < iVar9) {
      local_18 = 0;
      local_1c = 0;
      iVar9 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_004a4120,&local_18);
      if ((-1 < iVar9) &&
         (iVar9 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_004a4090,&stack0xffffffd8),
         -1 < iVar9)) {
        iVar9 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,param_1 + 0x1c,param_1 + 0x44);
      }
      if (unaff_EBP != (int *)0x0) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      FUN_00409c30((int *)&stack0xffffffdc);
      if (-1 < iVar9) {
        iVar4 = *(int *)(param_1 + 0x4c);
        if (iVar4 != 0) {
          iVar9 = FUN_0040e110(*(HWND *)(param_1 + 0x48),(LRESULT *)&stack0xffffffdc);
          if (-1 < iVar9) {
            iVar9 = (*(code *)*puRam00000000)(0,&DAT_004956a8,&stack0xffffffd8);
          }
          if (-1 < iVar9) {
            iVar9 = (*(code *)puRam00000000[7])(0,iVar4);
          }
        }
        if (-1 < iVar9) {
          if (&stack0x00000000 != (undefined1 *)0x20) {
            piVar7 = (int *)SendMessageA(*(HWND *)(param_1 + 0x48),DAT_004a99b4,0,0);
            iVar9 = (-(uint)(piVar7 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
            if (-1 < iVar9) {
              iVar9 = (**(code **)*piVar7)(piVar7,&DAT_00495500,&stack0xffffffd8);
            }
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))(piVar7);
            }
            if (-1 < iVar9) {
              SVar2 = GetKeyState(0x10);
              if ((-1 < SVar2) || (SVar2 = GetKeyState(0x11), -1 < SVar2)) {
                (*(code *)puRam00000000[0x1d])(0,0);
              }
              (*(code *)puRam00000000[2])(0);
            }
          }
          ShowWindow(local_20,0);
          iVar9 = FUN_00412f60(param_1);
        }
      }
    }
  }
  return -1 < iVar9;
}


