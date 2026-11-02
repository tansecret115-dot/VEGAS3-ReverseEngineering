/* Module: mcmpgdec.dll
   Function: FUN_10008358
   Address: 10008358
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008358(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_100038c4((int *)(param_1 + 0x66c));
  while ((piVar1 = (int *)(param_1 + 0x66c), *(int *)(param_1 + 0x68c) == 0 &&
         (uVar2 = FUN_10003828((int)piVar1,'\x18'), uVar2 != 1))) {
    FUN_10003858(piVar1,8);
  }
  while (((uVar2 = FUN_10003828((int)piVar1,' '), uVar2 == 0x1b5 || (uVar2 == 0x1b2)) &&
         (*(int *)(param_1 + 0x688) == 0))) {
    if (uVar2 == 0x1b5) {
      FUN_10003920(piVar1);
      uVar2 = FUN_10003a04(piVar1,4);
      switch(uVar2) {
      case 1:
        FUN_1000851c(param_1);
        break;
      case 2:
        FUN_10008d0c(param_1);
        break;
      case 3:
        FUN_100086c4(param_1);
        break;
      case 4:
        FUN_10008f0c(param_1);
        break;
      case 5:
        FUN_10008dac(param_1);
        break;
      default:
        if (*(int *)(param_1 + 0x60) == 0) {
          FUN_1000bb3c(param_1,"reserved extension start code ID");
        }
        break;
      case 7:
        FUN_10008dd4(param_1);
        break;
      case 8:
        FUN_10008838(param_1);
        break;
      case 9:
        FUN_10008e80(param_1);
        break;
      case 10:
        FUN_10008ea8(param_1);
      }
      FUN_100038c4(piVar1);
      while ((*(int *)(param_1 + 0x68c) == 0 &&
             (uVar2 = FUN_10003828((int)piVar1,'\x18'), uVar2 != 1))) {
        FUN_10003858(piVar1,8);
      }
    }
    else {
      FUN_10003920(piVar1);
      FUN_10008fa4(param_1);
    }
  }
  return;
}


