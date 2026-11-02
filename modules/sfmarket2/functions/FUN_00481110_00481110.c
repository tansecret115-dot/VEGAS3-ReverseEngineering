/* Module: sfmarket2.dll
   Function: FUN_00481110
   Address: 00481110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481110(int *param_1,byte *param_2,uint param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    FUN_00454bc0((int)param_1,param_2,param_3);
    FUN_00483740(param_1,param_2,param_3);
  }
  return;
}


