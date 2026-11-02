/* Module: vegas30.exe
   Function: FUN_0054b2c0
   Address: 0054b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0054b2c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)0x0;
  switch(param_2) {
  case 0:
    uVar2 = FUN_005f2d10();
    piVar1 = (int *)_SfGetFileNamePtrA_4(uVar2);
    return piVar1;
  case 1:
    return param_1 + 9;
  case 2:
    return param_1 + 4;
  case 3:
    return param_1 + 0x10;
  case 4:
    return param_1 + 0x23;
  case 5:
    piVar1 = (int *)FUN_005f2d10();
    return piVar1;
  case 6:
    return param_1 + 0x2d;
  case 7:
    piVar1 = *(int **)(*param_1 + 0x150);
    if (piVar1 == (int *)0x0) {
      return (int *)&DAT_0060f98c;
    }
    break;
  case 8:
    piVar1 = *(int **)(*param_1 + 0x154);
    if (piVar1 == (int *)0x0) {
      return (int *)&DAT_0060f98c;
    }
    break;
  case 9:
    return param_1 + 0x6e;
  case 10:
    return param_1 + 0xb2;
  case 0xb:
    return (int *)((int)param_1 + 0x2e);
  case 0xc:
    return param_1 + 0xf6;
  case 0xd:
    return param_1 + 0x101;
  case 0xe:
    return param_1 + 0x106;
  case 0xf:
    return (int *)((int)param_1 + 0x422);
  case 0x10:
    return param_1 + 0x10e;
  case 0x11:
    return (int *)((int)param_1 + 0x456);
  case 0x12:
    return param_1 + 0x126;
  case 0x13:
    return (int *)((int)param_1 + 0x4a2);
  case 0x14:
    return (int *)((int)param_1 + 0x4ca);
  case 0x15:
    return (int *)((int)param_1 + 0x4f2);
  case 0x16:
    return param_1 + 0x13f;
  case 0x17:
    return param_1 + 0x144;
  case 0x18:
    return param_1 + 0x14a;
  case 0x19:
    piVar1 = (int *)((int)param_1 + 0x546);
  }
  return piVar1;
}


