/* Module: vegas30k.dll
   Function: FUN_01148ab0
   Address: 01148ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01148ab0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  HWND hWnd;
  int *piVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20 [4];
  int *local_10;
  
  piVar1 = param_1;
  hWnd = (HWND)param_1[6];
  local_30 = param_3;
  local_2c = param_4;
  SendMessageA(hWnd,0x1111,0,(LPARAM)&local_30);
  LVar2 = SendMessageA(hWnd,0x110a,8,0);
  if ((LVar2 == local_24) && (param_5 == 0)) {
    if (local_24 != 0) {
      iVar3 = piVar1[0x128];
      piVar1[0x128] = iVar3;
      return iVar3;
    }
    piVar1[0x128] = 0x7f88;
    return 0x7f88;
  }
  if (LVar2 != 0) {
    SendMessageA(hWnd,0x110b,8,0);
    piVar1[0x129] = piVar1[0x129] & 0xfffffff7;
  }
  if (local_24 == 0) {
LAB_01148b79:
    uVar4 = piVar1[0x129] & 0xfffffeff;
  }
  else {
    iVar3 = FUN_0112f650(hWnd,local_24,&param_1);
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_1;
    }
    if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1[2] + iVar3 * 4);
    }
    if (iVar3 == 0) goto LAB_01148b79;
    if ((piVar1[0x138] & 0x400U) != 0) {
      piVar6 = local_20;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      local_20[1] = piVar1[1];
      local_20[2] = param_2;
      local_20[0] = 0xf;
      local_10 = piVar1;
      local_20[3] = iVar3;
      (**(code **)(*(int *)piVar1[0xf] + 0xc))((int *)piVar1[0xf],local_20);
      goto LAB_01148c1b;
    }
    if (((piVar1[0x129] & 0x80U) == 0) || ((piVar1[0x138] & 0x200U) != 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 1;
    }
    piVar1[0x129] = iVar5 << 2 | piVar1[0x129] & 0xfffffffbU;
    uVar4 = FUN_01147320(piVar1,iVar3,param_2);
    uVar4 = (uVar4 & 1) << 8 | piVar1[0x129] & 0xfffffeffU;
  }
  piVar1[0x129] = uVar4;
LAB_01148c1b:
  if ((piVar1[0x129] & 0x100U) != 0) {
    SendMessageA(hWnd,0x110b,8,local_24);
    uVar4 = piVar1[0x129];
    piVar1[0x129] = uVar4 | 8;
    iVar3 = ((uVar4 & 4) != 0) + 0xf;
    piVar1[0x128] = iVar3;
    return iVar3;
  }
  piVar1[0x128] = 0x7f88;
  return 0x7f88;
}


