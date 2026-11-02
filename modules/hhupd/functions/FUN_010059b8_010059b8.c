/* Module: hhupd.exe
   Function: FUN_010059b8
   Address: 010059b8
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_010059b8(short *param_1,short param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  for (; (char)*param_1 != '\0'; param_1 = (short *)CharNextA((LPCSTR)param_1)) {
    bVar1 = FUN_0100595b(*param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      psVar2 = param_1;
    }
  }
  return psVar2;
}


