/* Module: vegas30k.dll
   Function: FUN_01044cb0
   Address: 01044cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01044cb0(HKEY param_1,undefined4 param_2,DWORD param_3,undefined4 param_4)

{
  DWORD DVar1;
  LSTATUS LVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  bool bVar7;
  DWORD local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DVar1 = param_3;
  psVar5 = (short *)(param_3 + 4);
  FUN_01044f50(param_2,psVar5);
  iVar3 = 5;
  bVar7 = true;
  psVar4 = psVar5;
  psVar6 = &DAT_011da300;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *psVar4 == *psVar6;
    psVar4 = psVar4 + 1;
    psVar6 = psVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar3 = 5;
    bVar7 = true;
    psVar4 = psVar5;
    psVar6 = &DAT_011da250;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *psVar4 == *psVar6;
      psVar4 = psVar4 + 1;
      psVar6 = psVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar3 = 5;
      bVar7 = true;
      psVar4 = psVar5;
      psVar6 = &DAT_011da280;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *psVar4 == *psVar6;
        psVar4 = psVar4 + 1;
        psVar6 = psVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar3 = 5;
        bVar7 = true;
        psVar4 = &DAT_011da290;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *psVar5 == *psVar4;
          psVar5 = psVar5 + 1;
          psVar4 = psVar4 + 1;
        } while (bVar7);
        if (!bVar7) {
          *(undefined4 *)(DVar1 + 0x268) = 0;
          *(undefined4 *)(DVar1 + 0x2a4) = 0;
          *(undefined4 *)(DVar1 + 0x2e0) = 0;
          *(undefined4 *)(DVar1 + 0x31c) = 0;
          local_10 = 4;
          param_3 = 4;
          RegQueryValueExA(param_1,"Access",(LPDWORD)0x0,&param_3,(LPBYTE)(DVar1 + 0x230),&local_10)
          ;
          *(undefined4 *)(DVar1 + 0x238) = *(undefined4 *)(DVar1 + 0x230);
          local_10 = 4;
          param_3 = 4;
          RegQueryValueExA(param_1,"StreamType",(LPDWORD)0x0,&param_3,(LPBYTE)(DVar1 + 0x234),
                           &local_10);
          local_10 = 0x104;
          param_3 = 1;
          LVar2 = RegQueryValueExA(param_1,"Path",(LPDWORD)0x0,&param_3,(LPBYTE)(DVar1 + 0x120),
                                   &local_10);
          if ((LVar2 == 0) && (param_3 == 1)) {
            iVar3 = _SfDoesFileExist_4(DVar1 + 0x120);
            if (iVar3 != 0) {
              local_c = 0;
              local_10 = 4;
              param_3 = 4;
              *(undefined4 *)(DVar1 + 0x23c) = 0xffffffff;
              LVar2 = RegQueryValueExA(param_1,"AppLevel",(LPDWORD)0x0,&param_3,(LPBYTE)&local_c,
                                       &local_10);
              if (((LVar2 == 0) && (param_3 == 4)) && (local_10 == 4)) {
                *(undefined4 *)(DVar1 + 0x23c) = local_c;
              }
              local_8 = 0;
              local_10 = 4;
              param_3 = 4;
              *(undefined4 *)(DVar1 + 0x244) = 0;
              LVar2 = RegQueryValueExA(param_1,"Flags",(LPDWORD)0x0,&param_3,(LPBYTE)&local_8,
                                       &local_10);
              if (((LVar2 == 0) && (param_3 == 4)) && (local_10 == 4)) {
                *(undefined4 *)(DVar1 + 0x244) = local_8;
              }
              iVar3 = 5;
              bVar7 = true;
              psVar5 = (short *)(DVar1 + 4);
              psVar4 = &DAT_011da230;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar7 = *psVar5 == *psVar4;
                psVar5 = psVar5 + 1;
                psVar4 = psVar4 + 1;
              } while (bVar7);
              if ((bVar7) && ((*(uint *)(DVar1 + 0x244) & 2) == 0)) {
                *(uint *)(DVar1 + 0x244) = *(uint *)(DVar1 + 0x244) | 1;
              }
              local_4 = 0;
              local_10 = 4;
              param_3 = 4;
              *(undefined4 *)(DVar1 + 0x240) = 0;
              if (*(int *)(DVar1 + 0x340) == 2) {
                LVar2 = RegQueryValueExA(param_1,"BetaBuild",(LPDWORD)0x0,&param_3,(LPBYTE)&local_4,
                                         &local_10);
                if (((LVar2 == 0) && (param_3 == 4)) && (local_10 == 4)) {
                  *(undefined4 *)(DVar1 + 0x240) = local_4;
                }
              }
              iVar3 = FUN_01044f90(param_2,DVar1,param_4);
              if (iVar3 == 0) {
                *(undefined4 *)(DVar1 + 0x24c) = 1;
                *(uint *)(DVar1 + 0x244) = *(uint *)(DVar1 + 0x244) | 1;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


