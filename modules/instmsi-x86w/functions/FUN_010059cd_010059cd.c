/* Module: InstMsi-x86w.exe
   Function: FUN_010059cd
   Address: 010059cd
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_010059cd(short *param_1,short param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  while( true ) {
    if ((char)*param_1 == '\0') {
      return (short *)0x0;
    }
    bVar1 = FUN_010059a0(*param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) break;
    param_1 = (short *)CharNextA((LPCSTR)param_1);
  }
  return param_1;
}


