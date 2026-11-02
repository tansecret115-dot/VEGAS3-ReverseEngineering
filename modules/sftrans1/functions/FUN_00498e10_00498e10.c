/* Module: sftrans1.dll
   Function: FUN_00498e10
   Address: 00498e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00498e10(int param_1,undefined4 param_2,short param_3,undefined4 param_4,undefined4 *param_5)

{
  if (param_3 == 1000) {
    FUN_00498a40();
    *param_5 = 1;
  }
  else {
    if (param_3 == -0x5fd8) {
      FUN_004c5940(1,*(undefined4 *)(param_1 + 0x30),0x3f8,0xf,0);
      return 0;
    }
    if (param_3 == -0x5fd7) {
      FUN_00406390(*(undefined4 *)(param_1 + 0x30));
      return 0;
    }
  }
  return 0;
}


