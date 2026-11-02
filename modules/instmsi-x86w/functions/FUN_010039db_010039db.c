/* Module: InstMsi-x86w.exe
   Function: FUN_010039db
   Address: 010039db
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010039db(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_01001b3e();
  if ((iVar1 == 2) || (((param_1 & 0xff000000) == 0xaa000000 && ((param_1 & 1) != 0)))) {
    DAT_0100b704 = 0xbc2;
  }
  else if ((DAT_0100b6d5 & 2) != 0) {
    DAT_0100b704 = param_1;
  }
  return;
}


