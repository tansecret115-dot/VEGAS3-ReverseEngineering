/* Module: erv23260.dll
   Function: FUN_637f9510
   Address: 637f9510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f9510(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)((int)this + 0x338);
  *(undefined1 *)(iVar1 + 0x91) = 0;
  *(undefined1 *)(iVar1 + 0x92) = 0;
  *(uint *)((int)this + 0x348) = (uint)(param_1[5] == 3);
  if (param_1[5] != 2) {
    if (param_1[5] != 1) {
      uVar3 = 0;
      goto LAB_637f956a;
    }
    if (param_1[9] == 0) {
      uVar3 = 0;
      goto LAB_637f956a;
    }
  }
  uVar3 = 1;
LAB_637f956a:
  *(undefined4 *)((int)this + 0x34c) = uVar3;
  *(undefined4 *)((int)this + 0x344) = param_1[5];
  *(undefined4 *)(iVar1 + 4) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[2];
  *(undefined4 *)(iVar1 + 0x10) = param_1[3];
  *(undefined4 *)(iVar1 + 0x14) = param_1[4];
  *(undefined4 *)(iVar1 + 8) = param_1[1];
  *(undefined4 *)(iVar1 + 0x7c) = param_1[0x1e];
  if (*(int *)(iVar1 + 8) == 7) {
    *(undefined1 *)(iVar1 + 0x2c) = *(undefined1 *)(param_1 + 10);
    if (*(char *)(param_1 + 10) != '\0') {
      *(undefined4 *)(iVar1 + 0x30) = param_1[0xb];
      *(undefined4 *)(iVar1 + 0x34) = param_1[0xc];
      *(undefined4 *)(iVar1 + 0x1c) = param_1[6];
      *(undefined4 *)(iVar1 + 0x20) = param_1[7];
      *(undefined4 *)(iVar1 + 0x24) = param_1[8];
      *(undefined4 *)(iVar1 + 0x38) = param_1[0xd];
      *(undefined4 *)(iVar1 + 0x3c) = param_1[0xe];
      *(undefined4 *)(iVar1 + 0x40) = param_1[0xf];
      *(undefined4 *)(iVar1 + 0x44) = param_1[0x10];
      *(undefined4 *)(iVar1 + 0x48) = param_1[0x11];
      *(undefined4 *)(iVar1 + 0x4c) = param_1[0x12];
      *(undefined4 *)(iVar1 + 0x50) = param_1[0x13];
    }
    iVar2 = *(int *)(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x18) = param_1[5];
    *(undefined4 *)(iVar1 + 0x54) = param_1[0x14];
    *(undefined4 *)(iVar1 + 0x74) = param_1[0x1c];
    *(undefined4 *)(iVar1 + 0x78) = param_1[0x1d];
    puVar5 = param_1 + 0x15;
    puVar6 = (undefined4 *)(iVar1 + 0x58);
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((*(char *)(iVar1 + 0x2c) != '\0') && (*(int *)(iVar1 + 0x30) == 6)) {
      *(undefined4 *)(iVar1 + 0x80) = param_1[0x1f];
      *(undefined4 *)(iVar1 + 0x84) = param_1[0x20];
      *(undefined4 *)(iVar1 + 0x88) = param_1[0x21];
    }
    iVar4 = *(int *)(iVar1 + 0x18);
    if (((iVar4 == 4) || (iVar4 == 5)) || (iVar4 == 3)) {
      *(undefined1 *)(iVar1 + 0x91) = *(undefined1 *)((int)param_1 + 0x8d);
      *(undefined1 *)(iVar1 + 0x92) = *(undefined1 *)((int)param_1 + 0x8e);
      if (iVar4 == 3) {
        if (*(char *)(param_1 + 10) == '\0') {
          if (iVar2 == 3) {
            *(undefined1 *)((int)param_1 + 0x8f) = *(undefined1 *)(iVar1 + 0x93);
          }
          else {
            *(undefined1 *)((int)param_1 + 0x8f) = *(undefined1 *)((int)param_1 + 0x8d);
            *(undefined1 *)(iVar1 + 0x93) = *(undefined1 *)((int)param_1 + 0x8d);
          }
        }
        else {
          *(undefined1 *)((int)param_1 + 0x8f) = *(undefined1 *)((int)param_1 + 0x8e);
          *(undefined1 *)(iVar1 + 0x93) = *(undefined1 *)((int)param_1 + 0x8e);
        }
      }
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x18) = param_1[5];
    *(undefined4 *)(iVar1 + 0x1c) = param_1[6];
    *(undefined4 *)(iVar1 + 0x20) = param_1[7];
    *(undefined4 *)(iVar1 + 0x24) = param_1[8];
    *(undefined4 *)(iVar1 + 0x28) = param_1[9];
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  *(undefined1 *)(iVar1 + 0x94) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(iVar1 + 0x95) = *(undefined1 *)((int)param_1 + 0x91);
  *(undefined1 *)(iVar1 + 0x98) = *(undefined1 *)(param_1 + 0x25);
  if (*(int *)((int)this + 0x34c) != 0) {
    *(undefined1 *)(iVar1 + 0x96) = *(undefined1 *)((int)param_1 + 0x92);
    *(undefined1 *)(iVar1 + 0x97) = *(undefined1 *)((int)param_1 + 0x93);
  }
  FUN_637f40c0(*(void **)((int)this + 4),iVar1 + 4);
  return;
}


