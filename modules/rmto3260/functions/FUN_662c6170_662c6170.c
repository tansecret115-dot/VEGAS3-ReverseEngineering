/* Module: rmto3260.dll
   Function: FUN_662c6170
   Address: 662c6170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c6170(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  iVar4 = 0;
  if (*(int *)((int)param_1 + 0x46) == 0) {
    iVar4 = -0x7ffbfff9;
  }
  if (-1 < iVar4) {
    piVar2 = (int *)param_1[0xc];
    piVar1 = param_1 + 0xc;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    iVar4 = RMACreateRMFF2Reader(&param_1);
    if (-1 < iVar4) {
      iVar4 = (**(code **)*param_1)(param_1,&DAT_663069c8,piVar1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*(int *)piVar3[0xc] + 0x10))((int *)piVar3[0xc],param_2);
      }
    }
  }
  return iVar4;
}


