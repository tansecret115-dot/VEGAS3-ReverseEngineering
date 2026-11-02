/* Module: mpgaout.dll
   Function: FUN_10006130
   Address: 10006130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006130(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  dVar2 = _DAT_10006128;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    iVar4 = 0xb;
    iVar3 = iVar3 << 3;
    do {
      *(double *)(param_2 + iVar3) =
           (*(double *)(param_1 + iVar3) + *(double *)(param_1 + 0x2400 + iVar3)) * dVar2;
      iVar3 = iVar3 + 0x100;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar3 = iVar1;
  } while (iVar1 < 0x20);
  return;
}


