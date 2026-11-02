/* Module: vegas30.exe
   Function: FUN_004b3ef0
   Address: 004b3ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004b3ef0(HWND param_1,undefined4 param_2,HWND param_3,int param_4)

{
  int iVar1;
  HWND hWnd;
  uint uVar2;
  UINT Msg;
  LPARAM lParam;
  
  uVar2 = 0;
  iVar1 = GetDlgCtrlID(param_3);
  switch(iVar1) {
  case 0x46d:
    uVar2 = FUN_004b3740(param_1,param_2,param_3,param_4);
    break;
  case 0x46e:
    uVar2 = FUN_004b3940(param_1,param_2,param_3,param_4);
    break;
  case 0x46f:
    uVar2 = FUN_004b3b90(param_1,param_2,param_3,param_4);
    break;
  case 0x470:
    uVar2 = FUN_004b3dc0(param_1,param_2,param_3,param_4);
    break;
  default:
    goto switchD_004b3f0e_default;
  }
  if (uVar2 != 0) {
    lParam = 0;
    Msg = 0x468;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  }
switchD_004b3f0e_default:
  *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | uVar2;
  *(uint *)(param_4 + 0x74) = *(uint *)(param_4 + 0x74) | uVar2;
  return uVar2;
}


