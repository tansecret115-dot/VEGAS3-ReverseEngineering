/* Module: mcmpgdec.dll
   Function: FUN_10008a58
   Address: 10008a58
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10008a58(int param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  do {
    while( true ) {
      while( true ) {
        if (*(int *)(param_1 + 0x68c) != 0) {
          return 1;
        }
        FUN_10008b44(param_1);
        uVar1 = FUN_10003984((int *)(param_1 + 0x66c));
        if (uVar1 != 0x1b3) break;
        FUN_10008044(param_1);
        FUN_10008358(param_1);
        *(undefined4 *)(param_1 + 100) = 1;
        if (param_2 == 0) {
          return 0;
        }
      }
      if (0x1b3 < uVar1) break;
      if (uVar1 == 0x100) {
        FUN_10008c48(param_1);
        if (param_2 == 2) {
          return 0;
        }
        return 1;
      }
LAB_10008b1c:
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_1000bb3c(param_1,"Unexpected next_start_code (ignored)");
      }
    }
    if (uVar1 == 0x1b7) {
      return 1;
    }
    if (uVar1 != 0x1b8) goto LAB_10008b1c;
    FUN_10008b98(param_1);
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (param_2 == 1) {
      return 0;
    }
  } while( true );
}


