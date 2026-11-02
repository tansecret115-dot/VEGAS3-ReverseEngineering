/* Module: mpgaout.dll
   Function: FUN_1000a780
   Address: 1000a780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000a780(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 1;
  while (iVar4 = iVar1, iVar4 < *(int *)(param_1 + 0x44da4)) {
    piVar2 = (int *)(param_3 + iVar4 * 0x20);
    iVar3 = piVar2[-8];
    iVar1 = iVar4 + 1;
    if (iVar3 <= *piVar2) {
      piVar2 = (int *)(param_2 + 0x10 + iVar3 * 0x18);
      do {
        *piVar2 = iVar4;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar3 <= *(int *)(param_3 + iVar4 * 0x20));
    }
  }
  return;
}


