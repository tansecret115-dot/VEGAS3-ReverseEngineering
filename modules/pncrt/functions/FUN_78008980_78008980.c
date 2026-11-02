/* Module: pncrt.dll
   Function: FUN_78008980
   Address: 78008980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_78008980(short *param_1,undefined4 *param_2,short *param_3,int *param_4,int *param_5)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  uint uVar6;
  
  bVar3 = false;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (param_3 != (short *)0x0) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *param_5 = *param_5 + 1;
  if (*param_1 == 0x22) {
    sVar1 = param_1[1];
    while ((psVar5 = param_1 + 1, sVar1 != 0x22 && (sVar1 != 0))) {
      *param_5 = *param_5 + 1;
      if (param_3 != (short *)0x0) {
        *param_3 = *psVar5;
        param_3 = param_3 + 1;
      }
      sVar1 = param_1[2];
      param_1 = psVar5;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*psVar5 == 0x22) {
      psVar5 = param_1 + 2;
    }
  }
  else {
    do {
      psVar5 = param_1;
      *param_5 = *param_5 + 1;
      if (param_3 != (short *)0x0) {
        *param_3 = *psVar5;
        param_3 = param_3 + 1;
      }
      sVar1 = *psVar5;
      param_1 = psVar5 + 1;
      if (sVar1 == 0x20) break;
      if (sVar1 == 0) goto LAB_78008a56;
    } while (sVar1 != 9);
    if ((sVar1 != 0) && (psVar5 = param_1, param_3 != (short *)0x0)) {
      param_3[-1] = 0;
    }
  }
LAB_78008a56:
  bVar4 = false;
  while (*psVar5 != 0) {
    for (; (*psVar5 == 0x20 || (*psVar5 == 9)); psVar5 = psVar5 + 1) {
    }
    if (*psVar5 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    if (param_3 != (short *)0x0) {
      *param_3 = *psVar5;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
    while( true ) {
      uVar6 = 0;
      bVar2 = true;
      sVar1 = *psVar5;
      while (sVar1 == 0x5c) {
        psVar5 = psVar5 + 1;
        uVar6 = uVar6 + 1;
        sVar1 = *psVar5;
      }
      if (*psVar5 == 0x22) {
        if ((uVar6 & 1) == 0) {
          if ((bVar3) && (psVar5[1] == 0x22)) {
            psVar5 = psVar5 + 1;
          }
          else {
            bVar2 = false;
          }
          bVar3 = !bVar4;
          bVar4 = bVar3;
        }
        uVar6 = uVar6 >> 1;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (short *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      sVar1 = *psVar5;
      if ((sVar1 == 0) || ((!bVar3 && ((sVar1 == 0x20 || (sVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 != (short *)0x0) {
          *param_3 = sVar1;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      psVar5 = psVar5 + 1;
    }
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


