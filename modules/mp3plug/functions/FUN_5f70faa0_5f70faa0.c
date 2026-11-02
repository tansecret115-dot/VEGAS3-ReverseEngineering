/* Module: mp3plug.dll
   Function: FUN_5f70faa0
   Address: 5f70faa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f70faa0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((*param_1 != 0x28) || (*param_2 != 0x10)) || (*param_3 != 0x10)) {
    return 10;
  }
  if (param_4 == 0) {
    param_2[1] = 0;
    iVar3 = param_1[3];
    if (iVar3 < 0x5dc1) {
      uVar5 = 0x240;
    }
    else {
      uVar5 = 0x480;
    }
    iVar4 = ((uint)((int)(uVar5 * param_1[1]) >> 2) >> 0x1d) + uVar5 * param_1[1];
    iVar3 = (int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 3) / (longlong)iVar3) *
            ((param_3[1] /
             ((int)(param_1[6] * param_1[8] + ((uint)(param_1[6] * param_1[8] >> 2) >> 0x1d)) >> 3))
            / (int)((longlong)(ulonglong)uVar5 / (longlong)(iVar3 / param_1[7])));
    if (0 < iVar3) {
      param_2[1] = iVar3;
      return 0;
    }
  }
  else {
    param_3[1] = 0;
    iVar3 = param_1[3];
    if (iVar3 < 0x5dc1) {
      iVar4 = 0x240;
    }
    else {
      iVar4 = 0x480;
    }
    iVar1 = iVar4 * param_1[1] + ((uint)(iVar4 * param_1[1] >> 2) >> 0x1d);
    iVar1 = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 3) / (longlong)iVar3);
    iVar2 = param_2[1] / iVar1;
    if (param_2[1] % iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = (((int)(param_1[8] + ((uint)(param_1[8] >> 2) >> 0x1d)) >> 3) *
            iVar2 * param_1[6] * iVar4) / (iVar3 / param_1[7]);
    if (0 < iVar3) {
      param_3[1] = iVar3;
      return 0;
    }
  }
  return 8;
}


