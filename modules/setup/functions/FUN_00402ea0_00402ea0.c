/* Module: Setup.exe
   Function: FUN_00402ea0
   Address: 00402ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00402ea0(void)

{
  int iVar1;
  
  iVar1 = lstrcmpiA((LPCSTR)&DAT_00448cc4,"enu");
  return (bool)('\x01' - (iVar1 != 0));
}


