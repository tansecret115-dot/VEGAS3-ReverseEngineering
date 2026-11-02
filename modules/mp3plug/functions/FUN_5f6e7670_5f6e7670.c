/* Module: mp3plug.dll
   Function: FUN_5f6e7670
   Address: 5f6e7670
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __fastcall FUN_5f6e7670(undefined4 param_1,int param_2)

{
  int in_EAX;
  float10 in_ST0;
  float10 fVar1;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float10 fVar2;
  
  fVar2 = (float10)in_EAX / (float10)param_2;
  if ((float10)in_EAX / (float10)param_2 < in_ST0) {
    fVar2 = in_ST0;
  }
  fVar1 = (float10)in_stack_00000010;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  return (float10)in_stack_00000018 -
         ((float10)in_stack_00000018 - (float10)in_stack_00000014) *
         ((fVar2 - in_ST0) / (fVar1 - in_ST0));
}


