/* Module: sftrans1.dll
   Function: FUN_0053f9e0
   Address: 0053f9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0053f9e0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  HDC pHVar7;
  HDC pHVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  FUN_0053b0d0();
  param_1[6] = param_2;
  iVar3 = FUN_0053f820();
  if (iVar3 < 0) {
    return iVar3;
  }
  if (*(int *)(param_1[6] + 0x6c) == 0) {
    local_10 = 0;
    local_c[0] = 0;
    local_14 = 1;
  }
  else {
    FUN_0053b140(param_1[7],param_1[6],local_c,&local_10,&local_14);
  }
  piVar1 = (int *)param_1[6];
  if ((piVar1[0xc] == 0) && (piVar1[0xd] == 0x3ff00000)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *param_1 = uVar9;
  param_1[1] = (uint)(*piVar1 != 0);
  if (param_1[0x58] == 0) {
    pvVar4 = GlobalAlloc(0x40,8);
    puVar5 = GlobalLock(pvVar4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    param_1[0x58] = puVar5;
  }
  if (param_1[0x58] == 0) {
    return -0x7ff8fff2;
  }
  iVar3 = *(int *)(param_1[6] + 0x58);
  if (iVar3 == 0) {
    param_1[0x48] = 0x40;
    param_1[0x46] = 4;
    param_1[0x47] = 4;
  }
  else if (iVar3 == 1) {
    param_1[0x46] = 5;
    param_1[0x47] = 0x10;
    param_1[0x48] = 0x10;
  }
  else if (iVar3 == 2) {
    param_1[0x46] = 6;
    param_1[0x47] = 0x40;
    param_1[0x48] = 4;
  }
  if (param_1[8] == 0) {
    pvVar4 = GlobalAlloc(0x40,0x20);
    pvVar6 = GlobalLock(pvVar4);
    param_1[8] = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
  }
  if (param_1[3] == 0) {
    pHVar7 = GetDC((HWND)0x0);
    pHVar8 = CreateCompatibleDC(pHVar7);
    param_1[3] = pHVar8;
    ReleaseDC((HWND)0x0,pHVar7);
    if (param_1[3] == 0) {
      return -0x7fffbffb;
    }
  }
  if (param_1[4] == 0) {
    pHVar7 = GetDC((HWND)0x0);
    pHVar8 = CreateCompatibleDC(pHVar7);
    param_1[4] = pHVar8;
    ReleaseDC((HWND)0x0,pHVar7);
    if (param_1[4] == 0) {
      return -0x7fffbffb;
    }
  }
  if (param_1[1] == 0) {
    iVar3 = param_1[6];
    piVar1 = *(int **)(iVar3 + 4);
    if ((*piVar1 == 0) && (piVar1[1] == 0)) goto LAB_0053fd50;
    iVar10 = piVar1[1];
    param_1[2] = (uint)(iVar10 != 0);
    if ((iVar10 != 0) == 0) {
      if (*(char *)**(undefined4 **)(iVar3 + 4) == '\0') goto LAB_0053fd50;
    }
    else if (**(short **)(*(int *)(iVar3 + 4) + 4) == 0) goto LAB_0053fd50;
  }
  else if ((local_14 != 0) && (iVar3 = FUN_0053b5b0(), iVar3 < 0)) goto LAB_0053fd50;
  iVar3 = param_1[6];
  if (_DAT_00555908 < *(double *)(iVar3 + 0x10)) {
    if (*(double *)(iVar3 + 0x18) <= *(double *)(iVar3 + 0x10)) {
      param_1[0x52] = 1;
    }
    else {
      param_1[0x52] = 2;
    }
  }
  else {
    param_1[0x52] = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0x44);
  if ((uVar2 & 0x40) == 0) {
    param_1[0x54] = 0;
    if ((uVar2 & 0x80) == 0) {
      param_1[0x55] = 0x3ff00000;
    }
    else {
      param_1[0x55] = 0x3fe00000;
    }
  }
  else {
    param_1[0x54] = 0;
    param_1[0x55] = 0;
  }
  param_1[0x24] = *(int *)(iVar3 + 200) + 2;
  if (*(int *)(iVar3 + 0x38) != 0) {
    iVar3 = FUN_0053f4f0();
    if (iVar3 < 0) goto LAB_0053fd50;
    param_1[0x56] = 1;
  }
  iVar3 = FUN_0053b870(param_4,param_5,param_6,local_c[0],local_10);
  if (-1 < iVar3) {
    iVar10 = param_1[0x14] - param_1[0x24];
    iVar11 = param_1[0x13] - param_1[0x24];
    param_1[0x14] = iVar10;
    param_1[0x1d] = iVar10;
    param_1[0x1c] = iVar11;
    param_1[0x13] = iVar11;
    param_1[0x1e] = param_1[0xb] + iVar11;
    param_1[0x1f] = param_1[0xc] + iVar10;
    if (param_3 != (int *)0x0) {
      *param_3 = iVar11;
      param_3[1] = param_1[0x1d];
      param_3[2] = param_1[0x1e];
      param_3[3] = param_1[0x1f];
    }
    if (*(int *)(param_1[6] + 0x6c) == 0) {
      return iVar3;
    }
    iVar10 = FUN_0053b3e0(param_1 + 7,param_1[6]);
    if (-1 < iVar10) {
      return iVar3;
    }
  }
LAB_0053fd50:
  if (param_1[7] != 0) {
    FUN_0053b2f0(param_1[7]);
    param_1[7] = 0;
  }
  return -0x7fffbffb;
}


