/* Module: vidcap30.exe
   Function: FUN_00408500
   Address: 00408500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408500(undefined4 *param_1,int param_2,int param_3)

{
  uint nNumWindows;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int y;
  int iVar5;
  int cx;
  int *piVar6;
  HDWP local_68;
  uint local_60;
  int local_58;
  int local_4c;
  tagRECT local_48;
  int local_30;
  int local_2c;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xc) & 0x10) == 0)) {
    FUN_0040ddd0(param_1[0xe],param_2,param_3);
  }
  if ((3 < (int)param_1[2]) && (3 < (int)param_1[3])) {
    nNumWindows = *(uint *)param_1[0x2a];
    local_68 = BeginDeferWindowPos(nNumWindows);
    local_30 = param_1[2];
    local_2c = param_1[3];
    cx = 0;
    local_58 = 0;
    y = 2;
    local_4c = 0;
    uVar2 = 1;
    local_60 = 0;
    if (nNumWindows != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1[0x2a] + 8) + local_60 * 4);
        if (((byte)*(undefined4 *)(iVar1 + 0x10) & 0xc) == 4) {
          if ((*(uint *)(iVar1 + 0xc) >> 4 & 1) == uVar2) {
            local_58 = local_58 + cx;
          }
          else {
            local_58 = 0;
            y = y + local_4c;
          }
          if (iVar1 == param_2) {
            cx = *(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x1c);
            iVar4 = local_30 - local_58;
            if (iVar4 <= cx) {
              cx = iVar4;
            }
            iVar5 = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
            if (local_58 != 0) {
              iVar5 = local_4c;
            }
            piVar6 = local_28;
            for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar6 = 0;
              piVar6 = piVar6 + 1;
            }
            local_28[3] = local_2c - y;
            local_18 = 0;
            local_14 = 0;
            local_10 = 0x10;
            local_c = 0x1a;
            local_28[2] = iVar4;
            local_8 = iVar4;
            local_4 = local_28[3];
            SendMessageA(*(HWND *)(param_2 + 8),0x24,0,(LPARAM)local_28);
            iVar4 = local_c;
            if ((iVar5 < local_c) || (iVar4 = local_4, local_4c = iVar5, local_4 < iVar5)) {
              local_4c = iVar4;
            }
            iVar4 = local_10;
            if ((cx < local_10) || (iVar4 = local_8, local_8 < cx)) {
              cx = iVar4;
            }
            *(int *)(param_3 + 0x24) = cx + local_58;
            *(int *)(param_3 + 0x28) = local_4c + y;
            *(int *)(param_3 + 0x1c) = local_58;
            *(int *)(param_3 + 0x20) = y;
          }
          else {
            GetWindowRect(*(HWND *)(iVar1 + 8),&local_48);
            MapWindowPoints((HWND)0x0,(HWND)*param_1,(LPPOINT)&local_48,2);
            if ((*(byte *)(iVar1 + 0xc) & 0x10) == 0) {
              cx = local_30 - local_58;
              if (local_48.right - local_48.left < local_30 - local_58) {
                cx = local_48.right - local_48.left;
              }
            }
            else {
              cx = local_48.right - local_48.left;
            }
            if (local_58 == 0) {
              local_4c = local_48.bottom - local_48.top;
            }
            local_68 = DeferWindowPos(local_68,*(HWND *)(iVar1 + 8),(HWND)0x0,local_58,y,cx,local_4c
                                      ,0x14);
          }
          uVar2 = *(uint *)(iVar1 + 0xc) >> 4 & 1;
        }
        local_60 = local_60 + 1;
      } while (local_60 < nNumWindows);
    }
    param_1[0x18] = y + -2 + local_4c;
    EndDeferWindowPos(local_68);
    FUN_00404c90(param_1,0);
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
  }
  return;
}


