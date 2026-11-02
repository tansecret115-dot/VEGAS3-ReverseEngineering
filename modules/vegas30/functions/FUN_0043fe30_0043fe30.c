/* Module: vegas30.exe
   Function: FUN_0043fe30
   Address: 0043fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043fe30(undefined4 *param_1)

{
  cdr_Eject((HSFCD__ *)*param_1,1);
  FUN_0043fc30(*param_1);
  if ((param_1[0xe] & 2) != 0) {
    cdr_Eject((HSFCD__ *)*param_1,0);
    FUN_0043fd90(*param_1,1,0);
  }
  return 0;
}


