/* Module: stl2plg.dll
   Function: FUN_00405f80
   Address: 00405f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405f80(undefined4 *param_1)

{
  if ((FILE *)*param_1 != (FILE *)0x0) {
    fclose((FILE *)*param_1);
    *param_1 = 0;
  }
  FUN_00405fb0((int)param_1);
  return 0;
}


