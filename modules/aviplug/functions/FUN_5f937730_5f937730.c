/* Module: aviplug.dll
   Function: FUN_5f937730
   Address: 5f937730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f937730(int *param_1)

{
  int iVar1;
  bool bVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined8 uVar6;
  int local_20;
  double local_18;
  double local_10;
  
  local_20 = 0;
  if (param_1[0x45] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  iVar5 = param_1[0x61];
  param_1[0x53] = 1;
  param_1[0x54] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  local_18 = 0.0;
  bVar2 = false;
  local_10 = 1.0;
  if (*(int *)(iVar5 + 0x428) != 0) {
    param_1[0x4a] = *(int *)(*(int *)(iVar5 + 0x428) + 4);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x428) + 0x94);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x24) & 0x80000) != 0)) {
      param_1[0x53] = 0;
    }
    if (0 < param_1[0x4a]) {
      pvVar3 = GlobalAlloc(0x42,*(int *)(*(int *)(iVar5 + 0x428) + 4) * 0x48);
      pvVar4 = GlobalLock(pvVar3);
      param_1[0x4c] = (int)pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      local_20 = FUN_5f9797b0(param_1 + 0x4d,4,-1,-1,0);
      if (local_20 < 0) {
        return local_20;
      }
      iVar5 = param_1[0x61];
      if (*(double *)(*(int *)(iVar5 + 0x428) + 0x18) <= _DAT_5f9d7ca0) {
        local_10 = 0.5;
      }
      else {
        local_10 = *(double *)(*(int *)(iVar5 + 0x428) + 0x18);
      }
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x24) & 1) != 0)) {
        if ((*(uint *)(iVar1 + 0x24) & 0x200000) == 0) {
          local_18 = *(double *)(iVar1 + 8);
        }
        else {
          local_18 = _DAT_5f9d7c98 / local_10;
        }
        bVar2 = true;
      }
    }
  }
  if (*(int *)(iVar5 + 0x424) != 0) {
    param_1[0x47] = *(int *)(*(int *)(iVar5 + 0x424) + 0x12);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x424) + 0x3e);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 0x80000) != 0) {
        param_1[0x53] = 0;
      }
      if ((*(uint *)(iVar1 + 0x24) & 0x100000) != 0) {
        param_1[0x55] = 1;
      }
    }
    if (0 < param_1[0x47]) {
      pvVar3 = GlobalAlloc(0x42,*(int *)(*(int *)(iVar5 + 0x424) + 0x12) * 0x48);
      pvVar4 = GlobalLock(pvVar3);
      param_1[0x49] = (int)pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      local_20 = FUN_5f9797b0(param_1 + 0x4e,4,-1,-1,0);
      if (local_20 < 0) {
        return local_20;
      }
    }
  }
  if (((0 < param_1[0x4a]) && (0 < param_1[0x47])) && (bVar2)) {
    local_10 = _DAT_5f9d7c98 / local_10;
    param_1[0x52] = 1;
    if (local_18 <= local_10) {
      param_1[0x54] = (uint)(param_1[0x53] == 0);
    }
    uVar6 = ftol();
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    return local_20;
  }
  param_1[0x52] = 0;
  if (param_1[0x47] < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 10000000;
  }
  param_1[0x50] = iVar5;
  param_1[0x51] = 0;
  return local_20;
}


