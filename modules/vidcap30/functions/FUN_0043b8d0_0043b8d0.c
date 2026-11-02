/* Module: vidcap30.exe
   Function: FUN_0043b8d0
   Address: 0043b8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043b8d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  BOOL bEnable;
  undefined4 uVar3;
  HWND hWnd;
  BOOL local_8;
  
  uVar1 = DAT_005bb838;
  uVar3 = 0;
  uVar2 = DAT_005bba8c;
  if (DAT_005bba90 == 0) {
    uVar2 = FUN_0042f0a0(DAT_005bb838);
  }
  bEnable = 0;
  local_8 = 0;
  DAT_005bba90 = 0;
  switch(uVar2) {
  case 0:
  case 2:
  case 3:
    if (DAT_005bb574 == 0) {
      uVar3 = FUN_0042b180(param_1 + 0xa48,0);
    }
    else {
      uVar3 = FUN_00422890(param_1 + 0xa48,"No Capture Device",0);
    }
    break;
  case 1:
    FUN_00422890(param_1 + 0xd8,&DAT_00586c70,0);
  }
  FUN_0042f070(uVar1,param_2);
  switch(param_2) {
  case 1:
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0xc,0,"Items to print:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0xc,0,"Print length:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0xc,0,"Current location:");
    uVar3 = FUN_0043bb50(param_1);
    *(undefined4 *)(param_1 + 0x1c0c) = 0;
    local_8 = 1;
    break;
  case 2:
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0xc,0,"Items to print:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0xc,0,"Print length:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0xc,0,"Current location:");
    uVar3 = FUN_0043be50(param_1);
    local_8 = 1;
    *(undefined4 *)(param_1 + 0x1c0c) = 1;
    break;
  case 3:
    bEnable = 1;
  case 0:
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0xc,0,"Dropped frames:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0xc,0,"Capture duration:");
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0xc,0,"Current location:");
    uVar3 = FUN_0043be50(param_1);
  }
  *(undefined4 *)(param_1 + 0x1bfc) = 0;
  *(undefined4 *)(param_1 + 0x1c04) = 0;
  *(undefined4 *)(param_1 + 0x1c00) = 0;
  EnableWindow(*(HWND *)(param_1 + 0x14dc),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14e0),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14e4),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14e8),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14ec),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14f0),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x14f4),bEnable);
  EnableWindow(*(HWND *)(param_1 + 0x1664),local_8);
  EnableWindow(*(HWND *)(param_1 + 0x1668),local_8);
  if (param_3 != 0) {
    uVar3 = FUN_0043c6a0(param_1);
    hWnd = *(HWND *)(param_1 + 0x1c08);
    if (hWnd == (HWND)0x0) {
      hWnd = *(HWND *)(param_1 + 8);
    }
    SetFocus(hWnd);
    *(undefined4 *)(param_1 + 0x1c08) = 0;
  }
  FUN_00411120(1);
  return uVar3;
}


