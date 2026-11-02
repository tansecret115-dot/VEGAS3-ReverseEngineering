/* Module: vegas30.exe
   Function: FUN_005a60f0
   Address: 005a60f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a60f0(float *param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 4;
  pfVar1 = param_1;
  do {
    iVar2 = iVar2 + -1;
    *pfVar1 = param_1[0x10] - (*pfVar1 - param_1[0x10]);
    pfVar1 = pfVar1 + 4;
  } while (iVar2 != 0);
  return;
}


