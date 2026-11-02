/* Module: vegas30k.dll
   Function: FUN_011c50f0
   Address: 011c50f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c50f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x128);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if ((*(byte *)(param_1 + 0x228) & 0x10) == 0) {
          return;
        }
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x128) + 8) + iVar3 * 4);
        if ((*(byte *)(iVar2 + 0x154) & 2) != 0) {
          FUN_011d3320();
          ResetEvent(*(HANDLE *)(iVar2 + 0x16c));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return;
}


