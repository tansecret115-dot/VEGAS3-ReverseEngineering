/* Module: vegas30k.dll
   Function: FUN_011a82c0
   Address: 011a82c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a82c0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0x7ec) & 1) != 0) && ((*(uint *)(param_1 + 0x7ec) & 2) != 0)) {
    iVar1 = **(int **)(param_1 + 0x7f4);
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar6 * 4);
        uVar3 = piVar2[3];
        if ((((uVar3 & 1) != 0) && ((uVar3 & 2) != 0)) && ((uVar3 & 4) != 0)) {
          iVar4 = (**(code **)(*piVar2 + 0x98))(piVar2);
          if (iVar4 < 0) {
            iVar5 = iVar4;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffffd;
    return iVar5;
  }
  return -0x7fff0001;
}


