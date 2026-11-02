/* Module: vegas30.exe
   Function: FUN_004ee2f0
   Address: 004ee2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ee2f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar5 = 0;
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1[2] + iVar5 * 4);
        iVar3 = *(int *)(iVar2 + 0x208);
        if ((1 < iVar3) && ((iVar3 < 4 || (iVar3 == 5)))) {
          iVar4 = FUN_00405170(iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
        }
      } while ((iVar4 != 0) && (iVar5 = iVar5 + 1, iVar5 < iVar1));
    }
  }
  return;
}


