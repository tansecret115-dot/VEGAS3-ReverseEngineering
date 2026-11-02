/* Module: vidcap30.exe
   Function: FUN_0052c820
   Address: 0052c820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052c820(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0xd);
  if (((iVar3 == 0xcd) || (iVar3 == 0xce)) && (*(char *)((int)param_1 + 0x79) == '\0')) {
    if (*(uint *)((int)param_1 + 0xaa) < *(uint *)((int)param_1 + 0x92)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x42;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(*(int *)((int)param_1 + 0x1a9) + 4))(param_1);
    *(undefined4 *)((int)param_1 + 0xd) = 0xd2;
  }
  else if (iVar3 == 0xcf) {
    *(undefined4 *)((int)param_1 + 0xd) = 0xd2;
  }
  else if (iVar3 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x1b9);
  cVar1 = *(char *)((int)puVar2 + 0x11);
  while( true ) {
    if (cVar1 != '\0') {
      (**(code **)(*(int *)((int)param_1 + 0x51) + 0x18))(param_1);
      FUN_00553590(param_1);
      return 1;
    }
    iVar3 = (*(code *)*puVar2)(param_1);
    if (iVar3 == 0) break;
    puVar2 = *(undefined4 **)((int)param_1 + 0x1b9);
    cVar1 = *(char *)((int)puVar2 + 0x11);
  }
  return 0;
}


