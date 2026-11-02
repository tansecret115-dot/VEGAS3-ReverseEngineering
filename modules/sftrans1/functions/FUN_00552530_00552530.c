/* Module: sftrans1.dll
   Function: FUN_00552530
   Address: 00552530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00552530(int param_1,HWND param_2,double *param_3,double *param_4,undefined4 *param_5)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_28;
  undefined8 local_20;
  undefined8 local_18;
  tagRECT local_10;
  
  iVar5 = -1;
  iVar6 = 0;
  local_28 = -1;
  local_20 = 0.0;
  local_18 = 0.0;
  bVar3 = false;
  GetClientRect(param_2,&local_10);
  uVar4 = *(uint *)(param_1 + 0x28) & 1;
  if ((uVar4 != 0) && ((*(uint *)(param_1 + 0x28) & 2) != 0)) {
    bVar3 = true;
  }
  if (uVar4 != 0) {
    param_2 = (HWND)0x0;
    if (bVar3) {
      iVar6 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 < local_10.top) {
        iVar6 = local_10.top - iVar1;
      }
      if (local_10.bottom < iVar1) {
        iVar6 = (iVar1 - local_10.bottom) + 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if (local_10.left < iVar1) {
      if (local_10.right <= iVar1) {
        iVar5 = 1;
        local_28 = 1;
        param_2 = (HWND)((iVar1 - local_10.right) + 1 + iVar6);
      }
    }
    else {
      iVar5 = -1;
      local_28 = -1;
      param_2 = (HWND)((local_10.left - iVar1) + iVar6);
    }
    fVar2 = (float)(int)param_2 * *(float *)(param_1 + 0x30) * (float)local_28;
    local_20 = (double)fVar2;
    fVar2 = fVar2 + (float)*param_3;
    *param_3 = (double)fVar2;
    *param_4 = (double)(((float)(((local_10.right - local_10.left) * (iVar5 + 1)) / 2) -
                        (float)*(int *)(param_1 + 0x14)) + fVar2);
  }
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    param_2 = (HWND)0x0;
    if (bVar3) {
      iVar6 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 < local_10.left) {
        iVar6 = local_10.left - iVar1;
      }
      if (local_10.right < iVar1) {
        iVar6 = (iVar1 - local_10.right) + 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (local_10.top < iVar1) {
      if (local_10.bottom <= iVar1) {
        iVar5 = 1;
        local_28 = 1;
        param_2 = (HWND)((iVar1 - local_10.bottom) + 1 + iVar6);
      }
    }
    else {
      iVar5 = -1;
      local_28 = -1;
      param_2 = (HWND)((local_10.top - iVar1) + iVar6);
    }
    fVar2 = (float)(int)param_2 * *(float *)(param_1 + 0x30) * (float)local_28;
    local_18 = (double)fVar2;
    fVar2 = fVar2 + (float)param_3[1];
    param_3[1] = (double)fVar2;
    param_4[1] = (double)(((float)(((local_10.bottom - local_10.top) * (iVar5 + 1)) / 2) -
                          (float)*(int *)(param_1 + 0x18)) + fVar2);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = (undefined4)local_20;
    param_5[1] = local_20._4_4_;
    param_5[2] = (undefined4)local_18;
    param_5[3] = local_18._4_4_;
  }
  return;
}


