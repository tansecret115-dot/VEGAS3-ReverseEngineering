/* Module: vidcap30.exe
   Function: FUN_0040ccb0
   Address: 0040ccb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0040ccb0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  SHORT SVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  piVar4 = param_3;
  bVar11 = false;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
  iVar8 = *param_3;
  if (iVar8 != 0) {
    if (iVar8 != param_1) {
      return false;
    }
    if (((iVar8 != 0) && (iVar8 == param_1)) && ((*(byte *)(iVar8 + 0xc) & 0x80) != 0)) {
      param_3 = (int *)(param_3[1] & 3);
      goto LAB_0040cd03;
    }
  }
  param_3 = (int *)0x0;
LAB_0040cd03:
  *piVar4 = param_1;
  puVar9 = (uint *)(piVar4 + 1);
  *puVar9 = 0;
  if (param_1 == *(int *)(*(int *)(param_1 + 4) + 0x8c)) {
    iVar8 = *param_2;
    iVar10 = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    SVar5 = GetAsyncKeyState(0x11);
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar6 = uVar2 & 0xffffffdf;
    *(uint *)(param_1 + 0xc) = uVar6;
    if (-1 < SVar5) {
      bVar11 = (uVar2 & 0x80) == 0;
      *(uint *)(param_1 + 0xc) = uVar6 | 0x20;
      if (bVar11) {
        *(int *)(param_1 + 0x44) = param_2[2] - *param_2;
        iVar1 = param_2[3];
        iVar3 = param_2[1];
        *(uint *)(param_1 + 0xc) = CONCAT31((int3)(uVar6 >> 8),(char)(uVar6 | 0x20)) | 0x80;
        *(int *)(param_1 + 0x48) = iVar1 - iVar3;
      }
      *param_2 = iVar8;
      param_2[1] = iVar10;
      param_2[2] = local_18;
      param_2[3] = local_14;
      *puVar9 = *puVar9 & 0xfffffff3 | 3;
      return bVar11;
    }
    if (((uVar2 & 0x80) != 0) && (param_3 == (int *)0x3)) {
      param_2[2] = *(int *)(param_1 + 0x44) + *param_2;
      param_2[3] = *(int *)(param_1 + 0x48) + param_2[1];
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff7f;
      return true;
    }
  }
  DVar7 = GetMessagePos();
  iVar10 = (int)(short)DVar7;
  local_1c = (int)(short)(DVar7 >> 0x10);
  iVar8 = 0x18;
  if (0x17 < *(int *)(param_1 + 100)) {
    iVar8 = *(int *)(param_1 + 100);
  }
  GetClientRect(*(HWND *)(iVar1 + 8),&local_10);
  MapWindowPoints(*(HWND *)(iVar1 + 8),(HWND)0x0,(LPPOINT)&local_10,2);
  SVar5 = GetAsyncKeyState(0x11);
  if ((((-1 < SVar5) && (local_10.top - iVar8 <= local_1c)) && (local_1c <= local_10.bottom + iVar8)
      ) && (((iVar8 = iVar10 - *(int *)(param_1 + 0x60), local_10.left <= iVar10 &&
             (iVar10 <= local_10.right)) || ((local_10.left <= iVar8 && (iVar8 <= local_10.right))))
           )) {
    if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
      if (DAT_005bb7d0 != 0) {
        FUN_00408cb0(*(undefined4 *)(param_1 + 4),0);
      }
      *(int *)(param_1 + 0x44) = param_2[2] - *param_2;
      bVar11 = true;
      *(int *)(param_1 + 0x48) = param_2[3] - param_2[1];
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x80;
    }
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    FUN_0040dfc0(iVar1,param_1,&local_20,puVar9,1);
    param_2[2] = (*param_2 - local_20) + local_18;
    param_2[3] = (param_2[1] - local_1c) + local_14;
    return bVar11;
  }
  bVar11 = (*(byte *)(param_1 + 0xc) & 0x80) != 0;
  if (bVar11) {
    param_2[2] = *(int *)(param_1 + 0x44) + *param_2;
    param_2[3] = *(int *)(param_1 + 0x48) + param_2[1];
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff7f;
  }
  return bVar11;
}


