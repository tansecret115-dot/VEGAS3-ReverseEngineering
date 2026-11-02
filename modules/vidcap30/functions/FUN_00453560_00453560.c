/* Module: vidcap30.exe
   Function: FUN_00453560
   Address: 00453560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453560(int *param_1)

{
  if (((((byte)DAT_005ba4b4 & 1) != 0) && (*param_1 != 0)) && (param_1[0x1b] != 0)) {
    FUN_00434760(param_1[0x1b]);
  }
  return;
}


