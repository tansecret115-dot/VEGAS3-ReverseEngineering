/* Module: vidcap30.exe
   Function: FUN_00553620
   Address: 00553620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00553620(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 0xd) == 0xca) {
    FUN_0055f050(param_1);
    if (*(char *)((int)param_1 + 0x79) != '\0') {
      *(undefined4 *)((int)param_1 + 0xd) = 0xcf;
      return 1;
    }
    *(undefined4 *)((int)param_1 + 0xd) = 0xcb;
  }
  if (*(int *)((int)param_1 + 0xd) == 0xcb) {
    if (*(char *)(*(int *)((int)param_1 + 0x1b9) + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1b9))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        iVar1 = param_1[2];
        if ((iVar1 != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar2 = param_1[2];
          if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 4)) {
            *(int *)(iVar2 + 8) = *(int *)((int)param_1 + 0x145) + *(int *)(iVar2 + 8);
          }
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0xb6) = *(undefined4 *)((int)param_1 + 0xae);
    uVar3 = FUN_00553700(param_1);
    return uVar3;
  }
  if (*(int *)((int)param_1 + 0xd) != 0xcc) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  uVar3 = FUN_00553700(param_1);
  return uVar3;
}


