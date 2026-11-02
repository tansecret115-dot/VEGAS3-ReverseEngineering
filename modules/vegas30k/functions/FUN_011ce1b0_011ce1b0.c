/* Module: vegas30k.dll
   Function: FUN_011ce1b0
   Address: 011ce1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ce1b0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)param_1[0xa9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xa9] = 0;
  }
  piVar1 = (int *)param_1[0xaa];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xaa] = 0;
  }
  param_1[0xab] = 0;
  if (param_2 != (undefined4 *)0x0) {
    if (param_2 == param_1) {
      param_1[0xab] = 1;
    }
    else {
      (**(code **)*param_2)(param_2,&DAT_011d9a90,param_1 + 0xa9);
      (**(code **)*param_2)(param_2,&DAT_011d9aa0,param_1 + 0xaa);
      param_1[0xab] = 0;
    }
    uVar3 = FUN_011cb2a0(param_2,param_1[0xae]);
    param_1[0xa0] = uVar3;
    return 0;
  }
  param_1[0xa2] = 0;
  param_1[0xa0] = param_1 + 0x96;
  param_1[0xa3] = 0x3ff00000;
  param_1[0x96] = 0;
  param_1[0x97] = 0x3ff00000;
  iVar2 = param_1[0xa0];
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar2 = param_1[0xa0];
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(param_1[0xa0] + 0x1c) = 0;
  *(undefined4 *)(param_1[0xa0] + 0x20) = 0;
  return 0;
}


