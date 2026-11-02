/* Module: sfs4rw.dll
   Function: FUN_00486bb0
   Address: 00486bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486bb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  *(undefined4 **)((int)param_1 + 0x185) = puVar1;
  *puVar1 = &LAB_00486c40;
  iVar2 = *(int *)((int)param_1 + 0xed);
  if (iVar2 == 0) {
    puVar1[1] = &LAB_00486e00;
    puVar1[2] = FUN_0048a9c0;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_00486e00;
    puVar1[2] = &LAB_0048ad90;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_00486fa0;
    puVar1[7] = &LAB_0048afe0;
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


