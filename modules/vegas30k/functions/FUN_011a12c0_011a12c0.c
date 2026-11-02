/* Module: vegas30k.dll
   Function: FUN_011a12c0
   Address: 011a12c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a12c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 1;
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x438);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_011b2400();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return uVar2;
}


