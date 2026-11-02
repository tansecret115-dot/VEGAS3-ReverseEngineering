/* Module: rmme3260.dll
   Function: FUN_662435a0
   Address: 662435a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662435a0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 == 0) {
    iVar3 = (**(code **)*param_3)(param_3,&DAT_6626a998,&local_8);
    if (iVar3 == 0) {
      (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x14));
    }
    else {
      param_3 = (undefined4 *)0x0;
      param_2 = -0x7fffbffb;
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  piVar1 = (int *)(param_1 + -4);
  (**(code **)(*(int *)(param_1 + -4) + 4))(piVar1);
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_2,param_3);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  return 0;
}


