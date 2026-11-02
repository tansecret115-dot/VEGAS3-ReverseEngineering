/* Module: vfplugs.dll
   Function: FUN_004113f0
   Address: 004113f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004113f0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  puVar1 = *(undefined4 **)param_1[2];
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486aa0,&param_1);
  }
  piVar3 = (int *)0x2c0;
  (**(code **)(*param_1 + 0x24))(param_1,piVar2 + 0x13);
  piVar2[10] = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}


