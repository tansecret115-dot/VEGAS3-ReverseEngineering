/* Module: mp3plug.dll
   Function: FUN_5f684790
   Address: 5f684790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f684790(HWND param_1,int param_2)

{
  HWND pHVar1;
  WPARAM wParam;
  undefined4 *puVar2;
  LRESULT LVar3;
  UINT UVar4;
  
  pHVar1 = GetDlgItem(param_1,0x408);
  wParam = SendMessageA(pHVar1,0x147,0,0);
  if ((wParam != 0xffffffff) &&
     (puVar2 = (undefined4 *)SendMessageA(pHVar1,0x150,wParam,0), puVar2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_2 + 0x10) = *puVar2;
    *(undefined4 *)(param_2 + 0x50) = puVar2[1];
  }
  pHVar1 = GetDlgItem(param_1,0x428);
  LVar3 = SendMessageA(pHVar1,0x400,0,0);
  if (LVar3 != -1) {
    if (LVar3 == 1) {
      *(undefined4 *)(param_2 + 0x14) = 5;
    }
    else if (LVar3 == 2) {
      *(undefined4 *)(param_2 + 0x14) = 10;
    }
    else {
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  UVar4 = IsDlgButtonChecked(param_1,0x444);
  if (UVar4 == 0) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  else {
    pHVar1 = GetDlgItem(param_1,0x429);
    LVar3 = SendMessageA(pHVar1,0x400,0,0);
    if (LVar3 != -1) {
      *(LRESULT *)(param_2 + 0x4c) = LVar3;
    }
  }
  UVar4 = IsDlgButtonChecked(param_1,0x412);
  *(UINT *)(param_2 + 0x34) = UVar4;
  UVar4 = IsDlgButtonChecked(param_1,0x411);
  *(UINT *)(param_2 + 0x38) = UVar4;
  UVar4 = IsDlgButtonChecked(param_1,0x413);
  *(UINT *)(param_2 + 0x3c) = UVar4;
  UVar4 = IsDlgButtonChecked(param_1,0x426);
  if (UVar4 == 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    return;
  }
  *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 1;
  return;
}


