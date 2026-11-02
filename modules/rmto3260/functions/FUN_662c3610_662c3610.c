/* Module: rmto3260.dll
   Function: FUN_662c3610
   Address: 662c3610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c3610(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_8;
  
  uVar2 = param_2;
  piVar1 = param_1;
  local_8 = 0;
  iVar3 = (**(code **)(*param_1 + 0x3c))(param_1,param_2,&local_8);
  param_1 = (int *)0x0;
  if (-1 < iVar3) {
    if (*(int *)(local_8 + 0x16) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x58))(piVar1,uVar2,&param_1);
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1,&param_1);
    }
    if (-1 < iVar3) {
      piVar1[0xf] = (int)param_1;
      (**(code **)(piVar1[-4] + 0x8c))
                (piVar1 + -4,*(undefined4 *)(local_8 + 0xc),param_3,param_4,param_5);
    }
  }
  return;
}


