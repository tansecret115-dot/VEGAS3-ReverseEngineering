/* Module: vidcap30.exe
   Function: FUN_00470e70
   Address: 00470e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00470e70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x120);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        thunk_FUN_00473e20();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}


