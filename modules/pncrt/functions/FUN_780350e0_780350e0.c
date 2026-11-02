/* Module: pncrt.dll
   Function: FUN_780350e0
   Address: 780350e0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_780350e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_7803d0e8 == 0) {
    fVar2 = FUN_780359d0(1,param_1,param_2,param_3,0,0,param_2,param_3);
    return fVar2;
  }
  piVar1 = _errno();
  *piVar1 = 0x21;
  FUN_78035d10();
  return (float10)(double)CONCAT44(param_3,param_2);
}


