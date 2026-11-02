/* Module: vidcap30.exe
   Function: FUN_00544f90
   Address: 00544f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00544f90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  tagRECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  RECT local_20;
  RECT local_10;
  
  iVar4 = 0;
  iVar1 = *(int *)param_1[0x11];
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1[0x11] + 8) + iVar4 * 4);
      iVar3 = FUN_00540bd0(param_1,puVar2[1],&local_40);
      if (iVar3 == 0) {
        local_40.left = param_1[0x1e];
        local_40.right = local_40.left;
      }
      iVar3 = FUN_00540c80(param_1,*puVar2,&local_40);
      if (iVar3 == 0) {
        local_40.top = param_1[0x1f];
        local_40.bottom = local_40.top;
      }
      InflateRect(&local_40,1,1);
      iVar3 = FUN_00540bd0(param_1,puVar2[3],&local_50);
      if (iVar3 == 0) {
        local_50.left = param_1[0x1e];
        local_50.right = local_50.left;
      }
      iVar3 = FUN_00540c80(param_1,puVar2[2],&local_50);
      if (iVar3 == 0) {
        local_50.top = param_1[0x1f];
        local_50.bottom = local_50.top;
      }
      InflateRect(&local_50,1,1);
      UnionRect(&local_30,&local_40,&local_50);
      InvalidateRect((HWND)*param_1,&local_30,1);
      local_20.bottom = param_1[0x1d] + 1;
      local_20.left = local_30.left;
      local_20.top = 0;
      local_20.right = local_30.right;
      InvalidateRect((HWND)*param_1,&local_20,1);
      local_10.top = local_30.top;
      local_10.bottom = local_30.bottom;
      local_10.right = param_1[0x1c] + 1;
      local_10.left = 0;
      InvalidateRect((HWND)*param_1,&local_10,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


