/* Module: sftrans1.dll
   Function: FUN_00466ba0
   Address: 00466ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00466ba0(int param_1,double *param_2,double *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)*(double *)(param_1 + 0x70));
  *param_2 = (double)fVar1;
  fVar1 = (float10)fsin((float10)*(double *)(param_1 + 0x70));
  *param_3 = (double)fVar1;
  return;
}


