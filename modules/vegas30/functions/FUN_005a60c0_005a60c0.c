/* Module: vegas30.exe
   Function: FUN_005a60c0
   Address: 005a60c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a60c0(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 4;
  pfVar1 = (float *)(param_1 + 4);
  do {
    iVar2 = iVar2 + -1;
    *pfVar1 = *(float *)(param_1 + 0x44) - (*pfVar1 - *(float *)(param_1 + 0x44));
    pfVar1 = pfVar1 + 4;
  } while (iVar2 != 0);
  return;
}


