/* Module: vegas30.exe
   Function: FUN_00526690
   Address: 00526690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526690(HWND param_1,undefined4 *param_2)

{
  HWND hWnd;
  int iVar1;
  CHAR local_104 [260];
  
  SetWindowLongA(param_1,-0x15,(LONG)param_2);
  *param_2 = param_1;
  _SfWndCenter_16(param_1,0,0,0x8001);
  hWnd = GetDlgItem(param_1,0x434);
  SendMessageA(hWnd,0x14b,0,0);
  iVar1 = param_2[1];
  switch(*(undefined4 *)(iVar1 + 0x104)) {
  case 0:
  case 1:
    iVar1 = FUN_0050a110(*(undefined4 *)(iVar1 + 0xfc));
    break;
  case 2:
  case 3:
    iVar1 = FUN_0050a1b0(*(undefined4 *)(iVar1 + 0xfc));
    break;
  default:
    goto switchD_005266ee_caseD_4;
  case 5:
    iVar1 = FUN_0050a1f0(*(undefined4 *)(iVar1 + 0xfc));
    break;
  case 6:
    iVar1 = FUN_0050a230(*(undefined4 *)(iVar1 + 0xfc));
  }
  if (iVar1 != 0) {
    FUN_00526630(hWnd,iVar1);
  }
switchD_005266ee_caseD_4:
  FUN_00526540(param_2[1],local_104,0x104);
  SetDlgItemTextA(param_1,0x434,local_104);
  return;
}


