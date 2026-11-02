/* Module: vegas30.exe
   Function: FUN_00405370
   Address: 00405370
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00405370(LPCSTR param_1)

{
  HINSTANCE pHVar1;
  CHAR local_104 [260];
  
  _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
  pHVar1 = ShellExecuteA(DAT_00647624,(LPCSTR)0x0,param_1,(LPCSTR)0x0,local_104,10);
  return (HINSTANCE)0x20 < pHVar1;
}


