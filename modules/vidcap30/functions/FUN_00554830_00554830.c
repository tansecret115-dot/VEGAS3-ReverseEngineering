/* Module: vidcap30.exe
   Function: FUN_00554830
   Address: 00554830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554830(int *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)param_1 + 0x79) == 0) {
    uVar1 = (**(code **)param_1[1])(param_1,0,0x32a);
    *(undefined4 *)((int)param_1 + 0x79) = uVar1;
  }
  *(undefined4 *)((int)param_1 + 0x6d) = 8;
  FUN_00554810(param_1,0x4b,1);
  FUN_00554920(param_1);
  puVar2 = (undefined1 *)((int)param_1 + 0xbd);
  do {
    puVar2[-0x10] = 0;
    *puVar2 = 1;
    puVar2[0x10] = 5;
    puVar2 = puVar2 + 1;
  } while ((int)(puVar2 + (-0xbd - (int)param_1)) < 0x10);
  *(undefined4 *)((int)param_1 + 0xe1) = 0;
  *(undefined4 *)((int)param_1 + 0xdd) = 0;
  *(undefined1 *)((int)param_1 + 0xe5) = 0;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  *(undefined1 *)((int)param_1 + 0xe7) = 0;
  if (8 < *(int *)((int)param_1 + 0x6d)) {
    *(undefined1 *)((int)param_1 + 0xe7) = 1;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0xe9) = 0;
  *(undefined4 *)((int)param_1 + 0xed) = 0;
  *(undefined4 *)((int)param_1 + 0xf1) = 0;
  *(undefined4 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  *(undefined2 *)((int)param_1 + 0xfb) = 1;
  *(undefined2 *)((int)param_1 + 0xfd) = 1;
  FUN_005549f0(param_1);
  return;
}


