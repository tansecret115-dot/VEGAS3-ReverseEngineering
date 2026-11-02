/* Module: mpgvout.003
   Function: FUN_10003534
   Address: 10003534
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003534(int *param_1)

{
  int iVar1;
  
  param_1[0x142] = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    if (iVar1 < 3) {
      param_1[0x141] = (int)FUN_100020d4;
      param_1[0x143] = (int)&LAB_1000264c;
      param_1[0x144] = (int)&LAB_10002994;
    }
    else {
      if (4 < iVar1) goto LAB_100035aa;
      param_1[0x141] = (int)&LAB_10002478;
      param_1[0x143] = (int)&LAB_1000264c;
      param_1[0x144] = (int)&LAB_10002c80;
    }
    param_1[0x145] = (int)&LAB_10002f14;
    param_1[0x146] = (int)&LAB_100031e0;
  }
LAB_100035aa:
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    param_1[0x14a] = (int)&LAB_1000a298;
  }
  else {
    param_1[0x14a] = (int)&LAB_1000a79c;
  }
  param_1[0x14b] = (int)&DAT_1000e41c;
  switch(param_1[0xb3] & 0xfe) {
  case 0:
    param_1[0x147] = (int)&LAB_1000d934;
    break;
  case 2:
    param_1[0x147] = (int)&LAB_10006afc;
    param_1[0x148] = (int)&LAB_100096c0;
    if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
LAB_1000367c:
      param_1[0x14a] = (int)FUN_1000bf44;
    }
    else {
      param_1[0x14a] = (int)&LAB_1000e2cc;
    }
    goto LAB_10003686;
  case 4:
  case 6:
    param_1[0x147] = (int)&LAB_10006afc;
    param_1[0x148] = (int)&LAB_100096c0;
    if ((*(byte *)(param_1 + 0xb3) & 1) == 0) goto LAB_1000367c;
    param_1[0x14a] = (int)&LAB_1000e168;
LAB_10003686:
    iVar1 = (*(code *)param_1[7])(param_1[0x154] * param_1[0x155]);
    param_1[0x18a] = iVar1;
    iVar1 = (*(code *)param_1[7])(param_1[0x154] * param_1[0x155]);
    param_1[0x18b] = iVar1;
    param_1[0x18c] = iVar1;
    param_1[0x14b] = (int)&LAB_1000e420;
    param_1[0x18d] = param_1[0x18a];
    break;
  case 8:
    param_1[0x147] = (int)&LAB_10005828;
    param_1[0x148] = (int)&LAB_100096c0;
    break;
  default:
    param_1[0x147] = (int)&LAB_1000475c;
    param_1[0x148] = (int)&LAB_1000db58;
  }
  param_1[0x149] = (int)&LAB_10008680;
  return;
}


