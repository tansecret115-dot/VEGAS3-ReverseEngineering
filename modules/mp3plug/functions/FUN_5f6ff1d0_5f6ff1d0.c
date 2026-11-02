/* Module: mp3plug.dll
   Function: FUN_5f6ff1d0
   Address: 5f6ff1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_5f6ff1d0(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = DAT_5f7474d0;
LAB_5f6ff1f0:
  iVar3 = param_2;
  iVar2 = param_3;
  if (iVar1 * (iVar2 / iVar1) - iVar2 == 0) goto code_r0x5f6ff205;
  goto LAB_5f6ff220;
code_r0x5f6ff205:
  param_3 = iVar2 / iVar1;
  param_2 = iVar3 / iVar1;
  if (iVar1 * (iVar3 / iVar1) - iVar3 == 0) goto LAB_5f6ff1f0;
LAB_5f6ff220:
  uVar4 = uVar4 + 1;
  if (uVar4 < 8) {
    iVar1 = (&DAT_5f7474d0)[uVar4];
    param_3 = iVar2;
    param_2 = iVar3;
    goto LAB_5f6ff1f0;
  }
  param_1[1] = iVar3;
  *param_1 = iVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((iVar3 < iVar2 * *param_5) || ((param_5[param_4 + -1] + 8) * iVar2 < iVar3)) {
    return 1;
  }
  iVar1 = 0;
  param_1[6] = -1;
  if (0 < param_4) {
    do {
      if (iVar2 * param_5[iVar1] - iVar3 == 0) {
        param_1[7] = iVar1;
        param_1[6] = iVar1;
        break;
      }
      if ((iVar2 * param_5[iVar1] < iVar3) &&
         ((param_4 == iVar1 + 1 ||
          (iVar2 * param_5[iVar1 + 1] - iVar3 != 0 && iVar3 <= iVar2 * param_5[iVar1 + 1])))) {
        param_1[6] = iVar1;
        if (param_4 != iVar1 + 1) {
          iVar1 = iVar1 + 1;
        }
        param_1[7] = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  param_1[8] = param_5[param_1[6]];
  param_1[9] = param_5[param_1[7]];
  param_1[5] = param_6;
  return 0;
}


