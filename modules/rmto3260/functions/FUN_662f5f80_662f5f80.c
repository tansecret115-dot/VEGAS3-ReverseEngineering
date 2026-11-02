/* Module: rmto3260.dll
   Function: FUN_662f5f80
   Address: 662f5f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f5f80(int param_1,int *param_2,char *param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  
  piVar3 = param_2;
  if (((param_2 == (int *)0x0) || (param_3 == (char *)0x0)) ||
     (piVar2 = *(int **)(param_1 + 4), piVar2 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  param_2 = (int *)0x0;
  iVar4 = (**(code **)(*piVar2 + 0x30))(piVar2,piVar3,&param_2);
  if (-1 < iVar4) {
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
    if (param_4 < uVar5) {
      return -0x7ffbfff3;
    }
    pcVar6 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar6;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar6 = pcVar8 + -uVar5;
    pcVar8 = param_3;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return iVar4;
}


