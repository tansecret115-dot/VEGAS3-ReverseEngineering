/* Module: vidcap30.exe
   Function: FUN_00509740
   Address: 00509740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00509740(undefined4 *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  LONG LVar6;
  tagRECT local_28;
  uint local_14;
  int local_10;
  uint local_c;
  
  GetClientRect((HWND)*param_1,&local_28);
  uVar3 = GetWindowLongA((HWND)*param_1,-0x10);
  local_c = local_28.bottom - local_28.top;
  uVar4 = local_28.right - local_28.left;
  if ((uVar3 & 0x8000) == 0) {
    if ((uVar3 & 0x20) != 0) {
      uVar3 = *(uint *)(param_1[4] + 4);
      uVar5 = uVar3 * 2;
      if ((int)uVar4 < (int)uVar5) {
        uVar5 = uVar4;
      }
      uVar2 = *(uint *)(param_1[4] + 8);
      local_14 = local_c;
      if ((int)(uVar2 * 2) <= (int)local_c) {
        local_14 = uVar2 * 2;
      }
      uVar3 = (uint)(((ulonglong)uVar3 * (ulonglong)local_14 + (ulonglong)(uVar2 >> 1)) /
                    (ulonglong)uVar2);
      if ((int)uVar5 < (int)uVar3) {
        uVar3 = *(uint *)(param_1[4] + 4);
        local_14 = (uint)(((ulonglong)*(uint *)(param_1[4] + 8) * (ulonglong)uVar5 +
                          (ulonglong)(uVar3 >> 1)) / (ulonglong)uVar3);
        uVar3 = uVar5;
      }
      LVar6 = local_28.left + (int)(uVar4 - uVar3) / 2;
      local_28.top = local_28.top + (int)(local_c - local_14) / 2;
      goto LAB_005097f3;
    }
    if (((uVar3 & 0x4000) == 0) ||
       ((*(int *)(param_1[4] + 4) <= (int)uVar4 && (*(int *)(param_1[4] + 8) <= (int)local_c)))) {
      iVar1 = param_1[4];
      LVar6 = local_28.left + (int)(uVar4 - *(int *)(iVar1 + 4)) / 2;
      local_28.top = local_28.top + (int)(local_c - *(int *)(iVar1 + 8)) / 2;
      local_14 = *(uint *)(iVar1 + 8);
      uVar3 = *(uint *)(iVar1 + 4);
      goto LAB_005097f3;
    }
  }
  iVar1 = param_1[4];
  uVar3 = uVar4;
  if (*(int *)(iVar1 + 4) < (int)uVar4) {
    local_28.left = local_28.left + (int)(uVar4 - *(int *)(iVar1 + 4)) / 2;
    uVar3 = *(uint *)(iVar1 + 4);
  }
  LVar6 = local_28.left;
  local_10 = *(int *)(iVar1 + 8) * uVar3;
  local_14 = ftol();
  if ((int)local_14 < (int)local_c) {
    local_28.top = local_28.top + (int)(local_c - local_14) / 2;
  }
LAB_005097f3:
  *param_4 = uVar3;
  *param_5 = local_14;
  *param_2 = LVar6;
  *param_3 = local_28.top;
  return;
}


