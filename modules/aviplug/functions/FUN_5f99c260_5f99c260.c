/* Module: aviplug.dll
   Function: FUN_5f99c260
   Address: 5f99c260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f99c260(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[4];
  if (((int)param_2 < (int)param_1[4]) || (uVar2 = param_1[5], (int)param_1[5] < (int)param_2)) {
    param_2 = uVar2;
  }
  param_1[7] = param_2;
  iVar1 = FUN_5f99a1c0(param_1,param_2);
  if ((param_1[3] & 8) == 0) {
    uVar2 = iVar1 - (param_1[0x1e] + 1 >> 1);
    param_1[0x1a] = uVar2;
    param_1[0x1c] = uVar2 + param_1[0x1e];
  }
  else {
    uVar2 = iVar1 - (param_1[0x1e] + 1 >> 1);
    param_1[0x1b] = uVar2;
    param_1[0x1d] = uVar2 + param_1[0x1e];
  }
  if ((param_3 != 0) && ((param_1[3] & 0x100000) == 0)) {
    InvalidateRect((HWND)param_1[10],(RECT *)(param_1 + 0xd),0);
    UpdateWindow((HWND)param_1[10]);
  }
  return;
}


