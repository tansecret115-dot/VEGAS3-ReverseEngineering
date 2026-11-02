/* Module: sfmarket2.dll
   Function: FUN_004078b0
   Address: 004078b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004078b0(uint *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = *(short *)((int)param_1 + 2) != -1;
  if (bVar5) {
    psVar2 = (short *)((int)param_1 + 0x12);
    uVar4 = *param_1;
  }
  else {
    psVar2 = (short *)((int)param_1 + 0x1a);
    uVar4 = param_1[3];
  }
  sVar1 = *psVar2;
  if (sVar1 == -1) {
    psVar2 = psVar2 + 2;
  }
  else {
    while (psVar2 = psVar2 + 1, sVar1 != 0) {
      sVar1 = *psVar2;
    }
  }
  sVar1 = *psVar2;
  if (sVar1 == -1) {
    psVar2 = psVar2 + 2;
  }
  else {
    while (psVar2 = psVar2 + 1, sVar1 != 0) {
      sVar1 = *psVar2;
    }
  }
  sVar1 = *psVar2;
  while (psVar3 = psVar2 + 1, sVar1 != 0) {
    psVar2 = psVar3;
    sVar1 = *psVar3;
  }
  if ((uVar4 & 0x40) != 0) {
    if (bVar5) {
      psVar3 = psVar2 + 2;
    }
    else {
      psVar3 = psVar2 + 4;
    }
    sVar1 = *psVar3;
    while (psVar3 = psVar3 + 1, sVar1 != 0) {
      sVar1 = *psVar3;
    }
  }
  return (int)psVar3 + 3U & 0xfffffffc;
}


