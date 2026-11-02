/* Module: rmbe3260.dll
   Function: FUN_66026220
   Address: 66026220
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66026220(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10 [3];
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    return -0x7ffbfff9;
  }
  if ((*(int *)(param_1 + 0x14) == 0) ||
     (iVar2 = (**(code **)(*(int *)(param_1 + -0x1c) + 0x28))(), -1 < iVar2)) {
    FUN_6605cdc0((void *)(param_1 + 4),9,0xffffffff);
    param_1 = 0;
    do {
      FUN_6605b650(local_10);
      iVar2 = FUN_6604f5a0(*(void **)(iVar1 + 0x18),(int *)0x0,local_10,param_1);
      if (iVar2 < 0) {
        FUN_6605b770(local_10);
        break;
      }
      iVar2 = *(int *)(iVar1 + -0x1c);
      FUN_6605b670(&stack0xffffffd8,local_10);
      iVar2 = (**(code **)(iVar2 + 0x2c))(iVar1 + -0x1c);
      if (-1 < iVar2) {
        *(undefined4 *)(iVar1 + 0x14) = 1;
      }
      FUN_6605b770(local_10);
      param_1 = param_1 + 1;
    } while (param_1 < 9);
    if (iVar2 < 0) {
      iVar2 = -0x7ffbfff9;
    }
  }
  return iVar2;
}


