/* Module: sfs4rw.dll
   Function: FUN_00451840
   Address: 00451840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00451840(int *param_1)

{
  int *piVar1;
  
  *(undefined4 *)(*param_1 + 0x14) = 0x65;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(char *)(*(int *)((int)param_1 + 0x1bd) + 0x50) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    (**(code **)*param_1)(param_1);
  }
  piVar1 = param_1 + 0x43;
  do {
    *(undefined1 *)(piVar1 + -4) = 0;
    *(undefined1 *)piVar1 = 1;
    *(undefined1 *)(piVar1 + 4) = 5;
    piVar1 = (int *)((int)piVar1 + 1);
  } while ((int)((-0x10c - (int)param_1) + (int)piVar1) < 0x10);
  param_1[0x4b] = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  *(undefined2 *)((int)param_1 + 0x132) = 1;
  *(undefined2 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((int)param_1 + 0x136) = 0;
  *(undefined1 *)((int)param_1 + 0x137) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x1bd) + 0x50) = 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


