/* Module: vegas30.exe
   Function: FUN_005b8040
   Address: 005b8040
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005b8040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = FUN_0057c190(iVar3,*(int *)(param_1 + 0xc) + iVar2 * 4,4);
        iVar3 = iVar3 + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = FUN_0057c190(iVar3,*(int *)(param_1 + 0x14) + iVar2 * 4,4);
        iVar3 = iVar3 + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        iVar1 = FUN_0057c190(iVar3,*(int *)(param_1 + 0x1c) + iVar2 * 4,4);
        iVar3 = iVar3 + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x18));
    }
  }
  return iVar3;
}


