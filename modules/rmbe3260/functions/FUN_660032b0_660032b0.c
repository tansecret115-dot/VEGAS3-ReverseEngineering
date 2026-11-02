/* Module: rmbe3260.dll
   Function: FUN_660032b0
   Address: 660032b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_660032b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_660624ec;
  iVar1 = *(int *)(*(int *)(param_1 + 0x156) + 0xc0);
  if (0 < iVar1) {
    fVar2 = (float10)iVar1 * (float10)_DAT_6606c094;
  }
  return fVar2;
}


