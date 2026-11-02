/* Module: oggplug.dll
   Function: FUN_00433920
   Address: 00433920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00433920(int param_1,int param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar3 = _DAT_0044d74c - param_4;
  iVar4 = param_2 - (int)param_3;
  iVar5 = param_1 - (int)param_3;
  iVar6 = 0x38;
  do {
    pfVar1 = (float *)(iVar4 + (int)param_3);
    fVar2 = *param_3;
    param_3 = param_3 + 1;
    iVar6 = iVar6 + -1;
    *(float *)(iVar5 + -4 + (int)param_3) = param_4 * fVar2 + fVar3 * *pfVar1;
  } while (iVar6 != 0);
  return;
}


