/* Module: vidcap30.exe
   Function: FUN_00569080
   Address: 00569080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00569080(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  *(undefined4 **)((int)param_1 + 0x185) = puVar1;
  *puVar1 = &LAB_00569110;
  iVar2 = *(int *)((int)param_1 + 0xed);
  if (iVar2 == 0) {
    puVar1[1] = &LAB_005692d0;
    puVar1[2] = FUN_0056d230;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_005692d0;
    puVar1[2] = &LAB_0056d600;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_00569470;
    puVar1[7] = &LAB_0056d850;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = puVar1 + 8;
  iVar2 = 4;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


