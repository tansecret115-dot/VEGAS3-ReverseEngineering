/* Module: vegas30.exe
   Function: FUN_005746d0
   Address: 005746d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005746d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 1;
  }
  _SfList_Sort_12(param_1,0,&LAB_00574740);
  uVar3 = DAT_0064b138;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_1[2] + iVar4 * 4);
      if (*piVar2 == 2) {
        iVar5 = piVar2[1];
        uVar6 = 5;
LAB_00574724:
        FUN_005d35e0(uVar3,iVar5,uVar6,1);
      }
      else if (*piVar2 == 4) {
        iVar5 = piVar2[1];
        uVar6 = 4;
        goto LAB_00574724;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_005749b0();
  return 0;
}


