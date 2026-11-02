/* Module: sftrans1.dll
   Function: FUN_00474660
   Address: 00474660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474660(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    FUN_00474340(param_2);
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0x3fc00000;
    param_1[0x15] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  return;
}


