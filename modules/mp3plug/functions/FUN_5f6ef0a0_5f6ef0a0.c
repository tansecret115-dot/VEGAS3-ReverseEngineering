/* Module: mp3plug.dll
   Function: FUN_5f6ef0a0
   Address: 5f6ef0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6ef0a0(int param_1,int param_2)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = FUN_5f7093c0(*(int *)(in_EAX + 4),*(int *)(in_EAX + 0xc),param_2,param_1);
  *(float *)(in_EAX + 0x10) = (float)fVar1;
  fVar1 = FUN_5f7093c0(*(int *)(in_EAX + 8),*(int *)(in_EAX + 0xc),param_2,param_1);
  *(float *)(in_EAX + 0x14) = (float)fVar1;
  return;
}


