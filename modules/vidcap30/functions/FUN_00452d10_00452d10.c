/* Module: vidcap30.exe
   Function: FUN_00452d10
   Address: 00452d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452d10(HWND param_1,undefined4 param_2)

{
  CHAR local_400 [1024];
  
  GetDlgItemTextA(param_1,0x9c49,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x4d414e49,local_400);
  GetDlgItemTextA(param_1,0x9c7b,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x54524149,local_400);
  GetDlgItemTextA(param_1,0x9c48,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x474e4549,local_400);
  GetDlgItemTextA(param_1,0x9c47,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x504f4349,local_400);
  GetDlgItemTextA(param_1,0x9c46,local_400,0x400);
  _SfSummary_SetItem_12(param_2,0x544d4349,local_400);
  return;
}


