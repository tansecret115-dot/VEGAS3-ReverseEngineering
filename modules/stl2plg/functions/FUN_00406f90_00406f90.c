/* Module: stl2plg.dll
   Function: FUN_00406f90
   Address: 00406f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406f90(HMODULE param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00406f60();
  }
  else if (param_2 == 1) {
    FUN_00406f10(param_1);
    return 1;
  }
  return 1;
}


