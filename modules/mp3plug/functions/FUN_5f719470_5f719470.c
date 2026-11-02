/* Module: mp3plug.dll
   Function: FUN_5f719470
   Address: 5f719470
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_5f719470(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_5f719270((uint *)(param_1 + 0x62f4));
  fVar2 = (float10)param_2;
  if (iVar1 == 0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}


