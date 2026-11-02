/* Module: vidcap30.exe
   Function: FUN_00441970
   Address: 00441970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441970(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_005ba4c0 + 0x6c);
  if (DAT_005bba94 == 0) {
    iVar2 = **(int **)(iVar1 + 0x1c68);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = lstrcmpiA(param_1,*(LPCSTR *)(*(int *)(*(int *)(iVar1 + 0x1c68) + 8) + iVar2 * 4));
      if (iVar3 == 0) {
        _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x1c68),iVar2,1,0);
      }
    }
    DAT_005ba50c = DAT_005ba50c | 0x200;
  }
  return;
}


