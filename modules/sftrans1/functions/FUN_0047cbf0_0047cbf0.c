/* Module: sftrans1.dll
   Function: FUN_0047cbf0
   Address: 0047cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0047cbf0(int param_1,undefined4 param_2,short param_3,undefined4 param_4,undefined4 *param_5)

{
  if (param_3 == 1000) {
    FUN_0047c8d0();
    *param_5 = 1;
  }
  else {
    if (param_3 == -0x5fd8) {
      FUN_004c5940(1,*(undefined4 *)(param_1 + 0x30),0x3f5,0xf,0);
      return 0;
    }
    if (param_3 == -0x5fd7) {
      FUN_00406390(*(undefined4 *)(param_1 + 0x30));
      return 0;
    }
  }
  return 0;
}


