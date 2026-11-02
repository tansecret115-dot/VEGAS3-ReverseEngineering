/* Module: mp3plug.dll
   Function: FUN_5f6e9020
   Address: 5f6e9020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e9020(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  
  if (0 < param_1) {
    piVar1 = param_2 + param_1;
    fVar2 = _DAT_5f75d7ac;
    do {
      if (fVar2 < *(float *)(*param_2 + 0x138)) {
        fVar2 = *(float *)(*param_2 + 0x138);
      }
      param_2 = param_2 + 1;
    } while ((int)param_2 < (int)piVar1);
  }
  return;
}


