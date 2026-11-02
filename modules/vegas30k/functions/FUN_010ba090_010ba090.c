/* Module: vegas30k.dll
   Function: FUN_010ba090
   Address: 010ba090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010ba090(byte *param_1,float *param_2,uint param_3,float param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    param_4 = param_4 * (float)_DAT_011db280;
    uVar3 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * param_4);
      *param_1 = (byte)iVar1;
      *param_1 = *param_1 ^ 0x80;
      if (iVar1 < -0x80) {
        *param_1 = 0x80;
        *param_1 = *param_1 ^ 0x80;
      }
      else if (0x7e < iVar1) {
        *param_1 = 0x7f;
        *param_1 = *param_1 ^ 0x80;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar3 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * param_4);
      iVar2 = (int)ROUND(param_2[1] * param_4);
      *param_1 = (byte)iVar1;
      *param_1 = *param_1 ^ 0x80;
      if (iVar1 < -0x80) {
        *param_1 = 0x80;
        *param_1 = *param_1 ^ 0x80;
      }
      else if (0x7e < iVar1) {
        *param_1 = 0x7f;
        *param_1 = *param_1 ^ 0x80;
      }
      param_1[1] = (byte)iVar2;
      param_1[1] = param_1[1] ^ 0x80;
      if (iVar2 < -0x80) {
        param_1[1] = 0x80;
        param_1[1] = param_1[1] ^ 0x80;
      }
      else if (0x7e < iVar2) {
        param_1[1] = 0x7f;
        param_1[1] = param_1[1] ^ 0x80;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


