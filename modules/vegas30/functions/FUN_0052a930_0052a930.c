/* Module: vegas30.exe
   Function: FUN_0052a930
   Address: 0052a930
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052a930(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  HCURSOR hCursor;
  int iVar4;
  LPCSTR lpString2;
  int iVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  HCURSOR local_8;
  uint local_4;
  
  iVar3 = param_1;
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  local_8 = SetCursor(hCursor);
  if (*(int *)(*(int *)(param_1 + 0x84) + 4) == 0) {
    param_2 = 0;
  }
  iVar4 = FUN_0052a7c0(param_1,param_3);
  iVar5 = **(int **)(param_1 + 0x84);
  if ((iVar5 == -1) || (iVar5 = iVar5 - (*(int **)(param_1 + 0x84))[1], iVar4 < iVar5)) {
    iVar5 = iVar4;
  }
  local_4 = (uint)(iVar4 == iVar5);
  local_c = (uint)(0 < iVar5);
  if (0 < iVar5) {
    param_1 = 0;
    iVar4 = param_2;
    do {
      pbVar1 = *(byte **)(*(int *)(*(int *)(param_3 + 8) + param_1) + 0x20c);
      puVar2 = *(undefined4 **)(pbVar1 + 4);
      local_14 = puVar2;
      if ((*pbVar1 & 1) == 0) {
        if (puVar2 != (undefined4 *)0x0) {
          _SfList_AllocItem_12(*(undefined4 *)(*(int *)(iVar3 + 0x84) + 8),0x124,&local_10);
          *local_10 = puVar2[4];
          local_10[1] = puVar2[5];
          local_10[2] = puVar2[6];
          local_10[3] = puVar2[7];
          lpString2 = (LPCSTR)(local_14 + 8);
          puVar2 = local_10;
          goto LAB_0052aa6a;
        }
      }
      else if (puVar2 != (undefined4 *)0x0) {
        _SfList_AllocItem_12(*(undefined4 *)(*(int *)(iVar3 + 0x84) + 8),0x124,&local_18);
        *local_18 = *puVar2;
        local_18[1] = puVar2[1];
        local_18[2] = puVar2[2];
        local_18[3] = puVar2[3];
        lpString2 = (LPCSTR)(local_14 + 10);
        puVar2 = local_18;
LAB_0052aa6a:
        lstrcpynA((LPSTR)(puVar2 + 4),lpString2,0x104);
        *(undefined1 *)((int)puVar2 + 0x113) = 0;
        _SfList_InsertList_16(*(undefined4 *)(*(int *)(iVar3 + 0x84) + 8),iVar4,0,0xffffffff);
        iVar5 = iVar5 + -1;
        *(int *)(*(int *)(iVar3 + 0x84) + 4) = *(int *)(*(int *)(iVar3 + 0x84) + 4) + 1;
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 4;
    } while (0 < iVar5);
  }
  if (local_c != 0) {
    FUN_00526cc0(iVar3);
    FUN_00524880(iVar3);
    iVar5 = *(int *)(*(int *)(iVar3 + 0x84) + 4) + -1;
    if (iVar5 <= param_2) {
      param_2 = iVar5;
    }
    FUN_00525770(iVar3,param_2);
    FUN_00524ad0(iVar3);
  }
  SetCursor(local_8);
  return local_4;
}


