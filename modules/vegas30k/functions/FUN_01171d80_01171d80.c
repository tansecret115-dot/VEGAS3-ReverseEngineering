/* Module: vegas30k.dll
   Function: FUN_01171d80
   Address: 01171d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01171d80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  *(undefined4 **)((int)param_1 + 0x185) = puVar1;
  *puVar1 = &LAB_01171e10;
  iVar2 = *(int *)((int)param_1 + 0xed);
  if (iVar2 == 0) {
    puVar1[1] = &LAB_01171fd0;
    puVar1[2] = FUN_01175f30;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_01171fd0;
    puVar1[2] = &LAB_01176300;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_01172170;
    puVar1[7] = &LAB_01176550;
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


