/* Module: vegas30.exe
   Function: FUN_005a69b0
   Address: 005a69b0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_005a69b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  float10 fVar1;
  
  if ((code *)param_1[3] != (code *)0x0) {
    fVar1 = (float10)(*(code *)param_1[3])(*param_1,param_3,param_4,param_5);
    return fVar1;
  }
  return (float10)(double)CONCAT44(param_5,param_4);
}


