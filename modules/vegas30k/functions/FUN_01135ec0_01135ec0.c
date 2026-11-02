/* Module: vegas30k.dll
   Function: FUN_01135ec0
   Address: 01135ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01135ec0(int param_1,int param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      piVar3 = *(int **)(param_1 + 0xdc);
      while (*piVar3 != param_2) {
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
        if (*(int *)(param_1 + 0xe0) <= iVar1) {
          return;
        }
      }
      (*(int **)(param_1 + 0xdc))[iVar1] = 0;
      iVar4 = *(int *)(param_1 + 0xe0) + -1;
      *(int *)(param_1 + 0xe0) = iVar4;
      if (iVar1 < iVar4) {
        do {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xdc) + -4 + iVar1 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar1 * 4);
        } while (iVar1 < *(int *)(param_1 + 0xe0));
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        if (*(LPCVOID *)(param_1 + 0xdc) != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
          GlobalFree(pvVar2);
        }
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
    }
  }
  return;
}


