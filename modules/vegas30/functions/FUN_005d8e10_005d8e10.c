/* Module: vegas30.exe
   Function: FUN_005d8e10
   Address: 005d8e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d8e10(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND hWnd;
  float10 fVar2;
  UINT Msg;
  CHAR *pCVar3;
  int iVar4;
  LPARAM lParam;
  undefined8 local_110;
  CHAR local_108 [260];
  
  pCVar3 = local_108;
  iVar4 = 0x100;
  local_110 = 0.0;
  pHVar1 = GetDlgItem(param_1,0x471);
  iVar4 = GetWindowTextA(pHVar1,pCVar3,iVar4);
  if (iVar4 != 0) {
    fVar2 = (float10)_SfTextToDoubleToken_8(local_108,0);
    local_110 = (double)fVar2;
  }
  if (local_110 != *(double *)(param_2 + 0xd18)) {
    if (_DAT_006106d0 <= local_110) {
      if (_DAT_0062a490 < local_110) {
        local_110 = 240.0;
      }
    }
    else {
      local_110 = 1.0;
    }
    *(undefined4 *)(param_2 + 0xd18) = (undefined4)local_110;
    *(undefined4 *)(param_2 + 0xd1c) = local_110._4_4_;
    if (*(int *)(param_2 + 0xd58) == 0) {
      if (*(int *)(param_2 + 0xd30) == 0) {
        lParam = 0;
        Msg = 0x468;
        pHVar1 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,Msg,(WPARAM)pHVar1,lParam);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
  }
  if (param_3 == 0x200) {
    SfPrintF(local_108,&DAT_00619ba4,(undefined4)local_110,local_110._4_4_);
    pCVar3 = local_108;
    pHVar1 = GetDlgItem(param_1,0x471);
    SfSetWindowText(pHVar1,pCVar3);
  }
  return 1;
}


