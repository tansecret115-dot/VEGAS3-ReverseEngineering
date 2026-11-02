/* Module: Setup.exe
   Function: FUN_00402e60
   Address: 00402e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402e60(void)

{
  uchar local_104 [260];
  
  FUN_00402860();
  SfPrintF(local_104,"%s%s");
  _SfDoesFileExist_4((LPCSTR)local_104);
  return;
}


