/* Module: vidcap30.exe
   Function: FUN_00441be0
   Address: 00441be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441be0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  WPARAM WVar4;
  int iVar5;
  int iVar6;
  LPARAM lParam;
  LRESULT local_110;
  CHAR local_104 [260];
  
  uVar1 = DAT_005bb838;
  iVar2 = FUN_0042e510(DAT_005bb838);
  iVar3 = GetWindowTextA(*(HWND *)(param_1 + 0x14e0),local_104,0x104);
  WVar4 = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14c,0xffffffff,(LPARAM)local_104);
  if (WVar4 == 0xffffffff) {
    iVar5 = FUN_004436d0(uVar1,local_104,0);
    if (iVar5 == 0) {
      local_110 = 0;
    }
    else {
      local_110 = *(LRESULT *)(iVar5 + 8);
    }
  }
  else {
    local_110 = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x150,WVar4,0);
  }
  SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14b,0,0);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar6 = FUN_00443740(uVar1,iVar5);
      lParam = *(LPARAM *)(iVar6 + 8);
      WVar4 = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x143,0,*(LPARAM *)(iVar6 + 0xc));
      SendMessageA(*(HWND *)(param_1 + 0x14e0),0x151,WVar4,lParam);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar2 = FUN_00443690(uVar1,local_110);
  if (iVar2 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14d,0xffffffff,*(LPARAM *)(iVar2 + 0xc));
    return;
  }
  if (iVar3 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14e,0xffffffff,0);
    SetWindowTextA(*(HWND *)(param_1 + 0x14e0),local_104);
    return;
  }
  SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14e,0xffffffff,0);
  SetWindowTextA(*(HWND *)(param_1 + 0x14e0),&DAT_005bb680);
  return;
}


