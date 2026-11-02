/* Module: mp3plug.dll
   Function: FUN_5f696140
   Address: 5f696140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f696140(void *this,HWND param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM wParam;
  undefined4 *puVar3;
  LRESULT LVar4;
  UINT UVar5;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  pHVar2 = GetDlgItem(param_1,0x408);
  wParam = SendMessageA(pHVar2,0x147,0,0);
  if ((wParam != 0xffffffff) &&
     (puVar3 = (undefined4 *)SendMessageA(pHVar2,0x150,wParam,0), puVar3 != (undefined4 *)0x0)) {
    *puVar1 = *puVar3;
    puVar1[0xe] = puVar3[1];
  }
  pHVar2 = GetDlgItem(param_1,0x428);
  LVar4 = SendMessageA(pHVar2,0x400,0,0);
  if (LVar4 != -1) {
    if (LVar4 == 1) {
      puVar1[1] = 5;
    }
    else if (LVar4 == 2) {
      puVar1[1] = 10;
    }
    else {
      puVar1[1] = 0;
    }
  }
  UVar5 = IsDlgButtonChecked(param_1,0x444);
  if (UVar5 == 0) {
    puVar1[0xd] = 0;
  }
  else {
    pHVar2 = GetDlgItem(param_1,0x429);
    LVar4 = SendMessageA(pHVar2,0x400,0,0);
    if (LVar4 != -1) {
      puVar1[0xd] = LVar4;
    }
  }
  UVar5 = IsDlgButtonChecked(param_1,0x412);
  puVar1[9] = UVar5;
  UVar5 = IsDlgButtonChecked(param_1,0x411);
  puVar1[10] = UVar5;
  UVar5 = IsDlgButtonChecked(param_1,0x413);
  puVar1[0xb] = UVar5;
  UVar5 = IsDlgButtonChecked(param_1,0x426);
  if (UVar5 == 0) {
    puVar1[0x10] = puVar1[0x10] & 0xfffffffe;
    return 0;
  }
  puVar1[0x10] = puVar1[0x10] | 1;
  return 0;
}


