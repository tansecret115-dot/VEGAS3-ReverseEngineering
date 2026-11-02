/* Module: sfxpfx2.dll
   Function: FUN_5c8a1ec0
   Address: 5c8a1ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5c8a1ec0(int param_1)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x318) == 0) {
    pdVar2 = (double *)(param_1 + 0x390);
    iVar4 = 7;
    do {
      iVar3 = 7;
      pdVar1 = pdVar2;
      do {
        pdVar2 = pdVar1 + 1;
        iVar3 = iVar3 + -1;
        *pdVar1 = *pdVar1 * _DAT_5c8dd818;
        pdVar1 = pdVar2;
      } while (iVar3 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 7;
    pdVar2 = (double *)(param_1 + 0x358);
    do {
      iVar4 = iVar4 + -1;
      *pdVar2 = *pdVar2 * _DAT_5c8dd818;
      pdVar2 = pdVar2 + 1;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}


