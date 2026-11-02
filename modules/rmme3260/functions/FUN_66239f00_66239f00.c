/* Module: rmme3260.dll
   Function: FUN_66239f00
   Address: 66239f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66239f00(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_8;
  
  uVar2 = param_2;
  piVar3 = param_1;
  local_8 = param_1[9];
  *(undefined4 *)((int)param_1 + 0x76) = param_2;
  iVar1 = param_1[0x11];
  param_1 = (int *)0x0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x20))(iVar1 + 4,param_2);
  }
  iVar1 = piVar3[0x29];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x20))(iVar1 + 4,uVar2);
  }
  iVar1 = piVar3[0x2a];
  piVar3 = param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x20))(iVar1 + 4,uVar2);
    piVar3 = param_1;
  }
  while (param_1 = piVar3, local_8 != 0) {
    puVar4 = (undefined4 *)FUN_66250bf0(&local_8);
    (*(code *)**(undefined4 **)*puVar4)((undefined4 *)*puVar4,&DAT_6626ad68,&param_1);
    piVar3 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,uVar2);
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
      piVar3 = param_1;
    }
  }
  return 0;
}


