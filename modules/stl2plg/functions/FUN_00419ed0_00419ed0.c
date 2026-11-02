/* Module: stl2plg.dll
   Function: FUN_00419ed0
   Address: 00419ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419ed0(int param_1,int param_2,double *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 1) != 0)) &&
     (param_3 != (double *)0x0)) {
    *param_3 = (double)*(float *)(param_2 + 0x28);
    return 1;
  }
  return 0;
}


