/* Module: vegas30.exe
   Function: FUN_004168b0
   Address: 004168b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004168b0(int param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  tagPOINT local_8;
  
  local_8.y = param_3[1];
  iVar3 = *param_3;
  hWnd = *(HWND *)(param_1 + 8);
  if (param_5 == 0) {
    if (((byte)*param_4 & 3) == 1) {
      piVar4 = *(int **)(param_1 + 0x8c);
      uVar2 = *param_4 >> 8 & 0xf;
      if (piVar4 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar4;
      }
      if (((int)uVar2 <= iVar1 + -1) &&
         (piVar4 = (int *)(piVar4[1] * uVar2 + piVar4[2]), piVar4 != (int *)0x0)) {
        param_3[2] = (piVar4[2] - *piVar4) + iVar3;
        param_3[3] = (piVar4[3] - piVar4[1]) + param_3[1];
        if ((*param_4 & 0x10) != 0) {
          return;
        }
        param_3[2] = (param_3[2] - iVar3) / 2 + iVar3;
        return;
      }
    }
  }
  else {
    *param_4 = 0;
  }
  *param_4 = *param_4 & 0xfffffffd | 0xd;
  local_8.x = iVar3;
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    ScreenToClient(hWnd,&local_8);
  }
  else {
    ClientToScreen(hWnd,&local_8);
  }
  iVar1 = local_8.x + 0x1c;
  iVar3 = local_8.x - iVar3;
  local_8.x = iVar1;
  uVar2 = FUN_00415ef0(param_1,iVar1,local_8.y);
  if (((int)uVar2 < 0) ||
     (piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x8c) + 4) * uVar2 +
                      *(int *)(*(int *)(param_1 + 0x8c) + 8)), piVar4 == (int *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x84);
    iVar1 = *(int *)(param_1 + 0x80);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = iVar1;
    param_3[3] = iVar3;
  }
  else {
    param_3[2] = (*param_3 - *piVar4) + piVar4[2];
    param_3[3] = (piVar4[3] - piVar4[1]) + param_3[1];
    *param_4 = ((int)(short)*piVar4 << 8 | uVar2 & 0xf) << 8 | *param_4 & 0xef | 0x10;
    iVar1 = (piVar4[2] - *piVar4) / 2;
    if (iVar1 < piVar4[8]) {
      iVar1 = piVar4[8];
    }
    if (0x32 < iVar1) {
      iVar1 = 0x32;
    }
    if (*piVar4 + iVar1 < local_8.x + -0x1c) {
      iVar3 = piVar4[2] - iVar3;
      param_3[2] = iVar3;
      if (iVar3 == *param_3) {
        param_3[2] = *param_3 + piVar4[8];
      }
      uVar2 = *param_4;
      *param_4 = uVar2 & 0xffffffef;
      *param_4 = (int)(short)(((short)*param_3 - (short)param_3[2]) + (short)piVar4[2]) << 0x10 |
                 uVar2 & 0xffef;
      return;
    }
  }
  return;
}


