/* Module: sfpaplug.dll
   Function: FUN_0041f100
   Address: 0041f100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f100(byte *param_1,double *param_2,uint param_3,float param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    dVar3 = (double)(param_4 * (float)_DAT_00453690);
    uVar4 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * dVar3);
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
      if (uVar4 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * dVar3);
      iVar2 = (int)ROUND(param_2[1] * dVar3);
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
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


