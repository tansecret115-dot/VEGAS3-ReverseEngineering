/* Module: mp3plug.dll
   Function: FUN_5f69bad0
   Address: 5f69bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f69bad0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 10;
  iVar1 = **(int **)(param_1 + 0x18);
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + iVar4 * 4) + 8))();
      iVar3 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3 + 0x600U & 0xfffffc00;
}


