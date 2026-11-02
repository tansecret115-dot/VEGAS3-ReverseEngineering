/* Module: hhupd.exe
   Function: FUN_0100567a
   Address: 0100567a
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100567a(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_01001b18();
  if ((iVar1 == 2) || (((param_1 & 0xff000000) == 0xaa000000 && ((param_1 & 1) != 0)))) {
    DAT_0100b704 = 0xbc2;
  }
  else if ((DAT_0100b6d5 & 2) != 0) {
    DAT_0100b704 = param_1;
  }
  return;
}


