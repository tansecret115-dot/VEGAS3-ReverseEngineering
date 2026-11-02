/* Module: vegas30.exe
   Function: FUN_005d7f40
   Address: 005d7f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d7f40(HWND param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  int local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = *(undefined4 *)(param_3 + 0xd90);
  local_1c = *(undefined4 *)(param_3 + 0xd94);
  local_28 = *(undefined4 *)(param_3 + 0xd8c);
  local_10 = *(undefined4 *)(param_3 + 0xda8);
  local_c = *(undefined4 *)(param_3 + 0xdac);
  local_18 = *(undefined4 *)(param_3 + 0xd98);
  local_8 = *(undefined4 *)(param_3 + 0xdc4);
  local_30[0] = 0;
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x54d,param_1,FUN_005d5370,local_30);
  if ((iVar1 == 1) && (local_30[0] != 0)) {
    *(undefined4 *)(param_3 + 0xd8c) = local_28;
    *(undefined4 *)(param_3 + 0xd90) = local_20;
    *(undefined4 *)(param_3 + 0xd98) = local_18;
    *(undefined4 *)(param_3 + 0xd94) = local_1c;
    *(undefined4 *)(param_3 + 0xdc4) = local_8;
    *(undefined4 *)(param_3 + 0xda8) = local_10;
    *(undefined4 *)(param_3 + 0xdac) = local_c;
    if (*(int *)(param_3 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
    }
    *(undefined4 *)(param_3 + 0xd4c) = 1;
  }
  return 1;
}


