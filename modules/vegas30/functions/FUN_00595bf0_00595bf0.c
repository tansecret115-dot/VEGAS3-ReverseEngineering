/* Module: vegas30.exe
   Function: FUN_00595bf0
   Address: 00595bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595bf0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    piVar3 = (int *)FUN_005b87b0(param_2);
    iVar4 = 0;
    iVar1 = *piVar3;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(piVar3[2] + iVar4 * 4);
        if (*(int *)(iVar2 + 4) == 2) {
          FUN_00595760(param_1,iVar2);
          _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0x5d0),0,0xffffffff,0);
          FUN_00595790(param_1,iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00595a50(param_1);
  }
  return;
}


