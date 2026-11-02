/* Module: sftrans1.dll
   Function: FUN_00488bc0
   Address: 00488bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00488bc0(int param_1,undefined4 param_2)

{
  SHORT SVar1;
  SHORT SVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_8;
  int local_4;
  
  SVar1 = GetKeyState(0x11);
  SVar2 = GetKeyState(0x10);
  if (SVar1 < 0) {
    switch(param_2) {
    case 0x43:
      FUN_0048b890();
      return 0;
    case 0x44:
      if ((*(int *)(param_1 + 0x128) == 0) && (SVar2 < 0)) {
        FUN_0048a8a0(2);
      }
      return 0;
    case 0x48:
      if ((*(int *)(param_1 + 0x128) == 0) && (SVar2 < 0)) {
        FUN_0048a8a0(0);
      }
      return 0;
    case 0x53:
      if ((*(int *)(param_1 + 0x128) == 0) && (SVar2 < 0)) {
        FUN_0048a8a0(1);
      }
      return 0;
    case 0x56:
      FUN_0048bbc0();
      return 0;
    case 0x58:
      FUN_0048b850();
      return 0;
    }
  }
  bVar4 = SVar1 < 0;
  if (SVar2 < 0) {
    bVar4 = bVar4 | 2;
  }
  switch(param_2) {
  case 8:
    FUN_0048a830();
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
    return 0;
  default:
    return 1;
  case 0xd:
  case 0x71:
    FUN_00487d40(&DAT_005633f8,1);
    return 0;
  case 0x1b:
    FUN_004892b0();
    return 0;
  case 0x20:
    if (((SVar1 < 0) &&
        (iVar3 = FUN_0048c830(*(undefined4 *)(param_1 + 0x100),0xffffffff,0), iVar3 != 0)) &&
       (-1 < SVar2)) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x100);
    }
    return 0;
  case 0x21:
    FUN_0048c760(-*(int *)(param_1 + 0xf4),bVar4);
    return 0;
  case 0x22:
    FUN_0048c760(*(undefined4 *)(param_1 + 0xf4),bVar4);
    return 0;
  case 0x25:
    local_8 = *(undefined4 *)(param_1 + 0x100);
    local_4 = *(int *)(param_1 + 0x104) + -1;
    FUN_0048c640(&local_8,bVar4);
    return 0;
  case 0x26:
    FUN_0048c760(0xffffffff,bVar4);
    return 0;
  case 0x27:
    local_8 = *(undefined4 *)(param_1 + 0x100);
    local_4 = *(int *)(param_1 + 0x104) + 1;
    FUN_0048c640(&local_8,bVar4);
    return 0;
  case 0x28:
    FUN_0048c760(1,bVar4);
    return 0;
  case 0x2d:
    FUN_0048a670(*(undefined4 *)(param_1 + 0x100),0);
    return 0;
  case 0x2e:
    FUN_0048a750();
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
    return 0;
  }
}


