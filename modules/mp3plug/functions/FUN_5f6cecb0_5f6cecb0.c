/* Module: mp3plug.dll
   Function: FUN_5f6cecb0
   Address: 5f6cecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f6cecb0(uint *param_1,uint *param_2)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_14;
  uint uStack_10;
  
  if (param_1 != (uint *)0x0) {
    if ((*param_2 != 0) && (*param_2 != 1)) {
      return 0;
    }
    uVar3 = param_2[1];
    if (((uVar3 != 2) && (uVar3 != 1)) && (uVar3 != 0)) {
      return 0;
    }
    if (param_2[6] < 0x65) {
      if (param_2[6] == 0) {
        if ((float)param_1[0x2c] * _DAT_5f75c070 < (float)param_2[10]) {
          return 0;
        }
      }
      else if ((float)param_1[1] * _DAT_5f75c06c < (float)param_2[10]) {
        return 0;
      }
      param_1[0x1e] = *param_2;
      param_1[0x1f] = param_2[1];
      param_1[0x20] = param_2[2];
      param_1[0x21] = param_2[3];
      param_1[0x22] = param_2[4];
      param_1[0x23] = param_2[5];
      param_1[0x24] = param_2[6];
      param_1[0x25] = param_2[7];
      param_1[0x26] = param_2[8];
      param_1[0x27] = param_2[9];
      param_1[0x28] = param_2[10];
      param_1[0x29] = param_2[0xb];
      param_1[0x2a] = param_2[0xc];
      param_1[0x2b] = param_2[0xd];
      if (param_2[6] != 0) {
        dVar1 = (double)(float)param_1[1];
        uStack_10 = (uint)((ulonglong)dVar1 >> 0x20);
        local_14 = SUB84(dVar1,0);
        uVar3 = uStack_10 >> 0x14 & 0x7ff;
        if (uVar3 < 0x3ff) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uStack_10 << 0xb | local_14 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f)
          ;
          if ((longlong)dVar1 < 0) {
            uVar3 = -uVar3;
          }
        }
        param_1[0x2c] = uVar3;
        param_1[0x2d] = *param_1;
        param_1[0x2e] = 0;
      }
      uVar2 = FUN_5f6ce270(param_1);
      return uVar2;
    }
  }
  return 0;
}


