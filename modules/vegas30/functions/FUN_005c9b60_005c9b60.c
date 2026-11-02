/* Module: vegas30.exe
   Function: FUN_005c9b60
   Address: 005c9b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005c9b60(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_005b83b0(param_2,1);
  _SfList_FindSpecificItemRange_16(*(undefined4 *)(param_3 + 0x24),0,0xffffffff,param_1);
  if (param_4 == *(int *)(param_3 + 4)) {
    param_1[6] = param_5;
    param_1[10] = 0;
    *param_1 = 0x25;
    param_1[1] = param_4;
    param_1[2] = param_3;
    param_1[7] = param_6;
    param_1[0x13] = 0xffffffff;
    param_1[0xb] = 0x3ff00000;
    uVar1 = FUN_005c9b00(param_4);
    param_1[4] = uVar1;
    uVar2 = FUN_005d9b80(param_2,param_4);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    param_1[0xf] = 1;
    FUN_005bd5b0(param_4);
    param_1[0x26] = 0x41;
    switch(param_4) {
    case 2:
      FUN_005bdb00();
      break;
    case 3:
      param_1[4] = param_1[4] & 0xfffffbff;
      FUN_005bdb60();
      break;
    case 4:
      param_1[0x3c] = 0x28;
      break;
    case 5:
      param_1[0x3c] = 0x29;
    }
    param_1[0x86] = param_1 + 0x88;
    FUN_005c9a40(param_2,param_3,param_1,param_7);
    if (param_3 != 0) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x200000;
      *(uint *)*param_2 = *(uint *)*param_2 | 0x2000;
    }
    FUN_005b84d0(param_2,1);
    return 0;
  }
  FUN_005b84d0(param_2,1);
  return 0x80004005;
}


