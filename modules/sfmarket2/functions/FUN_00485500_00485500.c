/* Module: sfmarket2.dll
   Function: FUN_00485500
   Address: 00485500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00485500(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x1a9);
  FUN_00485170(param_1);
  FUN_00485700((int)param_1);
  *(undefined4 *)(iVar1 + 9) = 0;
  uVar2 = FUN_004853c0((int)param_1);
  *(char *)(iVar1 + 0xd) = (char)uVar2;
  *(undefined4 *)(iVar1 + 0xe) = 0;
  *(undefined4 *)(iVar1 + 0x12) = 0;
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
      FUN_0048b9c0(param_1);
      *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
    if ((*(char *)((int)param_1 + 0x8d) != '\0') || ((char)param_1[0x23] != '\0')) {
      FUN_0048a590(param_1);
      *(undefined4 *)(iVar1 + 0x12) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
  }
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    if (*(char *)(iVar1 + 0xd) == '\0') {
      FUN_00489990(param_1);
      FUN_00489200(param_1);
    }
    else {
      FUN_00489f90((int)param_1);
    }
    FUN_00488e90((int)param_1);
  }
  FUN_00488bd0((int)param_1);
  if (*(char *)((int)param_1 + 0xfb) == '\0') {
    if (*(char *)((int)param_1 + 0xfa) == '\0') {
      FUN_004877c0((int)param_1);
    }
    else {
      FUN_00487e00((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  FUN_00486430((int)param_1);
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    FUN_00485d60(param_1);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x1b9) + 8))(param_1);
  if (((param_1[2] != 0) && (*(char *)((int)param_1 + 0x79) == '\0')) &&
     (*(char *)(*(int *)((int)param_1 + 0x1b9) + 0x10) != '\0')) {
    iVar3 = *(int *)((int)param_1 + 0x5d);
    if (*(char *)((int)param_1 + 0xfa) != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 4) = 0;
    *(int *)(param_1[2] + 8) = *(int *)((int)param_1 + 0x145) * iVar3;
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(uint *)(param_1[2] + 0x10) = (*(char *)((int)param_1 + 0x8d) != '\0') + 2;
    *(int *)(iVar1 + 9) = *(int *)(iVar1 + 9) + 1;
  }
  return;
}


