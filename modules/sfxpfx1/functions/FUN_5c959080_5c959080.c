/* Module: sfxpfx1.dll
   Function: FUN_5c959080
   Address: 5c959080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c959080(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5c9590d0(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


