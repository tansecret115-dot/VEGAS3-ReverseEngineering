/* Module: hhupd.exe
   Function: FUN_01005988
   Address: 01005988
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_01005988(short *param_1,short param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  while( true ) {
    if ((char)*param_1 == '\0') {
      return (short *)0x0;
    }
    bVar1 = FUN_0100595b(*param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) break;
    param_1 = (short *)CharNextA((LPCSTR)param_1);
  }
  return param_1;
}


