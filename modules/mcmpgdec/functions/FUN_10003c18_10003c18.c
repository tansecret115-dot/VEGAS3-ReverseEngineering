/* Module: mcmpgdec.dll
   Function: FUN_10003c18
   Address: 10003c18
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10003c18(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = param_1[4] & 7;
  iVar2 = param_1[4] - uVar3;
  param_1[2] = param_1[2] << (sbyte)uVar3;
  param_1[4] = iVar2;
  if (param_1[8] == 0) {
    if (iVar2 < 0x19) {
      do {
        if ((byte *)param_1[1] < (byte *)(param_1[3] + *param_1)) {
          param_1[2] = param_1[2] | (uint)*(byte *)param_1[1] << (0x18U - (char)param_1[4] & 0x1f);
          param_1[4] = param_1[4] + 8;
          param_1[1] = param_1[1] + 1;
        }
        else if (param_1[4] < 0x19) goto LAB_10003cb2;
      } while (param_1[4] < 0x19);
    }
    pbVar4 = (byte *)param_1[1];
    for (uVar3 = param_1[2]; (uVar3 & param_2) != param_3; uVar3 = uVar3 << 8 | (uint)bVar1) {
      if ((byte *)(param_1[3] + *param_1) <= pbVar4) {
        param_1[1] = (int)pbVar4;
        param_1[2] = uVar3;
        goto LAB_10003cb2;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    param_1[1] = (int)pbVar4;
    param_1[2] = uVar3;
  }
  else {
LAB_10003cb2:
    param_1[7] = 1;
    uVar3 = 0;
    param_1[8] = 1;
  }
  return uVar3;
}


