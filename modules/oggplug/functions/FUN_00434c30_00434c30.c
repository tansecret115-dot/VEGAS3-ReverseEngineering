/* Module: oggplug.dll
   Function: FUN_00434c30
   Address: 00434c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00434c30(float param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x1c);
  fVar2 = ((float10)(*(int *)(iVar1 + *(int *)(param_2 + 0x28) * 4) / 2) /
          (float10)*(int *)(*(int *)(param_2 + 4) + 8)) *
          (float10)*(float *)(*(int *)(iVar1 + 0xe24) + 0x30) + (float10)param_1;
  if (fVar2 < (float10)_DAT_0044d780) {
    fVar2 = (float10)_DAT_0044d780;
  }
  return fVar2;
}


