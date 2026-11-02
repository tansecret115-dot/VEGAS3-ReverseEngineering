/* Module: vegas30.exe
   Function: FUN_004f0780
   Address: 004f0780
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004f0780(void)

{
  EnumSystemLocalesA(FUN_004f0750,1);
  return DAT_0064dd20 != 0;
}


