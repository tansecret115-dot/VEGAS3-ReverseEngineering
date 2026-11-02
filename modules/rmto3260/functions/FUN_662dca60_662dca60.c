/* Module: rmto3260.dll
   Function: FUN_662dca60
   Address: 662dca60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662dca60(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  iVar3 = 0;
  if (param_2 == 0) {
    return -0x7fffbffd;
  }
  if ((param_1[5] != 0) && (param_1[7] == 0)) {
    piVar1 = param_1 + 0xd;
    if (param_1[0xd] == 0) {
      param_1 = (int *)0x0;
      iVar3 = RMACreateRMEvents(&param_1);
      if (-1 < iVar3) {
        iVar3 = (**(code **)*param_1)(param_1,&DAT_66306a38,piVar1);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
    if (-1 < iVar3) {
      piVar1 = (int *)*piVar1;
      iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
      if (-1 < iVar3) {
        piVar2[7] = 1;
      }
    }
    return iVar3;
  }
  return -0x7fffbffb;
}


