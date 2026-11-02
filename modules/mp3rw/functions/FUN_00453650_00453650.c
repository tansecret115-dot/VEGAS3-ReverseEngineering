/* Module: mp3rw.dll
   Function: FUN_00453650
   Address: 00453650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00453650(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int **ppiVar2;
  
  piVar1 = param_1;
  if (*(int *)((int)param_1 + 0xd) != 0xcd) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((int)piVar1 + 0x92) <= *(uint *)((int)piVar1 + 0xaa)) {
    *(undefined4 *)(*piVar1 + 0x14) = 0x77;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
    return (undefined4 *)0x0;
  }
  if (piVar1[2] != 0) {
    *(uint *)(piVar1[2] + 4) = *(uint *)((int)piVar1 + 0xaa);
    *(undefined4 *)(piVar1[2] + 8) = *(undefined4 *)((int)piVar1 + 0x92);
    (**(code **)piVar1[2])(piVar1);
  }
  ppiVar2 = &param_1;
  param_1 = (int *)0x0;
  (**(code **)(*(int *)((int)piVar1 + 0x1ad) + 4))(piVar1,param_2,ppiVar2,param_3);
  *(int *)((int)piVar1 + 0xaa) = *(int *)((int)piVar1 + 0xaa) + (int)ppiVar2;
  return ppiVar2;
}


