/* Module: sfmarket2.dll
   Function: FUN_00444610
   Address: 00444610
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444610(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_1[4];
  iVar4 = 0;
  switch(*param_1) {
  case 1:
  case 5:
    iVar3 = 0x1e;
    break;
  case 2:
    iVar3 = 0x1e;
    if (((uVar2 < 2) && (param_1[3] == 0)) && ((uint)param_1[2] % 10 != 0)) {
      uVar2 = 2;
    }
    uVar1 = param_1[2];
    iVar4 = param_1[1] * 0x6c;
    if (uVar1 != 0) {
      iVar4 = iVar4 + ((uVar1 / 10) * 0x7fffffff + uVar1) * 2;
    }
    break;
  case 3:
    iVar3 = 0x19;
    break;
  case 4:
    iVar3 = 0x18;
    break;
  default:
    return 0;
  }
  return ((param_1[3] + (param_1[2] + param_1[1] * 0x3c) * 0x3c) * iVar3 - iVar4) + uVar2;
}


