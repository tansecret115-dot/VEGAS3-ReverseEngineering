/* Module: mcmpgdec.dll
   Function: FUN_100011f0
   Address: 100011f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100011f0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      if ((param_1[1] == (param_2 >> 0x13 & 1)) && (param_1[2] == (param_2 >> 0x11 & 3))) {
        param_1[3] = param_2 >> 0x10 & 1;
        param_1[4] = param_2 >> 0xc & 0xf;
        if (param_1[5] == (param_2 >> 10 & 3)) {
          param_1[6] = param_2 >> 9 & 1;
          param_1[7] = param_2 >> 8 & 1;
          uVar1 = param_2 >> 6 & 3;
          if (param_1[8] != uVar1) {
            param_1[8] = uVar1;
          }
LAB_10001308:
          uVar1 = param_2 >> 4 & 3;
          param_1[10] = param_2 >> 3 & 1;
          param_1[9] = uVar1;
          *param_1 = param_2;
          param_1[0xb] = param_2 >> 2 & 1;
          param_1[0xc] = param_2 & 3;
          if (param_1[8] == 1) {
            uVar1 = *(uint *)(&DAT_10030560 + uVar1 * 4);
          }
          else {
            uVar1 = param_1[0x19];
          }
          param_1[0x18] = uVar1;
          uVar1 = *(uint *)(&DAT_100302a0 + (3 - param_1[2]) * 0x3c + param_1[4] * 4);
          param_1[0xf] = uVar1;
          if (param_1[0x11] == 1) {
            uVar1 = ((int)(uVar1 * 12000) / *(int *)(&DAT_10030280 + param_1[5] * 4) + param_1[6]) *
                    4;
          }
          else {
            uVar1 = (int)(uVar1 * 0x23280) / *(int *)(&DAT_10030280 + param_1[5] * 4) + param_1[6];
          }
          param_1[0x14] = uVar1;
          param_1[0x1a] = 0;
          return 0;
        }
      }
    }
    else {
      uVar1 = param_2 >> 0x13 & 1;
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        uVar1 = param_2 >> 0x11 & 3;
        param_1[2] = uVar1;
        if (uVar1 != 0) {
          uVar2 = param_2 >> 10 & 3;
          param_1[3] = param_2 >> 0x10 & 1;
          param_1[5] = uVar2;
          param_1[4] = param_2 >> 0xc & 0xf;
          if (uVar2 != 3) {
            param_1[6] = param_2 >> 9 & 1;
            param_1[7] = param_2 >> 8 & 1;
            param_1[8] = param_2 >> 6 & 3;
            param_1[0xd] = *(uint *)(&DAT_10030280 + uVar2 * 4);
            param_1[0x11] = 4 - uVar1;
            goto LAB_10001308;
          }
        }
      }
    }
  }
  return 1;
}


