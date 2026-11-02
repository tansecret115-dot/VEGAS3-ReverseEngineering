/* Module: vidcap30.exe
   Function: FUN_00582b00
   Address: 00582b00
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_00582b00(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      while( true ) {
        sVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = sVar1;
        param_1 = param_1 + 1;
        if (sVar1 == 0) break;
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          *param_1 = 0;
          return psVar2;
        }
      }
      if (param_3 != 0) {
        return psVar2;
      }
    }
    *param_1 = 0;
  }
  return psVar2;
}


