/* Module: sfpublish.dll
   Function: FUN_0040adc0
   Address: 0040adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040adc0(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if (param_4 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  if ((((*param_3 == 0) && (param_3[1] == 0)) && (param_3[2] == 0xc0)) && (param_3[3] == 0x46000000)
     ) {
    iVar2 = param_2[1];
LAB_0040ae79:
    piVar3 = (int *)(iVar2 + param_1);
    (**(code **)(*piVar3 + 4))(piVar3);
    *param_4 = piVar3;
    return 0;
  }
  pcVar1 = (code *)param_2[2];
  do {
    if (pcVar1 == (code *)0x0) {
      return -0x7fffbffe;
    }
    piVar3 = (int *)*param_2;
    if ((piVar3 == (int *)0x0) ||
       (((*piVar3 == *param_3 && (piVar3[1] == param_3[1])) &&
        ((piVar3[2] == param_3[2] && (piVar3[3] == param_3[3])))))) {
      if (pcVar1 == (code *)0x1) {
        iVar2 = param_2[1];
        goto LAB_0040ae79;
      }
      iVar2 = (*pcVar1)(param_1,param_3,param_4,param_2[1]);
      if (iVar2 == 0) {
        return 0;
      }
      if ((piVar3 != (int *)0x0) && (iVar2 < 0)) {
        return iVar2;
      }
    }
    pcVar1 = (code *)param_2[5];
    param_2 = param_2 + 3;
  } while( true );
}


