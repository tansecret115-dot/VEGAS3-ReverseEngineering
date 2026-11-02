/* Module: vidpcore.dll
   Function: FUN_5deaf340
   Address: 5deaf340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deaf340(uint *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_5deaf390(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


