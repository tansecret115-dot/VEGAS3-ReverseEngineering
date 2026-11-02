/* Module: sftrkfx1.dll
   Function: FUN_5cbaa9d0
   Address: 5cbaa9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbaa9d0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  SHORT SVar3;
  SHORT SVar4;
  SHORT SVar5;
  HWND pHVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int local_20;
  float local_1c;
  float local_18;
  
  pHVar6 = GetCapture();
  if (pHVar6 != (HWND)*param_1) {
    return;
  }
  if ((uint)param_1[0x20] <= (uint)param_1[0x16]) {
    return;
  }
  iVar1 = param_1[param_1[0x16] + 0x21];
  if (iVar1 == 0) {
    return;
  }
  if (*(uint *)(iVar1 + 0x28) <= (uint)param_1[0x1d]) {
    return;
  }
  iVar10 = param_1[0x1e] + param_3;
  iVar11 = param_1[3];
  if ((iVar11 <= iVar10) && (iVar11 = param_1[5], iVar10 <= param_1[5])) {
    iVar11 = iVar10;
  }
  iVar9 = param_4 + param_1[0x1f];
  iVar10 = param_1[4];
  if ((param_1[4] <= iVar9) && (iVar10 = param_1[6], iVar9 <= param_1[6])) {
    iVar10 = iVar9;
  }
  FUN_5cba9930((int)param_1,iVar1,iVar11,iVar10,&local_20);
  SVar3 = GetKeyState(0x11);
  SVar4 = GetKeyState(0x12);
  SVar5 = GetKeyState(0x10);
  iVar10 = param_1[0x1d];
  if (SVar4 < 0) {
    iVar9 = param_1[9];
    fVar2 = (*(float *)(iVar1 + 0x1c) - *(float *)(iVar1 + 0x18)) * _DAT_5cc04590;
    iVar10 = iVar10 * 0x20;
    iVar11 = iVar10 + iVar1;
    iVar7 = MulDiv(*(int *)(iVar10 + 0x30 + iVar1),iVar9,param_1[8]);
    iVar8 = ftol();
    local_18 = (float)(((iVar8 - iVar7) - param_4) + param_3) * (fVar2 / (float)iVar9) +
               *(float *)(*(int *)(iVar1 + 0x24) + 0x38 + iVar10);
    if (*(float *)(iVar1 + 0x18) <= local_18) {
      if (local_18 <= *(float *)(iVar1 + 0x1c)) {
        *(float *)(iVar11 + 0x38) = local_18;
      }
      else {
        *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
    else {
      *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar1 + 0x18);
    }
  }
  else {
    if (SVar3 < 0) {
      if (-1 < SVar5) {
        if (*(float *)(iVar1 + 0x14) <= local_1c) {
          if (local_1c <= *(float *)(iVar1 + 0xc)) {
            *(float *)(iVar10 * 0x20 + 0x34 + iVar1) = local_1c;
            iVar11 = iVar10 * 0x20 + iVar1;
          }
          else {
            *(undefined4 *)(iVar10 * 0x20 + 0x34 + iVar1) = *(undefined4 *)(iVar1 + 0xc);
            iVar11 = iVar10 * 0x20 + iVar1;
          }
        }
        else {
          *(undefined4 *)(iVar10 * 0x20 + 0x34 + iVar1) = *(undefined4 *)(iVar1 + 0x14);
          iVar11 = iVar10 * 0x20 + iVar1;
        }
        goto LAB_5cbaac1e;
      }
      iVar9 = *(int *)(iVar1 + 8);
      if ((*(int *)(iVar1 + 8) <= local_20) &&
         (iVar9 = *(int *)(iVar1 + 0x10), local_20 <= *(int *)(iVar1 + 0x10))) {
        iVar9 = local_20;
      }
      iVar11 = iVar10 * 0x20 + iVar1;
    }
    else {
      if (*(float *)(iVar1 + 0x14) <= local_1c) {
        if (*(float *)(iVar1 + 0xc) < local_1c) {
          local_1c = *(float *)(iVar1 + 0xc);
        }
      }
      else {
        local_1c = *(float *)(iVar1 + 0x14);
      }
      *(float *)(iVar10 * 0x20 + 0x34 + iVar1) = local_1c;
      iVar11 = iVar10 * 0x20 + iVar1;
      iVar9 = *(int *)(iVar1 + 8);
      if ((*(int *)(iVar1 + 8) <= local_20) &&
         (iVar9 = *(int *)(iVar1 + 0x10), local_20 <= *(int *)(iVar1 + 0x10))) {
        iVar9 = local_20;
      }
    }
    *(int *)(iVar11 + 0x30) = iVar9;
  }
LAB_5cbaac1e:
  piVar12 = (int *)(iVar11 + 0x30);
  piVar13 = &local_20;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar13 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar13 = piVar13 + 1;
  }
  FUN_5cba93c0(param_1);
  FUN_5cbaa380(param_1);
  FUN_5cba9850((int)param_1,iVar1,&local_20,&param_3);
  return;
}


