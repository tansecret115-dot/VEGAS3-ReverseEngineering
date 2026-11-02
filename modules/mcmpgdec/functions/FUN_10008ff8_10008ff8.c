/* Module: mcmpgdec.dll
   Function: FUN_10008ff8
   Address: 10008ff8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008ff8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),4);
  switch(uVar1) {
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
  return;
}


