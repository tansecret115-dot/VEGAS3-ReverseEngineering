/* Module: sftrans1.dll
   Function: FUN_00434870
   Address: 00434870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434870(int *param_1,int *param_2,int *param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)
     ) {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1;
      (**(code **)(*param_1 + 4))(param_1);
      return 0;
    }
    return -0x7fffbffd;
  }
  param_1 = param_1 + 4;
  ppuVar5 = &PTR_DAT_00558a38;
  if (param_3 == (int *)0x0) {
    return -0x7fffbffd;
  }
  *param_3 = 0;
  puVar3 = DAT_00558a40;
  if (((*param_2 == 0) && (param_2[1] == 0)) && ((param_2[2] == 0xc0 && (param_2[3] == 0x46000000)))
     ) {
    iVar4 = DAT_00558a3c + (int)param_1;
    (**(code **)(*(int *)(DAT_00558a3c + (int)param_1) + 4))(iVar4);
    *param_3 = iVar4;
    return 0;
  }
  do {
    if (puVar3 == (undefined *)0x0) {
      return -0x7fffbffe;
    }
    piVar2 = (int *)*ppuVar5;
    if ((piVar2 == (int *)0x0) ||
       (((*piVar2 == *param_2 && (piVar2[1] == param_2[1])) &&
        ((piVar2[2] == param_2[2] && (piVar2[3] == param_2[3])))))) {
      if ((code *)ppuVar5[2] == (code *)0x1) {
        param_1 = (int *)(ppuVar5[1] + (int)param_1);
        (**(code **)(*param_1 + 4))(param_1);
        *param_3 = (int)param_1;
        return 0;
      }
      iVar4 = (*(code *)ppuVar5[2])(param_1,param_2,param_3,ppuVar5[1]);
      if (iVar4 == 0) {
        return 0;
      }
      if ((piVar2 != (int *)0x0) && (iVar4 < 0)) {
        return iVar4;
      }
    }
    ppuVar1 = ppuVar5 + 5;
    ppuVar5 = ppuVar5 + 3;
    puVar3 = *ppuVar1;
  } while( true );
}


