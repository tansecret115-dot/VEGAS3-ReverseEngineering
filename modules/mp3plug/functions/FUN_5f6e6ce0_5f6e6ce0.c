/* Module: mp3plug.dll
   Function: FUN_5f6e6ce0
   Address: 5f6e6ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e6ce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_5f6e65a0(2,*(int *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0x28);
  iVar3 = 1;
  if (*(int *)(iVar4 + 4) != -1) {
    iVar5 = *(int *)(iVar4 + 4);
    iVar2 = 1;
    while (iVar3 = iVar2, iVar5 < *(int *)(param_1 + 0x1c)) {
      iVar5 = *(int *)(iVar4 + 4 + iVar2 * 4);
      iVar3 = iVar2 + 1;
      if ((iVar5 == -1) || (*(int *)(param_1 + 0x1c) <= iVar5)) break;
      iVar3 = iVar2 + 2;
      iVar5 = *(int *)(iVar4 + iVar3 * 4);
      iVar2 = iVar3;
      if (iVar5 == -1) break;
    }
  }
  if ((iVar3 != 0xf) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
    iVar3 = 0xf;
  }
  iVar4 = FUN_5f6e65a0(2,*(int *)(iVar4 + iVar3 * 4));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x48) = iVar1 - iVar4;
  return;
}


