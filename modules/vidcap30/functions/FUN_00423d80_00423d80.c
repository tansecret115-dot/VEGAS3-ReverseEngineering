/* Module: vidcap30.exe
   Function: FUN_00423d80
   Address: 00423d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423d80(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8 [2];
  
  if ((param_1[0x4e] & 4U) == 0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 == 1) {
    piVar1 = param_1 + 0x54;
    *piVar1 = *param_2;
    param_1[0x55] = param_2[1];
    param_1[0x56] = param_2[2];
    param_1[0x57] = param_2[3];
    param_1[0x57] = param_1[0x59] + param_1[0x55];
    piVar3 = param_1 + 0x62;
    *piVar3 = *piVar1;
    param_1[99] = param_1[0x55];
    param_1[100] = param_1[0x56];
    param_1[0x65] = param_1[0x57];
    iVar2 = (param_1[0x4c] + -0xd) / 2;
    iVar4 = param_1[99] + iVar2;
    iVar2 = *piVar3 + iVar2;
    *piVar3 = iVar2;
    param_1[0x65] = iVar4 + 0xd;
    param_1[100] = iVar2 + 0xd;
    param_1[99] = iVar4;
    param_1[0x5e] = *piVar3;
    param_1[0x5f] = param_1[99];
    param_1[0x60] = param_1[100];
    param_1[0x61] = param_1[0x65];
    piVar3 = param_1 + 5;
    *piVar3 = *piVar1;
    param_1[6] = param_1[0x55];
    param_1[7] = param_1[0x56];
    param_1[8] = param_1[0x57];
    iVar2 = ((param_1[7] - *piVar3) - param_1[0x4b]) / 2 + *piVar3;
    *piVar3 = iVar2;
    param_1[7] = iVar2 + param_1[0x4b];
    param_1[8] = param_1[6] + param_1[0x4c];
    return;
  }
  if (iVar2 == 2) {
    if ((((byte)param_1[3] & 0xe) == 0xe) || (((byte)param_1[3] & 4) == 4)) {
      piVar3 = param_1 + 0x54;
      *piVar3 = *param_2;
      param_1[0x55] = param_2[1];
      param_1[0x56] = param_2[2];
      param_1[0x57] = param_2[3];
      param_1[0x56] = param_1[0x58] + *piVar3;
      param_1[0x57] = param_1[0x59] + param_1[0x55];
      param_1 = param_1 + 5;
      goto LAB_00423efa;
    }
  }
  else if (iVar2 != 3) {
    if (iVar2 == 4) {
      piVar3 = param_1 + 0x54;
      *piVar3 = *param_2;
      param_1[0x55] = param_2[1];
      param_1[0x56] = param_2[2];
      param_1[0x57] = param_2[3];
      param_1[0x56] = param_1[0x4b] + *piVar3;
      param_1[0x57] = param_1[0x55] + param_1[0x4c];
      piVar1 = param_1 + 0x62;
      *piVar1 = *piVar3;
      param_1[99] = param_1[0x55];
      param_1[100] = param_1[0x56];
      param_1[0x65] = param_1[0x57];
      iVar2 = (param_1[0x4c] + -0xd) / 2;
      iVar4 = *piVar1 + iVar2;
      *piVar1 = iVar4;
      param_1[100] = iVar4 + 0xd;
      iVar2 = param_1[99] + iVar2;
      param_1[99] = iVar2;
      param_1[0x65] = iVar2 + 0xd;
      param_1[5] = *piVar3;
      param_1[6] = param_1[0x55];
      param_1[7] = param_1[0x56];
      param_1[8] = param_1[0x57];
      _SfGetFontSize_8(param_1[0x4d],local_8);
      param_1[5] = param_1[100] + local_8[0];
      param_1[0x5e] = *piVar3;
      param_1[0x5f] = param_1[0x55];
      param_1[0x60] = param_1[0x56];
      param_1[0x61] = param_1[0x57];
      return;
    }
    if (iVar2 == 5) {
      param_1[0x54] = *param_2;
      param_1[0x55] = param_2[1];
      param_1[0x56] = param_2[2];
      param_1[0x57] = param_2[3];
      param_1[0x56] = param_1[0x58] + param_1[0x54];
      iVar2 = FUN_00420340(param_1);
      param_1[0x56] = param_1[0x56] - iVar2 * param_1[0x80];
      param_1[0x57] = param_1[0x59] + param_1[0x55];
      return;
    }
    if (iVar2 == 6) {
      if (param_1[0xc0] == 0) {
        iVar2 = 0xe;
      }
      else {
        iVar2 = param_1[0xc3];
      }
      param_1[0x54] = *param_2;
      param_1[0x55] = param_2[1];
      param_1[0x56] = param_2[2];
      param_1[0x57] = param_2[3];
      param_1[0x57] = param_1[0x55] + iVar2;
      param_1[0x5e] = param_1[0x54];
      param_1[0x5f] = param_1[0x55];
      param_1[0x60] = param_1[0x56];
      param_1[0x61] = param_1[0x57];
      return;
    }
    if ((iVar2 != 7) && (iVar2 != 8)) {
      return;
    }
    param_1[0x54] = *param_2;
    param_1[0x55] = param_2[1];
    param_1[0x56] = param_2[2];
    param_1[0x57] = param_2[3];
    param_1[0x56] = param_1[0x58] + param_1[0x54];
    param_1[0x57] = param_1[0x59] + param_1[0x55];
    return;
  }
  piVar3 = param_1 + 5;
  *piVar3 = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  param_1[8] = param_2[3];
  param_1[7] = param_1[0x4b] + *piVar3;
  param_1[8] = param_1[0x4c] + param_1[6];
  param_1 = param_1 + 0x54;
LAB_00423efa:
  *param_1 = *piVar3;
  param_1[1] = piVar3[1];
  param_1[2] = piVar3[2];
  param_1[3] = piVar3[3];
  return;
}


