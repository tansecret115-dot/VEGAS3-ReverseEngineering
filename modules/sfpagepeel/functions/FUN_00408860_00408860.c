/* Module: sfpagepeel.dll
   Function: FUN_00408860
   Address: 00408860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408860(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int *piVar5;
  
  iVar3 = (*(code *)**(undefined4 **)param_1[0x12])((undefined4 *)param_1[0x12],param_2,param_3);
  if ((iVar3 < 0) && (DAT_0046fe2c + (int)param_1 != param_1[0x12])) {
    ppuVar4 = &PTR_DAT_0046fe28;
    if (param_3 == (undefined4 *)0x0) {
      return -0x7fffbffd;
    }
    *param_3 = 0;
    puVar2 = DAT_0046fe30;
    if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
       (param_2[3] == 0x46000000)) {
      iVar3 = DAT_0046fe2c + (int)param_1;
      (**(code **)(*(int *)(DAT_0046fe2c + (int)param_1) + 4))(iVar3);
      *param_3 = iVar3;
      return 0;
    }
    while (puVar2 != (undefined *)0x0) {
      piVar5 = (int *)*ppuVar4;
      if ((piVar5 == (int *)0x0) ||
         (((*piVar5 == *param_2 && (piVar5[1] == param_2[1])) &&
          ((piVar5[2] == param_2[2] && (piVar5[3] == param_2[3])))))) {
        if ((code *)ppuVar4[2] == (code *)0x1) {
          piVar5 = (int *)(ppuVar4[1] + (int)param_1);
          (**(code **)(*piVar5 + 4))(piVar5);
          *param_3 = piVar5;
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


