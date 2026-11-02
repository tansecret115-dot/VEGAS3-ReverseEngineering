/* Module: vegas30.exe
   Function: FUN_00555280
   Address: 00555280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00555280(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM WVar3;
  int *piVar4;
  
  FUN_00553590(param_1,0);
  pHVar2 = GetDlgItem(param_1,0x4b1);
  WVar3 = SendMessageA(pHVar2,0x146,0,0);
  while ((WVar3 != 0 && (WVar3 != 0xffffffff))) {
    WVar3 = WVar3 - 1;
    piVar4 = (int *)SendMessageA(pHVar2,0x150,WVar3,0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  SendMessageA(pHVar2,0x14b,0,0);
  pHVar2 = GetDlgItem(param_1,0x662);
  WVar3 = SendMessageA(pHVar2,0x146,0,0);
  while ((WVar3 != 0 && (WVar3 != 0xffffffff))) {
    WVar3 = WVar3 - 1;
    piVar4 = (int *)SendMessageA(pHVar2,0x150,WVar3,0);
    if ((piVar4 != (int *)0x0) && (piVar1 = (int *)*piVar4, piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  SendMessageA(pHVar2,0x14b,0,0);
  pHVar2 = GetDlgItem(param_1,0x4b0);
  WVar3 = SendMessageA(pHVar2,0x146,0,0);
  while ((WVar3 != 0 && (WVar3 != 0xffffffff))) {
    WVar3 = WVar3 - 1;
    piVar4 = (int *)SendMessageA(pHVar2,0x150,WVar3,0);
    if ((piVar4 != (int *)0x0) && (piVar1 = (int *)*piVar4, piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  SendMessageA(pHVar2,0x14b,0,0);
  return;
}


