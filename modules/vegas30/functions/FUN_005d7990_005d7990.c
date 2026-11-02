/* Module: vegas30.exe
   Function: FUN_005d7990
   Address: 005d7990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d7990(HWND param_1,undefined4 param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  
  pHVar1 = GetDlgItem(param_1,0x4a9);
  LVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (LVar2 == -1) {
    FUN_005d69e0(param_1,pHVar1,param_2,4);
  }
  pHVar1 = GetDlgItem(param_1,0x438);
  LVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (LVar2 == -1) {
    FUN_005d6bc0(param_1,pHVar1,param_2,4);
  }
  pHVar1 = GetDlgItem(param_1,0x4a8);
  FUN_005d6dc0(param_1,pHVar1,param_2,0x200);
  pHVar1 = GetDlgItem(param_1,0x4aa);
  FUN_005d6dc0(param_1,pHVar1,param_2,0x200);
  return;
}


