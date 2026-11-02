/* Module: mp3plug.dll
   Function: FUN_5f6f4b10
   Address: 5f6f4b10
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_5f6f4b10(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2;
  if (in_ST0 <= fVar1) {
    in_ST0 = fVar1;
  }
  fVar2 = (float10)param_3;
  if (fVar2 <= in_ST0) {
    in_ST0 = fVar2;
  }
  return (((float10)param_5 - (float10)param_4) / (fVar2 - fVar1)) * (in_ST0 - fVar1) +
         (float10)param_4;
}


