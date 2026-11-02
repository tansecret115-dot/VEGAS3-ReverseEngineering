/* Module: vegas30.exe
   Function: FUN_005c34c0
   Address: 005c34c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005c34c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_11c;
  int local_118 [68];
  undefined4 uStack_8;
  
  iVar1 = FUN_005f06b0(param_3,local_118);
  if (local_118[0] == 1) {
    piVar2 = *(int **)(param_1 + 0x14c);
    piVar3 = &local_11c;
    iVar1 = (**(code **)*piVar2)(piVar2,&DAT_00610da0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (piVar3 == (int *)0x0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,uStack_8);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  else {
    if (local_118[0] != 2) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x14c);
    piVar3 = &local_11c;
    iVar1 = (**(code **)*piVar2)(piVar2,&DAT_0062d020);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (piVar3 == (int *)0x0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,uStack_8);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (-1 < iVar1) {
    iVar1 = FUN_005f1800();
  }
  return iVar1;
}


