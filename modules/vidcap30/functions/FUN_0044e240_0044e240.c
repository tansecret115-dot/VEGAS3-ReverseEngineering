/* Module: vidcap30.exe
   Function: FUN_0044e240
   Address: 0044e240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e240(HWND param_1)

{
  LPARAM LVar1;
  
  LVar1 = _SfGetString_8(DAT_005ba2a0,0xc502);
  SendMessageA(param_1,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_005ba2a0,0xc503);
  SendMessageA(param_1,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_005ba2a0,0xc504);
  SendMessageA(param_1,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_005ba2a0,0xc505);
  SendMessageA(param_1,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_005ba2a0,0xc506);
  SendMessageA(param_1,0x143,0,LVar1);
  return;
}


