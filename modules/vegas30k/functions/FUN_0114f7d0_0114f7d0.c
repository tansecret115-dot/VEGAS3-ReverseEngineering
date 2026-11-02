/* Module: vegas30k.dll
   Function: FUN_0114f7d0
   Address: 0114f7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114f7d0(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_38;
  int local_34;
  tagRECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_1 + 0x30;
  puVar2 = param_1 + 0x2c;
  local_34 = 0;
  local_38 = 0;
  local_30.left = param_1[0x22];
  local_30.top = param_1[0x23];
  local_30.right = param_1[0x24];
  local_30.bottom = param_1[0x25];
  local_20 = *puVar1;
  local_1c = param_1[0x31];
  local_18 = param_1[0x32];
  local_14 = param_1[0x33];
  local_10 = *puVar2;
  local_c = param_1[0x2d];
  local_8 = param_1[0x2e];
  local_4 = param_1[0x2f];
  if (0xfeff < param_2) {
    param_2 = param_1[0x32];
  }
  if (0xfeff < param_3) {
    param_3 = param_1[0x2e];
  }
  if ((HWND)param_1[2] != (HWND)0x0) {
    ShowWindow((HWND)param_1[2],0);
  }
  if (((param_4 == 0) || ((uint)param_1[0x19] <= param_3)) && (param_1[0x2e] != param_3)) {
    local_34 = FUN_0114f480(param_1,param_1[0x24] - param_1[0x22],&local_10,param_3);
    local_30.top = 0;
  }
  if (param_1[0x32] != param_2) {
    local_38 = FUN_0114f5e0(param_1,param_1[0x25] - param_1[0x23],&local_20,param_2);
    local_30.left = 0;
  }
  if ((local_34 != 0) || (local_38 != 0)) {
    ScrollWindowEx((HWND)*param_1,local_34,local_38,&local_30,&local_30,(HRGN)0x0,&local_30,0);
    InflateRect(&local_30,1,1);
    InvalidateRect((HWND)*param_1,&local_30,1);
    *puVar1 = local_20;
    param_1[0x31] = local_1c;
    param_1[0x32] = local_18;
    param_1[0x33] = local_14;
    *puVar2 = local_10;
    param_1[0x2d] = local_c;
    param_1[0x2e] = local_8;
    param_1[0x2f] = local_4;
    FUN_0114f730(param_1,1,puVar1);
    FUN_0114f730(param_1,0,puVar2);
  }
  return;
}


