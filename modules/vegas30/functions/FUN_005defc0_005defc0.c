/* Module: vegas30.exe
   Function: FUN_005defc0
   Address: 005defc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005defc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = param_2;
  piVar1 = *(int **)(param_1 + 0x24);
  iVar2 = *piVar1;
  if (0 < iVar2) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        param_1 = *(undefined4 *)(piVar1[2] + iVar4 * 4);
        _SfList_InsertList_16(uVar3,0xffffffff,&param_1,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    return 0;
  }
  return 0;
}


