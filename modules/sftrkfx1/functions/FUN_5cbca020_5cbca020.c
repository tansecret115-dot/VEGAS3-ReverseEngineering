/* Module: sftrkfx1.dll
   Function: FUN_5cbca020
   Address: 5cbca020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbca020(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5cbca070(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


