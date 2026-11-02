/* Module: vegas30.exe
   Function: FUN_005d8ad0
   Address: 005d8ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d8ad0(undefined4 param_1,undefined4 param_2,HWND param_3,int param_4)

{
  HWND pHVar1;
  int iVar2;
  float10 fVar3;
  UINT Msg;
  CHAR *lpString;
  int iVar4;
  undefined1 *puVar5;
  LPARAM lParam;
  undefined8 local_218;
  CHAR local_208 [256];
  undefined1 local_108 [260];
  
  lpString = local_208;
  iVar4 = 0x100;
  pHVar1 = GetDlgItem(param_3,0x471);
  iVar4 = GetWindowTextA(pHVar1,lpString,iVar4);
  if (iVar4 != 0) {
    fVar3 = (float10)_SfTextToDoubleToken_8(local_208,0);
    local_218 = (double)fVar3;
    if ((float10)_DAT_006106d0 <= fVar3) {
      if (_DAT_00619d38 < local_218) {
        local_218 = 65536.0;
      }
      goto LAB_005d8b55;
    }
  }
  local_218 = 1.0;
LAB_005d8b55:
  iVar4 = ftol();
  iVar2 = _Spinner_DefScrollProc_24(0x115,param_1,param_2,1,2,iVar4);
  if ((double)iVar2 != local_218) {
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0xf0 < iVar2) {
      iVar2 = 0xf0;
    }
    local_218 = (double)(iVar2 - iVar4) + local_218;
    if (_DAT_006106d0 <= local_218) {
      if (_DAT_0062a490 < local_218) {
        local_218 = 240.0;
      }
    }
    else {
      local_218 = 1.0;
    }
    SfPrintF(local_108,&DAT_00619ba4,(undefined4)local_218,local_218._4_4_);
    puVar5 = local_108;
    pHVar1 = GetDlgItem(param_3,0x471);
    SfSetWindowText(pHVar1,puVar5);
    if (*(int *)(param_4 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      pHVar1 = GetParent(param_3);
      SendMessageA(pHVar1,Msg,(WPARAM)param_3,lParam);
    }
    *(undefined4 *)(param_4 + 0xd4c) = 1;
    return 1;
  }
  return 1;
}


