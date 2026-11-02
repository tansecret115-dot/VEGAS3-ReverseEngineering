/* Module: mp3plug.dll
   Function: FUN_5f6d3df0
   Address: 5f6d3df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d3df0(float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  if (param_2 < 0x400) {
    pfVar1 = param_1 + param_2;
    iVar2 = ((int)(param_1 + 0x400) - (int)pfVar1 & 0xfffffff8U) + (int)pfVar1;
    for (; (int)pfVar1 < iVar2; pfVar1 = pfVar1 + 2) {
      *pfVar1 = 0.0;
      pfVar1[1] = 0.0;
    }
    for (; (int)pfVar1 < (int)(param_1 + 0x400); pfVar1 = pfVar1 + 1) {
      *pfVar1 = 0.0;
    }
  }
  FUN_5f6e5d10(param_1);
  return;
}


