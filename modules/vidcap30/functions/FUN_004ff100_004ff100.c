/* Module: vidcap30.exe
   Function: FUN_004ff100
   Address: 004ff100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004ff100(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
                 int param_6,int param_7,undefined4 *param_8,int *param_9)

{
  HWND hWnd;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20 [4];
  int *local_10;
  
  piVar1 = param_1;
  hWnd = (HWND)param_1[6];
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = -1;
  }
  local_30 = param_3;
  local_2c = param_4;
  SendMessageA(hWnd,0x1111,0,(LPARAM)&local_30);
  if (local_24 == 0) {
LAB_004ff1d9:
    uVar2 = piVar1[0x129] & 0xfffffeff;
  }
  else {
    param_3 = FUN_004f79a0(hWnd,local_24,&param_1);
    iVar3 = param_6;
    if (param_1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_1;
    }
    if ((param_3 < 0) || (iVar4 + -1 < param_3)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1[2] + param_3 * 4);
    }
    FUN_004f8340(hWnd,local_24,param_6);
    *(undefined1 *)(iVar3 + -1 + param_7) = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = iVar4;
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = param_1;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = param_3;
    }
    if (iVar4 == 0) goto LAB_004ff1d9;
    if ((piVar1[0x138] & 0x400U) != 0) {
      local_20[1] = piVar1[1];
      piVar5 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_20[2] = param_2;
      local_20[0] = 0xf;
      local_10 = piVar1;
      local_20[3] = iVar4;
      (**(code **)(*(int *)piVar1[0xf] + 0xc))((int *)piVar1[0xf],local_20);
      goto LAB_004ff27b;
    }
    if (((piVar1[0x129] & 0x80U) == 0) || ((piVar1[0x138] & 0x200U) != 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    piVar1[0x129] = iVar3 << 2 | piVar1[0x129] & 0xfffffffbU;
    uVar2 = FUN_004fd530(piVar1,iVar4,param_2);
    uVar2 = (uVar2 & 1) << 8 | piVar1[0x129] & 0xfffffeffU;
  }
  piVar1[0x129] = uVar2;
LAB_004ff27b:
  return (uint)piVar1[0x129] >> 8 & 1;
}


