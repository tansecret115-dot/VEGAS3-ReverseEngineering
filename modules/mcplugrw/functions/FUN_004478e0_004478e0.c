/* Module: mcplugrw.dll
   Function: FUN_004478e0
   Address: 004478e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004478e0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) &&
     (((param_4 != (uint *)0x0 && (param_5 != (uint *)0x0)) && (param_6 != (uint *)0x0)))) {
    *param_3 = *param_2;
    *param_4 = param_2[1];
    *param_5 = (uint)(byte)param_2[6];
    *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)(byte)param_2[7];
    }
    uVar1 = *param_6;
    if (uVar1 == 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)((byte)uVar1 & 2 | 1);
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 + 1;
    }
    if ((uint)(0x7fffffff / (ulonglong)(uint)((int)(*param_5 * uVar2 + 7) >> 3)) < *param_3) {
      FUN_00475b80(param_1,"Width too large for libpng to process image data.");
    }
    return 1;
  }
  return 0;
}


