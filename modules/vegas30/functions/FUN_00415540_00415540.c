/* Module: vegas30.exe
   Function: FUN_00415540
   Address: 00415540
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00415540(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  SHORT SVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  bVar11 = false;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  iVar6 = *param_3;
  if (iVar6 == 0) {
LAB_0041558d:
    uVar9 = 0;
  }
  else {
    if (iVar6 != param_1) {
      return false;
    }
    if (((iVar6 == 0) || (iVar6 != param_1)) || ((*(byte *)(iVar6 + 0xc) & 0x80) == 0))
    goto LAB_0041558d;
    uVar9 = param_3[1] & 3;
  }
  puVar1 = (uint *)(param_3 + 1);
  *param_3 = param_1;
  *puVar1 = 0;
  if (param_1 != *(int *)(*(int *)(param_1 + 4) + 0xac)) goto LAB_004156a4;
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  SVar5 = GetAsyncKeyState(0x11);
  if (SVar5 < 0) {
LAB_004155f8:
    bVar4 = false;
  }
  else {
    iVar6 = FUN_004c5620(DAT_00647630,param_1,&local_20);
    if (iVar6 == 0) goto LAB_004155f8;
    bVar4 = true;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar7 = uVar3 & 0xffffffdf;
  *(uint *)(param_1 + 0xc) = uVar7;
  if (bVar4) {
    bVar11 = (uVar3 & 0x80) == 0;
    *(uint *)(param_1 + 0xc) = uVar7 | 0x20;
    if (bVar11) {
      *(int *)(param_1 + 0x44) = param_2[2] - *param_2;
      *(int *)(param_1 + 0x48) = param_2[3] - param_2[1];
      *(uint *)(param_1 + 0xc) = CONCAT31((int3)(uVar7 >> 8),(char)(uVar7 | 0x20)) | 0x80;
    }
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[3] = local_14;
    param_2[3] = param_2[3] + 2;
    *puVar1 = *puVar1 & 0xfffffff3 | 3;
    return bVar11;
  }
  if (((uVar3 & 0x80) != 0) && (uVar9 == 3)) {
    param_2[2] = *(int *)(param_1 + 0x44) + *param_2;
    param_2[3] = *(int *)(param_1 + 0x48) + param_2[1];
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff7f;
    return true;
  }
LAB_004156a4:
  DVar8 = GetMessagePos();
  iVar10 = (int)(short)DVar8;
  local_1c = (int)(short)(DVar8 >> 0x10);
  iVar6 = 0x18;
  if (0x17 < *(int *)(param_1 + 100)) {
    iVar6 = *(int *)(param_1 + 100);
  }
  GetClientRect(*(HWND *)(iVar2 + 8),&local_10);
  MapWindowPoints(*(HWND *)(iVar2 + 8),(HWND)0x0,(LPPOINT)&local_10,2);
  SVar5 = GetAsyncKeyState(0x11);
  if (((-1 < SVar5) && (local_10.top - iVar6 <= local_1c)) && (local_1c <= local_10.bottom + iVar6))
  {
    iVar6 = iVar10 - *(int *)(param_1 + 0x60);
    if (((local_10.left <= iVar10) && (iVar10 <= local_10.right)) ||
       ((local_10.left <= iVar6 && (iVar6 <= local_10.right)))) {
      if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
        if (DAT_0064aa4c != 0) {
          FUN_00411410(*(undefined4 *)(param_1 + 4),0);
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
      FUN_004168b0(iVar2,param_1,&local_20,puVar1,1);
      param_2[2] = (*param_2 - local_20) + local_18;
      param_2[3] = (param_2[1] - local_1c) + 2 + local_14;
      return bVar11;
    }
  }
  bVar11 = (*(byte *)(param_1 + 0xc) & 0x80) != 0;
  if (bVar11) {
    param_2[2] = *(int *)(param_1 + 0x44) + *param_2;
    param_2[3] = *(int *)(param_1 + 0x48) + param_2[1];
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff7f;
  }
  return bVar11;
}


