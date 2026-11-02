/* Module: sfs4rw.dll
   Function: FUN_00488ec0
   Address: 00488ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00488ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x169);
  iVar2 = *(int *)(iVar1 + 0xe);
  if (iVar2 == 0) {
    FUN_00489050(param_1);
    FUN_00489150(param_1);
    if (*(char *)((int)param_1 + 0xe5) == '\0') {
      (*(code *)**(undefined4 **)((int)param_1 + 0x17d))(param_1);
      (*(code *)**(undefined4 **)((int)param_1 + 0x181))(param_1);
      (*(code *)**(undefined4 **)((int)param_1 + 0x171))(param_1,0);
    }
    (*(code *)**(undefined4 **)((int)param_1 + 0x185))(param_1);
    (*(code *)**(undefined4 **)((int)param_1 + 0x189))(param_1,*(undefined1 *)((int)param_1 + 0xe7))
    ;
    (*(code *)**(undefined4 **)((int)param_1 + 0x175))
              (param_1,(*(int *)(iVar1 + 0x16) < 2) - 1U & 3);
    (*(code *)**(undefined4 **)((int)param_1 + 0x16d))(param_1,0);
    if (*(char *)((int)param_1 + 0xe7) == '\0') {
      *(undefined1 *)(iVar1 + 0xc) = 1;
    }
    else {
      *(undefined1 *)(iVar1 + 0xc) = 0;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_00489050(param_1);
      FUN_00489150(param_1);
      if (((*(int *)((int)param_1 + 0x159) != 0) || (*(int *)((int)param_1 + 0x161) == 0)) ||
         (*(char *)((int)param_1 + 0xe6) != '\0')) {
        (*(code *)**(undefined4 **)((int)param_1 + 0x189))(param_1,1);
        (*(code *)**(undefined4 **)((int)param_1 + 0x175))(param_1,2);
        *(undefined1 *)(iVar1 + 0xc) = 0;
        goto LAB_0048901c;
      }
      *(undefined4 *)(iVar1 + 0xe) = 2;
      *(int *)(iVar1 + 0x12) = *(int *)(iVar1 + 0x12) + 1;
    }
    else if (iVar2 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
      goto LAB_0048901c;
    }
    if (*(char *)((int)param_1 + 0xe7) == '\0') {
      FUN_00489050(param_1);
      FUN_00489150(param_1);
    }
    (*(code *)**(undefined4 **)((int)param_1 + 0x189))(param_1,0);
    (*(code *)**(undefined4 **)((int)param_1 + 0x175))(param_1,2);
    if (*(int *)(iVar1 + 0x1a) == 0) {
      (**(code **)(*(int *)((int)param_1 + 0x179) + 8))(param_1);
    }
    (**(code **)(*(int *)((int)param_1 + 0x179) + 0xc))(param_1);
    *(undefined1 *)(iVar1 + 0xc) = 0;
  }
LAB_0048901c:
  *(bool *)(iVar1 + 0xd) = *(int *)(iVar1 + 0x12) == *(int *)(iVar1 + 0x16) + -1;
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 0xc) = *(int *)(iVar1 + 0x12);
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(iVar1 + 0x16);
  }
  return;
}


