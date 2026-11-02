/* Module: vegas30.exe
   Function: FUN_0049d860
   Address: 0049d860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049d860(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = **(int **)(param_1 + 0xcd0);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(param_1 + 0xcd0);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar2[2] + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
        *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xffffffef;
      } while (iVar3 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xcd0),0,iVar1,0);
  }
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


