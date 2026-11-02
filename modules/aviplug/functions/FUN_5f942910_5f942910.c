/* Module: aviplug.dll
   Function: FUN_5f942910
   Address: 5f942910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f942910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar1 = param_1;
  iVar6 = 0;
  iVar5 = *(int *)(param_1 + 0xf4);
  if (0 < iVar5) {
    piVar2 = (int *)(param_1 + 0x10c);
    iVar3 = iVar5;
    do {
      if (*(int *)(param_1 + 0x158 + *piVar2 * 4) != 0) {
        iVar6 = iVar6 + 1;
      }
      piVar2 = piVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((iVar6 != 0) && (iVar6 == iVar5)) {
      uVar7 = FUN_5f94d210(param_3,param_2,*(int *)(param_1 + 0xec),param_2,param_3,1,&param_1);
      if (-1 < (int)uVar7) {
        iVar5 = 0;
        if (0 < *(int *)(iVar1 + 0xf4)) {
          piVar2 = (int *)(iVar1 + 0xfc);
          piVar4 = (int *)(iVar1 + 0x168);
          do {
            piVar2[2] = piVar2[2] + param_1;
            iVar5 = iVar5 + 1;
            *piVar2 = *piVar2 + *piVar4 * param_1;
            piVar2 = piVar2 + 6;
            piVar4 = piVar4 + 1;
          } while (iVar5 < *(int *)(iVar1 + 0xf4));
        }
        FUN_5f94da00(*(int *)(iVar1 + 0xec),1);
      }
    }
  }
  return;
}


