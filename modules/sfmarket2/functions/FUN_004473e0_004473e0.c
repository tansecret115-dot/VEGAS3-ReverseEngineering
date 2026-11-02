/* Module: sfmarket2.dll
   Function: FUN_004473e0
   Address: 004473e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004473e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)param_1 + 0x5d);
  if (iVar1 == 1) {
    *(undefined4 *)((int)param_1 + 0x61) = 1;
    *(undefined4 *)((int)param_1 + 0x65) = 1;
    goto LAB_0044753a;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((*(char *)((int)param_1 + 0x136) == '\0') || (*(char *)((int)param_1 + 0x137) == '\0')) {
        *(undefined4 *)((int)param_1 + 0x61) = 4;
        *(undefined4 *)((int)param_1 + 0x65) = 4;
      }
      else {
        if (*(char *)((int)param_1 + 0x137) != '\x02') {
          *(undefined4 *)(*param_1 + 0x14) = 0x6e;
          *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x137);
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        }
        *(undefined4 *)((int)param_1 + 0x61) = 5;
        *(undefined4 *)((int)param_1 + 0x65) = 4;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x61) = 0;
      *(undefined4 *)((int)param_1 + 0x65) = 0;
    }
    goto LAB_0044753a;
  }
  if ((char)param_1[0x4c] == '\0') {
    if (*(char *)((int)param_1 + 0x136) == '\0') {
      piVar2 = *(int **)((int)param_1 + 0xf6);
      iVar1 = *piVar2;
      iVar3 = *(int *)((int)piVar2 + 0x51);
      iVar4 = *(int *)((int)piVar2 + 0xa2);
      if (iVar1 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) {
          *(undefined4 *)((int)param_1 + 0x61) = 3;
          *(undefined4 *)((int)param_1 + 0x65) = 2;
          goto LAB_0044753a;
        }
      }
      else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_004474f0;
      iVar5 = *param_1;
      *(int *)(iVar5 + 0x18) = iVar1;
      *(int *)(iVar5 + 0x1c) = iVar3;
      *(int *)(iVar5 + 0x20) = iVar4;
      *(undefined4 *)(*param_1 + 0x14) = 0x6b;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    else {
      if (*(char *)((int)param_1 + 0x137) == '\0') {
LAB_004474f0:
        *(undefined4 *)((int)param_1 + 0x61) = 2;
        *(undefined4 *)((int)param_1 + 0x65) = 2;
        goto LAB_0044753a;
      }
      if (*(char *)((int)param_1 + 0x137) != '\x01') {
        *(undefined4 *)(*param_1 + 0x14) = 0x6e;
        *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x137);
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)((int)param_1 + 0x61) = 3;
        *(undefined4 *)((int)param_1 + 0x65) = 2;
        goto LAB_0044753a;
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x61) = 3;
  *(undefined4 *)((int)param_1 + 0x65) = 2;
LAB_0044753a:
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 1;
  *(undefined4 *)((int)param_1 + 0x6d) = 1;
  *(undefined4 *)((int)param_1 + 0x75) = 0x3ff00000;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  *(undefined4 *)((int)param_1 + 0x7b) = 0;
  *(undefined1 *)((int)param_1 + 0x7f) = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 2;
  *(undefined1 *)((int)param_1 + 0x86) = 1;
  *(undefined4 *)((int)param_1 + 0x87) = 0x100;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  return;
}


