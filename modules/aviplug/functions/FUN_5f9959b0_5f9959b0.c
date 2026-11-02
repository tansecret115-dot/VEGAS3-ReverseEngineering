/* Module: aviplug.dll
   Function: FUN_5f9959b0
   Address: 5f9959b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9959b0(undefined4 param_1,int param_2,int param_3,double param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_1) {
  case 0x10:
    break;
  case 0x11:
    iVar2 = ftol();
    if (-0x8001 < iVar2) {
      if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      *(short *)(param_2 + param_3 * 2) = (short)iVar2;
      return;
    }
    *(undefined2 *)(param_2 + param_3 * 2) = 0x8000;
    return;
  case 0x12:
    iVar2 = ftol();
    if (iVar2 < -0x800000) {
      iVar4 = -0x800000;
    }
    else {
      iVar4 = 0x7fffff;
      if (iVar2 < 0x800000) {
        iVar4 = iVar2;
      }
    }
    puVar1 = (undefined2 *)(param_2 + param_3 * 3);
    *puVar1 = (short)iVar4;
    *(char *)(puVar1 + 1) = (char)((uint)iVar4 >> 0x10);
    return;
  case 0x13:
    if (param_4 * _DAT_5f9ec2c8 < _DAT_5f9ec2e8) {
      *(undefined4 *)(param_2 + param_3 * 4) = 0x80000000;
      return;
    }
    if (param_4 * _DAT_5f9ec2c8 <= _DAT_5f9ec2e0) {
      uVar3 = ftol();
      *(undefined4 *)(param_2 + param_3 * 4) = uVar3;
      return;
    }
    *(undefined4 *)(param_2 + param_3 * 4) = 0x7fffffff;
    return;
  default:
    return;
  case 0x20:
    *(float *)(param_2 + param_3 * 4) = (float)param_4;
    return;
  case 0x21:
    *(double *)(param_2 + param_3 * 8) = param_4;
    return;
  case 0x30:
    iVar2 = ftol();
    if (-0x800001 < iVar2) {
      if (0x7fffff < iVar2) {
        iVar2 = 0x7fffff;
      }
      *(int *)(param_2 + param_3 * 4) = iVar2;
      return;
    }
    *(undefined4 *)(param_2 + param_3 * 4) = 0xff800000;
    return;
  }
  iVar2 = ftol();
  if (iVar2 < -0x80) {
    *(undefined1 *)(param_2 + param_3) = 0;
    return;
  }
  if (iVar2 < 0x80) {
    *(byte *)(param_2 + param_3) = (byte)iVar2 ^ 0x80;
    return;
  }
  *(undefined1 *)(param_2 + param_3) = 0xff;
  return;
}


