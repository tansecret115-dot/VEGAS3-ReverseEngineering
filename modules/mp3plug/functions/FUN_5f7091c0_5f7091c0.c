/* Module: mp3plug.dll
   Function: FUN_5f7091c0
   Address: 5f7091c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f7091c0(int param_1,float param_2,float param_3,int *param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2 / (_DAT_5f760978 + param_3);
  piVar1 = param_4 + 3;
  do {
    fVar2 = *(float *)(*(int *)(param_5 + 0xc) + param_1 * 4);
    if (fVar3 < *(float *)(*param_4 + param_1 * 4) / (_DAT_5f760980 + fVar2)) {
      *(float *)(*param_4 + param_1 * 4) = fVar2 * fVar3;
    }
    param_4 = param_4 + 1;
    param_5 = param_5 + 0x18;
  } while ((int)param_4 < (int)piVar1);
  return;
}


