/* Module: vidcap30.exe
   Function: FUN_0040c490
   Address: 0040c490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c490(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  undefined4 uVar5;
  tagPOINT local_18;
  tagRECT local_10;
  
  uVar5 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((byte)uVar1 & 3) != 3) {
    if ((uVar1 & 0x10) == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      GetClientRect(*(HWND *)(iVar4 + 8),&local_10);
      MapWindowPoints(*(HWND *)(iVar4 + 8),(HWND)0x0,(LPPOINT)&local_10,2);
      iVar4 = *param_2;
      iVar3 = param_2[1];
      *param_3 = *param_3 | 0xc;
      if ((((local_10.left + -5 <= iVar4) && (iVar4 <= local_10.left + 5)) &&
          (local_10.top + -5 <= iVar3)) && (iVar3 <= local_10.top + 5)) {
        uVar5 = 1;
      }
    }
    else {
      GetClientRect((HWND)**(undefined4 **)(param_1 + 4),&local_10);
      MapWindowPoints((HWND)**(undefined4 **)(param_1 + 4),(HWND)0x0,(LPPOINT)&local_10,2);
      iVar4 = param_2[1];
      *param_3 = *param_3 & 0xfffffff7 | 4;
      if ((local_10.top + -5 <= iVar4 + 1) && (iVar4 + 1 <= local_10.top + 5)) {
        return 1;
      }
    }
    return uVar5;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if ((uVar1 & 0x10) == 0) {
    iVar3 = puVar2[0xe];
    local_10.top = *(LONG *)(iVar3 + 0x30);
    iVar4 = *(int *)(iVar3 + 0x2c);
    hWnd = *(HWND *)(iVar3 + 8);
  }
  else {
    local_10.top = puVar2[3];
    iVar4 = puVar2[2];
    hWnd = (HWND)*puVar2;
  }
  local_18.x = *param_2;
  local_18.y = param_2[1];
  ScreenToClient(hWnd,&local_18);
  local_10.left = param_2[2] - *param_2;
  local_10.top = param_2[3] - param_2[1];
  iVar3 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (local_18.x - iVar3);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (local_18.y - *(int *)(param_1 + 0x28));
  if (local_18.x < 0) {
    iVar4 = 0;
LAB_0040c54a:
    local_18.x = iVar4;
  }
  else if (iVar4 < local_18.x) goto LAB_0040c54a;
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x6c);
    local_18.x = iVar3;
    if (((iVar4 < -0x18) || (0x18 < iVar4)) ||
       ((*(int *)(param_1 + 0x68) < -0x18 || (0x18 < *(int *)(param_1 + 0x68))))) {
      uVar5 = 1;
      goto LAB_0040c599;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x6c);
    if ((iVar4 < -10) || (10 < iVar4)) {
      uVar5 = 1;
      goto LAB_0040c599;
    }
  }
  uVar5 = 0;
LAB_0040c599:
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar3 - local_18.x);
  *(int *)(param_1 + 0x6c) = iVar4;
  local_18.y = *(int *)(param_1 + 0x28);
  ClientToScreen(hWnd,&local_18);
  *param_2 = local_18.x;
  param_2[1] = local_18.y;
  param_2[2] = local_10.left + local_18.x;
  param_2[3] = local_10.top + local_18.y;
  return uVar5;
}


