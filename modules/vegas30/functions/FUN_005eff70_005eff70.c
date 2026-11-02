/* Module: vegas30.exe
   Function: FUN_005eff70
   Address: 005eff70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005eff70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x130);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_005f68c0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  return;
}


