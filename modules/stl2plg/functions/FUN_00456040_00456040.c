/* Module: stl2plg.dll
   Function: FUN_00456040
   Address: 00456040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456040(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x1a9);
  FUN_00455cb0(param_1);
  FUN_00456240((int)param_1);
  *(undefined4 *)(iVar1 + 9) = 0;
  uVar2 = FUN_00455f00((int)param_1);
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
      FUN_0045e780(param_1);
      *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
    if ((*(char *)((int)param_1 + 0x8d) != '\0') || ((char)param_1[0x23] != '\0')) {
      FUN_0045d350(param_1);
      *(undefined4 *)(iVar1 + 0x12) = *(undefined4 *)((int)param_1 + 0x1d1);
    }
  }
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    if (*(char *)(iVar1 + 0xd) == '\0') {
      FUN_0045c750(param_1);
      FUN_0045bfc0(param_1);
    }
    else {
      FUN_0045cd50((int)param_1);
    }
    FUN_0045bc50((int)param_1);
  }
  FUN_0045b990((int)param_1);
  if (*(char *)((int)param_1 + 0xfb) == '\0') {
    if (*(char *)((int)param_1 + 0xfa) == '\0') {
      FUN_0045a580((int)param_1);
    }
    else {
      FUN_0045abc0((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  FUN_004591f0((int)param_1);
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    FUN_00458b20(param_1);
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


