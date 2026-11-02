/* Module: vidcap30.exe
   Function: FUN_00554550
   Address: 00554550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554550(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  piVar1 = param_1;
  if (*(int *)((int)param_1 + 0xd) != 0x65) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((int)piVar1 + 0x59) <= (uint)piVar1[0x40]) {
    *(undefined4 *)(*piVar1 + 0x14) = 0x77;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
  }
  if (piVar1[2] != 0) {
    *(int *)(piVar1[2] + 4) = piVar1[0x40];
    *(undefined4 *)(piVar1[2] + 8) = *(undefined4 *)((int)piVar1 + 0x59);
    (**(code **)piVar1[2])(piVar1);
  }
  if (*(char *)(*(int *)((int)piVar1 + 0x169) + 0xc) != '\0') {
    (**(code **)(*(int *)((int)piVar1 + 0x169) + 4))(piVar1);
  }
  uVar2 = *(int *)((int)piVar1 + 0x59) - piVar1[0x40];
  uVar3 = param_3;
  if (uVar2 < param_3) {
    uVar3 = uVar2;
  }
  puVar4 = &param_1;
  param_1 = (int *)0x0;
  (**(code **)(*(int *)((int)piVar1 + 0x16d) + 4))(piVar1,param_2,puVar4,uVar3);
  piVar1[0x40] = piVar1[0x40] + (int)puVar4;
  return;
}


