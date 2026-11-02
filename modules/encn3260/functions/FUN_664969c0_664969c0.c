/* Module: encn3260.dll
   Function: FUN_664969c0
   Address: 664969c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664969c0(int *param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar2 = param_2;
  if (param_3 == 0) {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,0,0);
    return uVar3;
  }
  if (param_3 < 0x3d0901) {
    uVar8 = 0;
    uVar5 = param_3 * 1000;
    if (999999 < uVar5) {
      uVar8 = uVar5 / 1000000;
      uVar5 = uVar5 % 1000000;
    }
  }
  else {
    uVar8 = param_3 / 1000;
    uVar5 = (param_3 % 1000) * 1000;
  }
  iVar6 = param_1[8] + uVar8;
  for (iVar7 = param_1[9] + uVar5; 999999 < iVar7; iVar7 = iVar7 + -1000000) {
    iVar6 = iVar6 + 1;
  }
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    param_2 = (int *)0x0;
    iVar4 = (*(code *)*puVar1)(piVar2,&DAT_664dc770,&param_2);
    if (iVar4 == 0) {
      if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0xc))(param_2), iVar4 != 0)) {
        uVar3 = (**(code **)(*(int *)param_1[4] + 8))(iVar6,iVar7,piVar2);
        (**(code **)(*param_2 + 8))(param_2);
        return uVar3;
      }
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  uVar3 = (**(code **)(*(int *)param_1[2] + 8))(iVar6,iVar7,piVar2);
  return uVar3;
}


