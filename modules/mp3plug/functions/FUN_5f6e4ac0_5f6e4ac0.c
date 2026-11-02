/* Module: mp3plug.dll
   Function: FUN_5f6e4ac0
   Address: 5f6e4ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e4ac0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    if (param_2 <= *(int *)(param_1 + 4 + iVar1 * 4)) {
      return;
    }
    if (0xd < iVar1 + 1) {
      return;
    }
    if (param_2 <= *(int *)(param_1 + 4 + (iVar1 + 1) * 4)) {
      return;
    }
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0xe);
  return;
}


