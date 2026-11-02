/* Module: sfppack1.dll
   Function: FUN_5cddf8c0
   Address: 5cddf8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cddf8c0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[0x17];
  if (uVar3 < 2) {
    return param_1[4];
  }
  if ((param_1[3] & 8) == 0) {
    uVar1 = param_1[0x18];
    if (param_2 < (int)(param_1[0x12] + uVar1)) {
      return param_1[4];
    }
    if ((int)(param_1[0x14] - uVar1) < param_2) {
      return param_1[5];
    }
    iVar2 = (param_2 - param_1[0x12]) - uVar1;
  }
  else {
    uVar1 = param_1[0x19];
    if (param_2 < (int)(param_1[0x13] + uVar1)) {
      return param_1[5];
    }
    if ((int)(param_1[0x15] - uVar1) < param_2) {
      return param_1[4];
    }
    iVar2 = (param_1[0x13] - param_2) + uVar1 + uVar3;
  }
  uVar3 = (int)(((longlong)iVar2 * (longlong)(int)(param_1[5] - param_1[4])) / (longlong)(int)uVar3)
          + param_1[4];
  if ((*param_1 & 0x80) != 0) {
    uVar3 = FUN_5cddf990(param_1,uVar3);
  }
  return uVar3;
}


