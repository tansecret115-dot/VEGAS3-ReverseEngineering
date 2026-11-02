/* Module: vegas30.exe
   Function: FUN_005f10e0
   Address: 005f10e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f10e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x130);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_005f6fd0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}


