/* Module: vegas30k.dll
   Function: FUN_01152860
   Address: 01152860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01152860(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  tagRECT local_80;
  tagRECT local_70;
  tagRECT local_60;
  tagRECT local_50;
  RECT local_40;
  RECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = FUN_0114e800(param_1,param_2[1],&local_80);
  if (iVar1 == 0) {
    local_80.left = param_1[0x1e];
    local_80.right = local_80.left;
  }
  iVar1 = FUN_0114e8b0(param_1,*param_2,&local_80);
  if (iVar1 == 0) {
    local_80.top = param_1[0x1f];
    local_80.bottom = local_80.top;
  }
  InflateRect(&local_80,1,1);
  iVar1 = FUN_0114e800(param_1,param_2[3],&local_70);
  if (iVar1 == 0) {
    local_70.left = param_1[0x1e];
    local_70.right = local_70.left;
  }
  iVar1 = FUN_0114e8b0(param_1,param_2[2],&local_70);
  if (iVar1 == 0) {
    local_70.top = param_1[0x1f];
    local_70.bottom = local_70.top;
  }
  InflateRect(&local_70,1,1);
  UnionRect(&local_10,&local_80,&local_70);
  iVar1 = FUN_0114e800(param_1,param_4,&local_60);
  if (iVar1 == 0) {
    local_60.left = param_1[0x1e];
    local_60.right = local_60.left;
  }
  iVar1 = FUN_0114e8b0(param_1,param_3,&local_60);
  if (iVar1 == 0) {
    local_60.top = param_1[0x1f];
    local_60.bottom = local_60.top;
  }
  InflateRect(&local_60,1,1);
  UnionRect(&local_20,&local_80,&local_60);
  IntersectRect(&local_80,&local_10,&local_20);
  UnionRect(&local_50,&local_10,&local_20);
  InvalidateRect((HWND)*param_1,&local_50,1);
  local_40.bottom = param_1[0x1d] + 1;
  local_40.left = local_50.left;
  local_40.top = 0;
  local_40.right = local_50.right;
  InvalidateRect((HWND)*param_1,&local_40,1);
  local_30.top = local_50.top;
  local_30.bottom = local_50.bottom;
  local_30.right = param_1[0x1c] + 1;
  local_30.left = 0;
  InvalidateRect((HWND)*param_1,&local_30,1);
  return;
}


