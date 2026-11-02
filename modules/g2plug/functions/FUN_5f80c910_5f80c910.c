/* Module: g2plug.dll
   Function: FUN_5f80c910
   Address: 5f80c910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80c910(HWND param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  int nIDCheckButton;
  uint uVar3;
  UINT Msg;
  int iVar4;
  LPARAM lParam;
  
  iVar4 = -0x10;
  pHVar1 = GetDlgItem(param_1,0x839);
  uVar2 = GetWindowLongA(pHVar1,iVar4);
  if (*(int *)(param_2 + 0x14c) == 0) {
    uVar3 = uVar2 & 0xfffffff4 | 9;
  }
  else {
    uVar3 = uVar2 & 0xfffffff4 | 3;
  }
  if (uVar3 != uVar2) {
    iVar4 = 0;
    do {
      lParam = 1;
      Msg = 0xf4;
      uVar2 = uVar3 & 0xffff;
      pHVar1 = GetDlgItem(param_1,iVar4 + 0x839);
      SendMessageA(pHVar1,Msg,uVar2,lParam);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 0x138) == 0) {
    *(undefined4 *)(param_2 + 0x138) = 1;
  }
  uVar2 = *(uint *)(param_2 + 0x138);
  if (uVar2 != 0) {
    while (iVar4 < 9) {
      nIDCheckButton = FUN_5f80c9f0(iVar4);
      if (((uVar2 & 1) != 0) && (*(int *)(param_2 + 0x14c) == 0)) {
        CheckRadioButton(param_1,0x839,0x83f,nIDCheckButton);
        return;
      }
      CheckDlgButton(param_1,nIDCheckButton,uVar2 & 1);
      uVar2 = (int)uVar2 >> 1;
      iVar4 = iVar4 + 1;
      if (uVar2 == 0) {
        return;
      }
    }
  }
  return;
}


