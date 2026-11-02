/* Module: vegas30k.dll
   Function: FUN_0100dc90
   Address: 0100dc90
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_0100dc90(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)(param_2 + 8) - (float10)*(double *)(param_1 + 8);
  fVar2 = (float10)*(double *)(param_2 + 0x10) - (float10)*(double *)(param_1 + 0x10);
  fVar3 = (float10)*(double *)(param_2 + 0x18) - (float10)*(double *)(param_1 + 0x18);
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}


