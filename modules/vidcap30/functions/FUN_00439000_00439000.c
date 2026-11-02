/* Module: vidcap30.exe
   Function: FUN_00439000
   Address: 00439000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00439000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  tagPOINT local_18;
  tagRECT local_10;
  
  local_18.x = (LONG)(short)param_4;
  local_18.y = (LONG)(short)((uint)param_4 >> 0x10);
  pHVar1 = GetCapture();
  bVar5 = pHVar1 == *(HWND *)(param_1 + 8);
  iVar2 = GetSystemMetrics(0x44);
  iVar4 = (iVar2 + 1) / 2;
  iVar3 = GetSystemMetrics(0x44);
  iVar2 = *(int *)(param_1 + 0x1c1c);
  iVar3 = (iVar3 + 1) / 2;
  switch(param_2) {
  case 0x200:
    if (bVar5) {
      if (*(int *)(param_1 + 0x1c18) == 4) {
        if (*(int *)(param_1 + 0x1c14) == 0x1000000) {
          iVar2 = (*(int *)(param_1 + 0x1c24) - local_18.x) + iVar2;
          GetClientRect(*(HWND *)(param_1 + 8),&local_10);
          DAT_005bb4f8 = *(int *)(param_1 + 200);
          iVar3 = ((*(int *)(param_1 + 0x1418) - *(int *)(param_1 + 0x98)) - local_10.left) +
                  local_10.right;
          if ((DAT_005bb4f8 <= iVar2) && (DAT_005bb4f8 = iVar3, iVar2 <= iVar3)) {
            DAT_005bb4f8 = iVar2;
          }
          *(int *)(param_1 + 0x1c28) = DAT_005bb4f8;
          FUN_0043c6a0(param_1);
          UpdateWindow(*(HWND *)(param_1 + 8));
          return 0;
        }
        if (*(int *)(param_1 + 0x1c14) == 0x2000000) {
          MapWindowPoints(*(HWND *)(param_1 + 8),*(HWND *)(param_1 + 0x1668),&local_18,1);
          FUN_00442fe0(param_1,&local_18);
          return 0;
        }
      }
      else if ((*(int *)(param_1 + 0x1c18) == 5) &&
              ((((local_18.x < iVar2 - iVar4 || (iVar4 + iVar2 <= local_18.x)) ||
                (local_18.y < *(int *)(param_1 + 0x1c20) - iVar3)) ||
               (*(int *)(param_1 + 0x1c20) + iVar3 <= local_18.y)))) {
        *(undefined4 *)(param_1 + 0x1c18) = 4;
        *(undefined4 *)(param_1 + 0x1c24) = *(undefined4 *)(param_1 + 0x1c28);
        if (*(int *)(param_1 + 0x1c14) == 0x1000000) {
          *(undefined4 *)(param_1 + 0x1c30) = 0;
          *(int *)(param_1 + 0x1c2c) = iVar2 - *(int *)(param_1 + 0xb0);
          return 0;
        }
        if (*(int *)(param_1 + 0x1c14) == 0x2000000) {
          MapWindowPoints(*(HWND *)(param_1 + 8),*(HWND *)(param_1 + 0x1668),&local_18,1);
          FUN_00442fe0(param_1,&local_18);
          return 0;
        }
      }
    }
    break;
  case 0x201:
    if (*(int *)(param_1 + 0x1c18) == 0) {
      if ((*(uint *)(param_1 + 0x1c14) & 0xfff0000) == 0x1000000) {
        *(undefined4 *)(param_1 + 0x1c18) = 5;
        SetCapture(*(HWND *)(param_1 + 8));
        *(LONG *)(param_1 + 0x1c1c) = local_18.x;
        *(LONG *)(param_1 + 0x1c20) = local_18.y;
        return 0;
      }
      SetFocus(*(HWND *)(param_1 + 8));
      return 0;
    }
    break;
  case 0x202:
    if ((bVar5) && (*(int *)(param_1 + 0x1c18) == 4)) {
      if (*(int *)(param_1 + 0x1c14) == 0x1000000) {
        DAT_005bb4f8 = *(undefined4 *)(param_1 + 0x1c28);
      }
      else if (*(int *)(param_1 + 0x1c14) == 0x2000000) {
        MapWindowPoints(*(HWND *)(param_1 + 8),*(HWND *)(param_1 + 0x1668),&local_18,1);
        FUN_004431a0(param_1,&local_18);
      }
    }
    *(undefined4 *)(param_1 + 0x1c18) = 0;
    if (bVar5) {
      ReleaseCapture();
    }
    break;
  case 0x203:
    *(undefined4 *)(param_1 + 0x1c28) = 0xeb;
    DAT_005bb4f8 = 0xeb;
    FUN_0043c6a0(param_1);
    return 0;
  }
  return 0;
}


