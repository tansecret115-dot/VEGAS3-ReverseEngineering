/* Module: wmfplug2.dll
   Function: FUN_004309a0
   Address: 004309a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004309a0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 3) {
    iVar2 = FUN_00430950(*(uint *)(param_1 + 0x28));
    iVar3 = FUN_00430950(*(uint *)(param_1 + 0x2c));
    iVar4 = FUN_00430950(*(uint *)(param_1 + 0x30));
    if (*(short *)(param_1 + 0xe) == 0x10) {
      if (iVar2 == 5) {
        if (iVar3 == 5) {
          if (iVar4 == 5) {
            return 0x19;
          }
        }
        else if ((iVar3 == 6) && (iVar4 == 5)) {
          uVar5 = 0x1a;
        }
      }
    }
    else if (*(short *)(param_1 + 0xe) == 0x20) {
      if (iVar2 == 8) {
        if ((iVar3 == 8) && (iVar4 == 8)) {
          return 0x1c;
        }
      }
      else if (((iVar2 == 10) && (iVar3 == 10)) && (iVar4 == 10)) {
        return 0x1e;
      }
    }
  }
  else if (iVar2 == 0x42444653) {
    sVar1 = *(short *)(param_1 + 0xe);
    if (sVar1 == 0x20) {
      return 0x1d;
    }
    if (sVar1 == 0x40) {
      return 0x1f;
    }
    if (sVar1 == 0x80) {
      return 0x20;
    }
  }
  else if (iVar2 == 0x53474653) {
    switch(*(undefined2 *)(param_1 + 0xe)) {
    case 1:
      return 0x11;
    case 2:
      return 0x12;
    case 4:
      return 0x13;
    case 8:
      return 0x14;
    case 0x10:
      return 0x15;
    case 0x20:
      return 0x16;
    }
  }
  else {
    switch(*(undefined2 *)(param_1 + 0xe)) {
    case 1:
      return 0x10;
    case 4:
      return 0x17;
    case 8:
      return 0x18;
    case 0x10:
      return 0x19;
    case 0x18:
      return 0x1b;
    case 0x20:
      return 0x1c;
    }
  }
  return uVar5;
}


