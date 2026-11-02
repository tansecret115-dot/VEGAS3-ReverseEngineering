/* Module: sfcdi.dll
   Function: FUN_5bf3dfc0
   Address: 5bf3dfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3dfc0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x21c);
    iVar4 = *(int *)(param_2 + 0x220);
    FUN_5bf3d5b0(param_1,param_2);
    FUN_5bf3dee0(param_1,param_2);
    if (*(int *)(param_2 + 0x21c) != 0) {
      FUN_5bf29dd0(*(int **)(iVar1 + 0x214),*(int *)(param_2 + 0x220),1,0);
      while( true ) {
        iVar3 = iVar4;
        piVar2 = *(int **)(iVar1 + 0x214);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if (iVar4 <= iVar3) break;
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
          iVar4 = iVar3 + 1;
          iRam00000220 = iVar3;
        }
        else {
          *(int *)(*(int *)(piVar2[2] + iVar3 * 4) + 0x220) = iVar3;
          iVar4 = iVar3 + 1;
        }
      }
    }
  }
  return;
}


