/* Module: vegas30.exe
   Function: FUN_005d44c0
   Address: 005d44c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d44c0(HWND param_1,undefined4 param_2)

{
  CHAR local_400 [1024];
  
  GetDlgItemTextA(param_1,0x44c,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x4d414e49,local_400);
  GetDlgItemTextA(param_1,0x44d,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x54524149,local_400);
  GetDlgItemTextA(param_1,0x44e,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x474e4549,local_400);
  GetDlgItemTextA(param_1,0x44f,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x504f4349,local_400);
  GetDlgItemTextA(param_1,0x450,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x544d4349,local_400);
  return;
}


