/* Module: vegas30k.dll
   Function: FUN_01167d80
   Address: 01167d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01167d80(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  
  piVar3 = param_1;
  iVar2 = *(int *)((int)param_1 + 0x1a9);
  FUN_011679f0(param_1);
  FUN_01167f80(param_1);
  *(undefined4 *)(iVar2 + 9) = 0;
  uVar4 = FUN_01167c40(param_1);
  *(undefined1 *)(iVar2 + 0xd) = uVar4;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  if ((*(char *)((int)param_1 + 0x81) == '\0') || (*(char *)((int)param_1 + 0x79) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x8b) = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined1 *)((int)param_1 + 0x8d) = 0;
  }
  if (*(char *)((int)param_1 + 0x81) != '\0') {
    if (*(char *)((int)param_1 + 0x7a) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x2e;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x96) == 3) {
      if (*(int *)((int)param_1 + 0xa6) == 0) {
        if (*(char *)((int)param_1 + 0x86) == '\0') {
          *(undefined1 *)((int)param_1 + 0x8b) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x8d) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x23) = 1;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x8b) = 1;
      *(undefined1 *)(param_1 + 0x23) = 0;
      *(undefined1 *)((int)param_1 + 0x8d) = 0;
      *(undefined4 *)((int)param_1 + 0xa6) = 0;
    }
    if (*(char *)((int)param_1 + 0x8b) != '\0') {
      FUN_0116ef00(param_1);
      *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
    if ((*(char *)((int)param_1 + 0x8d) != '\0') || ((char)param_1[0x23] != '\0')) {
      FUN_0116dad0(param_1);
      *(undefined4 *)(iVar2 + 0x12) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
  }
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    if (*(char *)(iVar2 + 0xd) == '\0') {
      FUN_0116ced0(param_1);
      FUN_0116c740(param_1);
    }
    else {
      FUN_0116d4d0(param_1);
    }
    FUN_0116c3d0(param_1,*(undefined1 *)((int)param_1 + 0x8d));
  }
  FUN_0116c110(param_1);
  if (*(char *)((int)param_1 + 0xfb) == '\0') {
    if (*(char *)((int)param_1 + 0xfa) == '\0') {
      FUN_0116ad00(param_1);
    }
    else {
      FUN_0116b340(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)(*(int *)((int)param_1 + 0x1b9) + 0x10) != '\0') ||
     (pcVar1 = (char *)((int)param_1 + 0x79), param_1 = (int *)0x0, *pcVar1 != '\0')) {
    param_1 = (int *)0x1;
  }
  FUN_01169970(piVar3,param_1);
  if (*(char *)((int)piVar3 + 0x7a) == '\0') {
    FUN_011692a0(piVar3,0);
  }
  (**(code **)(piVar3[1] + 0x18))(piVar3);
  (**(code **)(*(int *)((int)piVar3 + 0x1b9) + 8))(piVar3);
  if (((piVar3[2] != 0) && (*(char *)((int)piVar3 + 0x79) == '\0')) &&
     (*(char *)(*(int *)((int)piVar3 + 0x1b9) + 0x10) != '\0')) {
    iVar5 = *(int *)((int)piVar3 + 0x5d);
    if (*(char *)((int)piVar3 + 0xfa) != '\0') {
      iVar5 = iVar5 * 3 + 2;
    }
    *(undefined4 *)(piVar3[2] + 4) = 0;
    *(int *)(piVar3[2] + 8) = *(int *)((int)piVar3 + 0x145) * iVar5;
    *(undefined4 *)(piVar3[2] + 0xc) = 0;
    *(uint *)(piVar3[2] + 0x10) = (*(char *)((int)piVar3 + 0x8d) != '\0') + 2;
    *(int *)(iVar2 + 9) = *(int *)(iVar2 + 9) + 1;
  }
  return;
}


