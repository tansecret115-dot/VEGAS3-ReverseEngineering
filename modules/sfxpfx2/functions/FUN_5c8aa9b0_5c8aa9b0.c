/* Module: sfxpfx2.dll
   Function: FUN_5c8aa9b0
   Address: 5c8aa9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8aa9b0(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5c8aaa00(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


