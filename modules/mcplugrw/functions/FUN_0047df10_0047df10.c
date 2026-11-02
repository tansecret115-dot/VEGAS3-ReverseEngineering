/* Module: mcplugrw.dll
   Function: FUN_0047df10
   Address: 0047df10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047df10(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x1a9);
  if (*(char *)(iVar1 + 8) == '\0') {
    if ((*(char *)((int)param_1 + 0x81) != '\0') && (*(int *)((int)param_1 + 0xa6) == 0)) {
      if ((*(char *)((int)param_1 + 0x86) == '\0') || (*(char *)((int)param_1 + 0x8d) == '\0')) {
        if (*(char *)((int)param_1 + 0x8b) == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2d;
          (**(code **)*param_1)(param_1);
        }
        else {
          *(undefined4 *)((int)param_1 + 0x1d1) = *(undefined4 *)(iVar1 + 0xe);
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1d1) = *(undefined4 *)(iVar1 + 0x12);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    (*(code *)**(undefined4 **)((int)param_1 + 0x1c5))(param_1);
    (**(code **)(*(int *)((int)param_1 + 0x1b1) + 8))(param_1);
    if (*(char *)((int)param_1 + 0x7a) == '\0') {
      if (*(char *)(iVar1 + 0xd) == '\0') {
        (*(code *)**(undefined4 **)((int)param_1 + 0x1cd))(param_1);
      }
      (*(code *)**(undefined4 **)((int)param_1 + 0x1c9))(param_1);
      if (*(char *)((int)param_1 + 0x81) != '\0') {
        (*(code *)**(undefined4 **)((int)param_1 + 0x1d1))(param_1,*(undefined1 *)(iVar1 + 8));
      }
      (*(code *)**(undefined4 **)((int)param_1 + 0x1b5))
                (param_1,-(*(char *)(iVar1 + 8) != '\0') & 3);
      (*(code *)**(undefined4 **)((int)param_1 + 0x1ad))(param_1,0);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 8) = 0;
    (*(code *)**(undefined4 **)((int)param_1 + 0x1d1))(param_1,0);
    (*(code *)**(undefined4 **)((int)param_1 + 0x1b5))(param_1,2);
    (*(code *)**(undefined4 **)((int)param_1 + 0x1ad))(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 9);
    *(uint *)(param_1[2] + 0x10) = (*(char *)(iVar1 + 8) != '\0') + 1 + *(int *)(iVar1 + 9);
    if ((*(char *)((int)param_1 + 0x79) != '\0') &&
       (*(char *)(*(int *)((int)param_1 + 0x1b9) + 0x11) == '\0')) {
      *(uint *)(param_1[2] + 0x10) =
           *(int *)(param_1[2] + 0x10) + (*(char *)((int)param_1 + 0x8d) != '\0') + 1;
    }
  }
  return;
}


