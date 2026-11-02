/* Module: mpgvout.001
   Function: FUN_1000353c
   Address: 1000353c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000353c(int *param_1)

{
  int iVar1;
  
  param_1[0x142] = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    if (iVar1 < 3) {
      param_1[0x141] = (int)FUN_100020dc;
      param_1[0x143] = (int)&LAB_10002654;
      param_1[0x144] = (int)&LAB_1000299c;
    }
    else {
      if (4 < iVar1) goto LAB_100035b2;
      param_1[0x141] = (int)&LAB_10002480;
      param_1[0x143] = (int)&LAB_10002654;
      param_1[0x144] = (int)&LAB_10002c88;
    }
    param_1[0x145] = (int)&LAB_10002f1c;
    param_1[0x146] = (int)&LAB_100031e8;
  }
LAB_100035b2:
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    param_1[0x14a] = (int)&LAB_1000a190;
  }
  else {
    param_1[0x14a] = (int)&LAB_1000a694;
  }
  param_1[0x14b] = (int)&DAT_1000e3a0;
  switch(param_1[0xb3] & 0xfe) {
  case 0:
    param_1[0x147] = (int)&LAB_1000d8a0;
    break;
  case 2:
    param_1[0x147] = (int)&LAB_10006a24;
    param_1[0x148] = (int)&LAB_100095d4;
    if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
LAB_10003684:
      param_1[0x14a] = (int)FUN_1000be64;
    }
    else {
      param_1[0x14a] = (int)&LAB_1000e24c;
    }
    goto LAB_1000368e;
  case 4:
  case 6:
    param_1[0x147] = (int)&LAB_10006a24;
    param_1[0x148] = (int)&LAB_100095d4;
    if ((*(byte *)(param_1 + 0xb3) & 1) == 0) goto LAB_10003684;
    param_1[0x14a] = (int)&LAB_1000e0e8;
LAB_1000368e:
    iVar1 = (*(code *)param_1[7])(param_1[0x154] * param_1[0x155]);
    param_1[0x18a] = iVar1;
    iVar1 = (*(code *)param_1[7])(param_1[0x154] * param_1[0x155]);
    param_1[0x18b] = iVar1;
    param_1[0x18c] = iVar1;
    param_1[0x14b] = (int)&LAB_1000e3a4;
    param_1[0x18d] = param_1[0x18a];
    break;
  case 8:
    param_1[0x147] = (int)&LAB_10005750;
    param_1[0x148] = (int)&LAB_100095d4;
    break;
  default:
    param_1[0x147] = (int)&LAB_10004688;
    param_1[0x148] = (int)&LAB_1000dac4;
  }
  param_1[0x149] = (int)&LAB_10008590;
  return;
}


