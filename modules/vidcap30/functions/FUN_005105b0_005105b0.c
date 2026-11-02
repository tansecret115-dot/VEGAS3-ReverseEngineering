/* Module: vidcap30.exe
   Function: FUN_005105b0
   Address: 005105b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005105b0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  uVar4 = param_1[8] - param_1[6];
  uVar3 = param_1[9] - param_1[7];
  if ((param_1[10] != uVar4) || (param_1[0xb] != uVar3)) {
    bVar1 = true;
  }
  if ((*param_1 & 0x800) != 0) {
    param_1[1] = ((uint)((int)uVar4 < (int)uVar3) ^ param_1[1]) & 1 ^ param_1[1];
  }
  if ((*param_1 & 0x80) != 0) {
    if ((param_1[1] & 1) == 0) {
      uVar2 = _MeterInst_Message_16(param_1,0x61a,0,0);
      if ((int)uVar3 < (int)uVar2) {
        param_1[9] = uVar2 + param_1[7];
        uVar3 = uVar2;
      }
    }
    else {
      uVar2 = _MeterInst_Message_16(param_1,0x61a,0,0);
      if ((int)uVar4 < (int)uVar2) {
        param_1[8] = param_1[6] + uVar2;
        uVar4 = uVar2;
      }
    }
  }
  param_1[10] = uVar4;
  param_1[0xb] = uVar3;
  if (bVar1) {
    FUN_0050f1d0(param_1);
  }
  return;
}


