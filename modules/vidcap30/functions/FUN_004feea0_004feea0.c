/* Module: vidcap30.exe
   Function: FUN_004feea0
   Address: 004feea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004feea0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6,undefined4 param_7,undefined4 *param_8,int *param_9
                 )

{
  HWND hWnd;
  HWND hWnd_00;
  LRESULT LVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  int *local_34;
  undefined4 local_30;
  int local_28;
  int local_20 [3];
  uint *local_14;
  int *local_10;
  
  piVar2 = param_1;
  hWnd = (HWND)param_1[7];
  hWnd_00 = (HWND)param_1[6];
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = -1;
  }
  local_34 = param_3;
  local_30 = param_4;
  SendMessageA(hWnd,0x1012,0,(LPARAM)&local_34);
  if (local_28 < 0) {
LAB_004ff00d:
    LVar1 = SendMessageA(hWnd_00,0x110a,9,0);
    param_3 = (int *)FUN_004f79a0(hWnd_00,LVar1,&param_1);
    if (param_1 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_1;
    }
    if (((int)param_3 < 0) || (iVar8 + -1 < (int)param_3)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = *(uint **)(param_1[2] + (int)param_3 * 4);
    }
    if (puVar4 != (uint *)0x0) {
      FUN_004f8340(hWnd_00,LVar1,param_6);
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = puVar4;
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = param_1;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = (int)param_3;
      }
      goto LAB_004fefbb;
    }
    uVar7 = piVar2[0x129] & 0xfffffeff;
  }
  else {
    LVar1 = SendMessageA(hWnd_00,0x110a,9,0);
    piVar2 = (int *)FUN_004f6ec0(hWnd_00,LVar1);
    param_3 = piVar2;
    iVar3 = FUN_004f3c20(hWnd,local_28);
    iVar8 = param_6;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = *(uint **)(piVar2[2] + iVar3 * 4);
    }
    piVar2 = param_1;
    if (puVar4 == (uint *)0x0) goto LAB_004ff00d;
    iVar5 = FUN_004f8340(hWnd_00,LVar1,param_6);
    *(undefined1 *)(iVar5 + iVar8) = 0x5c;
    uVar7 = puVar4[4];
    puVar9 = puVar4 + 5;
    puVar10 = (uint *)(iVar5 + 1 + iVar8);
    for (uVar6 = (uint)(ushort)((ushort)uVar7 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = (ushort)uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar10 = (char)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    }
    piVar2 = param_1;
    if ((*puVar4 & 0x10000) == 0) goto LAB_004ff00d;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = puVar4;
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = param_3;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = iVar3;
    }
LAB_004fefbb:
    if ((piVar2[0x138] & 0x400U) != 0) {
      piVar11 = local_20;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      local_20[1] = piVar2[1];
      local_20[2] = param_2;
      local_20[0] = 0xf;
      local_14 = puVar4;
      local_10 = piVar2;
      (**(code **)(*(int *)piVar2[0xf] + 0xc))((int *)piVar2[0xf],local_20);
      goto LAB_004ff0e9;
    }
    if (((piVar2[0x129] & 0x80U) == 0) || ((piVar2[0x138] & 0x200U) != 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
    }
    piVar2[0x129] = iVar8 << 2 | piVar2[0x129] & 0xfffffffbU;
    uVar7 = FUN_004fd530(piVar2,puVar4,param_2);
    uVar7 = (uVar7 & 1) << 8 | piVar2[0x129] & 0xfffffeffU;
  }
  piVar2[0x129] = uVar7;
LAB_004ff0e9:
  return (uint)piVar2[0x129] >> 8 & 1;
}


