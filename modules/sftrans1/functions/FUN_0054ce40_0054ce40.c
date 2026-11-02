/* Module: sftrans1.dll
   Function: FUN_0054ce40
   Address: 0054ce40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054ce40(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  SHORT SVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 local_18;
  
  if (-1 < *(int *)(param_1 + 0x14c)) {
    SVar4 = GetKeyState(0x11);
    bVar1 = (uint)(int)SVar4 >> 0x10 != 0;
    SVar4 = GetKeyState(0x10);
    bVar2 = (uint)(int)SVar4 >> 0x10 != 0;
    if ((bVar1) || (bVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    switch(param_2) {
    case 0x20:
      if (-1 < *(int *)(param_1 + 0x158)) {
        iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8
                                          ) + 8) + *(int *)(param_1 + 0x158) * 4);
        *(bool *)(iVar7 + 0x10) = *(char *)(iVar7 + 0x10) == '\0';
        FUN_0054ddf0();
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
      break;
    case 0x23:
      iVar7 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
      if (0 < iVar7) {
        *(int *)(param_1 + 0x158) = iVar7 + -1;
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
      break;
    case 0x24:
      if (0 < **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8)) {
        *(undefined4 *)(param_1 + 0x158) = 0;
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
      break;
    case 0x25:
      if (bVar1) {
        iVar7 = *(int *)(param_1 + 0x158);
        if ((iVar7 == -1) &&
           (0 < **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8))) {
          *(undefined4 *)(param_1 + 0x158) = 0;
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
        if (0 < iVar7) {
          *(int *)(param_1 + 0x158) = iVar7 + -1;
          *(int *)(param_1 + 0x15c) = iVar7 + -1;
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
      }
      else {
        if (!bVar2) {
          FUN_0054dfa0(-*(double *)(param_1 + 0x128),0,0);
          FUN_0054dfa0(0,0,0,0);
          FUN_0054ddf0();
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
        if (0 < *(int *)(param_1 + 0x158)) {
          iVar7 = *(int *)(param_1 + 0x158) + -1;
          *(int *)(param_1 + 0x158) = iVar7;
          FUN_0054def0(*(undefined4 *)(param_1 + 0x15c),iVar7);
          FUN_0054ddf0();
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
      }
      break;
    case 0x26:
      if (bVar3) {
        local_18._4_4_ = *(LONG *)(param_1 + 0x134);
        local_18._0_4_ = *(LONG *)(param_1 + 0x130);
        FUN_0054dfa0(0,0,0,0);
        FUN_0054dfa0(0,0,(LONG)local_18,local_18._4_4_);
        FUN_0054ddf0();
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
      break;
    case 0x27:
      if (bVar1) {
        iVar7 = *(int *)(param_1 + 0x158);
        if ((iVar7 == -1) &&
           (iVar6 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8), 0 < iVar6
           )) {
          *(int *)(param_1 + 0x158) = iVar6 + -1;
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
        if ((-1 < iVar7) &&
           (iVar7 < **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + -1)) {
          *(int *)(param_1 + 0x158) = iVar7 + 1;
          *(int *)(param_1 + 0x15c) = iVar7 + 1;
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
      }
      else {
        if (!bVar2) {
          FUN_0054dfa0(*(undefined8 *)(param_1 + 0x128),0,0);
          FUN_0054dfa0(0,0,0,0);
          FUN_0054ddf0();
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
        if (*(int *)(param_1 + 0x158) <
            **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + -1) {
          iVar7 = *(int *)(param_1 + 0x158) + 1;
          *(int *)(param_1 + 0x158) = iVar7;
          FUN_0054def0(*(undefined4 *)(param_1 + 0x15c),iVar7);
          FUN_0054ddf0();
          GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
          return;
        }
      }
      break;
    case 0x28:
      if (bVar3) {
        local_18 = -*(double *)(param_1 + 0x130);
        FUN_0054dfa0(0,0,0,0);
        FUN_0054dfa0(0,0,(LONG)local_18,(int)((ulonglong)local_18 >> 0x20));
        FUN_0054ddf0();
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
      }
      break;
    case 0x2d:
      FUN_0054e720(*(double *)(param_1 + 0xb0) * _DAT_00557838 + *(double *)(param_1 + 0xa8),
                   *(double *)(param_1 + 0xc0) * _DAT_00557838 + *(double *)(param_1 + 0xb8));
      GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
      return;
    case 0x2e:
      iVar7 = 0;
      piVar5 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
      if (0 < *piVar5) {
        do {
          if ((*(char *)(*(int *)(piVar5[2] + iVar7 * 4) + 0x10) != '\0') &&
             (iVar6 = FUN_0054ed50(iVar7,0), iVar6 != 0)) {
            iVar7 = iVar7 + -1;
          }
          iVar7 = iVar7 + 1;
          piVar5 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
        } while (iVar7 < *piVar5);
      }
      FUN_0054ddf0();
      GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
      FUN_0054f0c0();
      return;
    case 0x41:
      if (bVar1) {
        FUN_0054def0(0,**(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + -1);
        FUN_0054ddf0();
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
    }
  }
  return;
}


