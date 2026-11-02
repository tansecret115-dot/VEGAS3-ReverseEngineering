/* Module: sfmarket2.dll
   Function: FUN_0045bc90
   Address: 0045bc90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0045bc90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)param_1 + 0xd) == 0xca) {
    uVar2 = FUN_004854d0(param_1);
    if (*(char *)((int)param_1 + 0x79) != '\0') {
      *(undefined4 *)((int)param_1 + 0xd) = 0xcf;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    *(undefined4 *)((int)param_1 + 0xd) = 0xcb;
  }
  if (*(int *)((int)param_1 + 0xd) == 0xcb) {
    if (*(char *)(*(int *)((int)param_1 + 0x1b9) + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 0x1b9))(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar3 == 2) break;
        iVar1 = param_1[2];
        if ((iVar1 != 0) && ((iVar3 == 3 || (iVar3 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar3 = param_1[2];
          if (*(int *)(iVar3 + 8) <= *(int *)(iVar3 + 4)) {
            *(int *)(iVar3 + 8) = *(int *)((int)param_1 + 0x145) + *(int *)(iVar3 + 8);
          }
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0xb6) = *(undefined4 *)((int)param_1 + 0xae);
    uVar4 = FUN_0045bd70((int)param_1);
    return uVar4;
  }
  if (*(int *)((int)param_1 + 0xd) != 0xcc) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  uVar4 = FUN_0045bd70((int)param_1);
  return uVar4;
}


