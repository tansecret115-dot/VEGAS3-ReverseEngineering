/* Module: vidcap30.exe
   Function: FUN_0050d350
   Address: 0050d350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050d350(int param_1)

{
  int iVar1;
  int nNumerator;
  
  nNumerator = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x40)) +
               (((int)(char)*(uint *)(param_1 + 4) & 8U) >> 3) * -2;
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    nNumerator = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x44);
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    log2((float10)_DAT_00587ad0 / (float10)*(int *)(param_1 + 0x80));
    iVar1 = ftol();
    iVar1 = nNumerator - iVar1;
  }
  iVar1 = MulDiv(iVar1,nNumerator,nNumerator - iVar1);
  *(int *)(param_1 + 0x78) = nNumerator + iVar1;
  return nNumerator + iVar1;
}


