/* Module: rnco3260.dll
   Function: FUN_6375db10
   Address: 6375db10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375db10(int param_1,uint param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            uint param_7,int param_8)

{
  code *pcVar1;
  
  if (param_8 < 0) {
    param_5 = param_5 + (param_7 - 1) * param_8 * -4;
  }
  pcVar1 = FUN_637264b0;
  if (DAT_637944e0 == 0) {
    pcVar1 = FUN_63719a00;
  }
  FUN_6375ca20(param_5,0,0,param_6,param_7,param_8 << 2,4,param_1,param_2,param_3,0,0,param_6,
               param_7,param_4,pcVar1);
  return;
}


