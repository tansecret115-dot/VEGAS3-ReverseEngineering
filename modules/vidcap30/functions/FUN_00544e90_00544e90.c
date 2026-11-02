/* Module: vidcap30.exe
   Function: FUN_00544e90
   Address: 00544e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00544e90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar4 = 0;
  iVar1 = *(int *)param_1[0x11];
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1[0x11] + 8) + iVar4 * 4);
      iVar3 = FUN_00540bd0(param_1,puVar2[1],&local_20);
      if (iVar3 == 0) {
        local_20.left = param_1[0x1e];
        local_20.right = local_20.left;
      }
      iVar3 = FUN_00540c80(param_1,*puVar2,&local_20);
      if (iVar3 == 0) {
        local_20.top = param_1[0x1f];
        local_20.bottom = local_20.top;
      }
      InflateRect(&local_20,1,1);
      iVar3 = FUN_00540bd0(param_1,puVar2[3],&local_30);
      if (iVar3 == 0) {
        local_30.left = param_1[0x1e];
        local_30.right = local_30.left;
      }
      iVar3 = FUN_00540c80(param_1,puVar2[2],&local_30);
      if (iVar3 == 0) {
        local_30.top = param_1[0x1f];
        local_30.bottom = local_30.top;
      }
      InflateRect(&local_30,1,1);
      UnionRect(&local_10,&local_20,&local_30);
      InvalidateRect((HWND)*param_1,&local_10,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


