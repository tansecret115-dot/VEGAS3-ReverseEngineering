/* Module: rmto3260.dll
   Function: FUN_662cc770
   Address: 662cc770
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc770(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  iVar4 = 0;
  if (param_1[5] == 0) {
    iVar4 = -0x7ffbfff9;
  }
  if (-1 < iVar4) {
    piVar1 = (int *)param_1[9];
    piVar2 = param_1 + 9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    iVar4 = RMACreateRMFF2Reader(&param_1);
    if (-1 < iVar4) {
      iVar4 = (**(code **)*param_1)(param_1,&DAT_663069c8,piVar2);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      if (-1 < iVar4) {
        piVar2 = (int *)piVar3[9];
        iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,piVar3[5]);
      }
    }
  }
  return iVar4;
}


