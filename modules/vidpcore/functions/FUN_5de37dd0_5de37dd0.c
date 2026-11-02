/* Module: vidpcore.dll
   Function: FUN_5de37dd0
   Address: 5de37dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de37dd0(int param_1,int *param_2,int *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int *piVar5;
  
  iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x14))
                    (*(undefined4 **)(param_1 + 0x14),param_2,param_3);
  if ((iVar3 < 0) && (DAT_5df1989c + param_1 != *(int *)(param_1 + 0x14))) {
    ppuVar4 = &PTR_DAT_5df19898;
    if (param_3 == (int *)0x0) {
      return -0x7fffbffd;
    }
    *param_3 = 0;
    puVar2 = DAT_5df198a0;
    if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
       (param_2[3] == 0x46000000)) {
      iVar3 = DAT_5df1989c + param_1;
      (**(code **)(*(int *)(DAT_5df1989c + param_1) + 4))(iVar3);
      *param_3 = iVar3;
      return 0;
    }
    while (puVar2 != (undefined *)0x0) {
      piVar5 = (int *)*ppuVar4;
      if ((piVar5 == (int *)0x0) ||
         (((*piVar5 == *param_2 && (piVar5[1] == param_2[1])) &&
          ((piVar5[2] == param_2[2] && (piVar5[3] == param_2[3])))))) {
        if ((code *)ppuVar4[2] == (code *)0x1) {
          piVar5 = (int *)(ppuVar4[1] + param_1);
          (**(code **)(*piVar5 + 4))(piVar5);
          *param_3 = (int)piVar5;
          return 0;
        }
        iVar3 = (*(code *)ppuVar4[2])(param_1,param_2,param_3,ppuVar4[1]);
        if (iVar3 == 0) {
          return 0;
        }
        if ((piVar5 != (int *)0x0) && (iVar3 < 0)) {
          return iVar3;
        }
      }
      ppuVar1 = ppuVar4 + 5;
      ppuVar4 = ppuVar4 + 3;
      puVar2 = *ppuVar1;
    }
    iVar3 = -0x7fffbffe;
  }
  return iVar3;
}


