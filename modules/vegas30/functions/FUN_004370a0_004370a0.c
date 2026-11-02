/* Module: vegas30.exe
   Function: FUN_004370a0
   Address: 004370a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004370a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != -1) {
      iVar3 = iVar2 << 5;
      for (uVar1 = param_1[iVar2 + 1]; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        iVar3 = iVar3 + 1;
      }
      return iVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return -1;
}


