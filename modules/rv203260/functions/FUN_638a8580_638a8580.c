/* Module: rv203260.dll
   Function: FUN_638a8580
   Address: 638a8580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a8580(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x6f;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 8),param_1 + 0x1c);
      return uVar1;
    }
    break;
  case 1:
    if ((*(code **)(param_1 + 0x28) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x28))
                        (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                         *(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 2:
    if ((*(code **)(param_1 + 0x2c) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x2c))(*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 3:
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 4:
    if ((*(code **)(param_1 + 0x34) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 5:
    if ((*(code **)(param_1 + 0x38) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x38))
                        (*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                         *(undefined4 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xe),
                         *(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 6:
    if ((*(code **)(param_1 + 0x3c) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x3c))
                        (*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                         *(undefined1 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xb),
                         *(undefined1 *)(param_1 + 0xf),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 7:
    if ((*(code **)(param_1 + 0x40) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 8:
    if ((*(code **)(param_1 + 0x44) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 9:
    if ((*(code **)(param_1 + 0x48) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      return uVar1;
    }
    break;
  case 10:
    if ((*(code **)(param_1 + 0x4c) != (code *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uVar1 = (**(code **)(param_1 + 0x4c))(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c));
    }
  }
  return uVar1;
}


