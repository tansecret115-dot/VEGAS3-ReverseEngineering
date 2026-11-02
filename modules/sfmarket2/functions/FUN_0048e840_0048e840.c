/* Module: sfmarket2.dll
   Function: FUN_0048e840
   Address: 0048e840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048e840(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  *(undefined4 **)((int)param_1 + 0x185) = puVar1;
  *puVar1 = &LAB_0048e8d0;
  iVar2 = *(int *)((int)param_1 + 0xed);
  if (iVar2 == 0) {
    puVar1[1] = &LAB_0048ea90;
    puVar1[2] = FUN_00492650;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_0048ea90;
    puVar1[2] = &LAB_00492a20;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_0048ec30;
    puVar1[7] = &LAB_00492c70;
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


