/* Module: vidcap30.exe
   Function: FUN_0043dcb0
   Address: 0043dcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043dcb0(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  RECT local_38;
  RECT local_28;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  uint local_8;
  
  uVar2 = DAT_005bb838;
  local_28.left = *param_2;
  local_28.top = param_2[1];
  local_28.right = param_2[2];
  local_28.bottom = param_2[3];
  if ((local_28.left < local_28.right) && (local_28.top < local_28.bottom)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_8 = (uint)!bVar1;
  fVar7 = (float10)FUN_0042ee90(DAT_005bb838);
  local_10 = (double)fVar7;
  uVar6 = local_28.right - local_28.left;
  uVar5 = local_28.bottom - local_28.top;
  FUN_0042efa0(uVar2,&local_18);
  *(undefined4 *)(param_1 + 0x14bc) = 0;
  *(undefined4 *)(param_1 + 0x14c0) = 0;
  *(undefined4 *)(param_1 + 0x14c4) = 0;
  *(undefined4 *)(param_1 + 0x14c8) = 0;
  if (local_8 != 0) {
    if (local_18 == 0) {
      local_18 = 0x168;
    }
    if (local_14 == 0) {
      local_14 = 0xf0;
    }
    if (DAT_005bb530 != 0) {
      local_18 = ftol();
    }
    if (DAT_005bb54c == 0) {
      if (((((int)uVar6 < (int)local_18) || ((int)uVar5 < (int)local_14)) && (local_18 != 0)) &&
         (local_14 != 0)) {
        iVar3 = (int)((local_18 - 1) + uVar6) / (int)uVar6;
        iVar4 = (int)((local_14 - 1) + uVar5) / (int)uVar5;
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(param_1 + 0xc0) = (int)local_18 / iVar3;
        *(int *)(param_1 + 0xc4) = (int)local_14 / iVar3;
      }
      else if ((uVar6 == 0) || (uVar5 == 0)) {
        *(uint *)(param_1 + 0xc0) = local_18;
        *(uint *)(param_1 + 0xc4) = local_14;
      }
      else {
        iVar3 = (int)uVar5 / (int)local_14;
        if ((int)uVar6 / (int)local_18 < (int)uVar5 / (int)local_14) {
          iVar3 = (int)uVar6 / (int)local_18;
        }
        *(uint *)(param_1 + 0xc0) = iVar3 * local_18;
        *(uint *)(param_1 + 0xc4) = iVar3 * local_14;
      }
    }
    else if (DAT_005bb54c == 1) {
      *(uint *)(param_1 + 0xc4) = uVar5;
      local_10 = (double)CONCAT44(uVar5,(undefined4)local_10);
      iVar3 = (int)(((ulonglong)local_18 * (ulonglong)uVar5 + (ulonglong)(local_14 >> 1)) /
                   (ulonglong)local_14);
      *(int *)(param_1 + 0xc0) = iVar3;
      if ((int)uVar6 < iVar3) {
        *(uint *)(param_1 + 0xc0) = uVar6;
        local_10 = (double)CONCAT44(uVar6,(undefined4)local_10);
        *(int *)(param_1 + 0xc4) =
             (int)(((ulonglong)local_14 * (ulonglong)uVar6 + (ulonglong)(local_18 >> 1)) /
                  (ulonglong)local_18);
      }
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    if (*(int *)(param_1 + 0xc4) == 0) {
      *(undefined4 *)(param_1 + 0xc4) = 1;
    }
    local_38.left = ((local_28.left - *(int *)(param_1 + 0xc0)) + local_28.right) / 2;
    local_38.right = *(int *)(param_1 + 0xc0) + local_38.left;
    local_38.top = ((local_28.top - *(int *)(param_1 + 0xc4)) + local_28.bottom) / 2;
    local_38.bottom = *(int *)(param_1 + 0xc4) + local_38.top;
    IntersectRect((LPRECT)(param_1 + 0x14bc),&local_28,&local_38);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13cc),0x47,0,param_2);
  }
  ShowWindow(*(HWND *)(param_1 + 0xcc),-(uint)(local_8 != 0) & 5);
  return;
}


