/* Module: Setup.exe
   Function: FUN_00403470
   Address: 00403470
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00403470(HWND param_1)

{
  int iVar1;
  
  iVar1 = _SfDialogBoxParam_20(DAT_00446d7c,(LPCSTR)0x3eb,param_1,(DLGPROC)&LAB_004034a0,0);
  return (bool)('\x01' - (iVar1 != 1));
}


