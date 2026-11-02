/* Module: wmfplug2.dll
   Function: FUN_0043f2a0
   Address: 0043f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f2a0(HKEY param_1,LPCSTR param_2,DWORD param_3,uint param_4)

{
  DWORD DVar1;
  LSTATUS LVar2;
  undefined3 extraout_var;
  int iVar3;
  LPCLSID pCVar4;
  LPCLSID pCVar5;
  short *psVar6;
  short *psVar7;
  bool bVar8;
  DWORD local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DVar1 = param_3;
  pCVar5 = (LPCLSID)(param_3 + 4);
  FUN_0043f540(param_2,pCVar5);
  iVar3 = 5;
  bVar8 = true;
  pCVar4 = pCVar5;
  psVar6 = &DAT_0047af70;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = (short)pCVar4->Data1 == *psVar6;
    pCVar4 = (LPCLSID)((int)&pCVar4->Data1 + 2);
    psVar6 = psVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar3 = 5;
    bVar8 = true;
    pCVar4 = pCVar5;
    psVar6 = &DAT_0047aec0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = (short)pCVar4->Data1 == *psVar6;
      pCVar4 = (LPCLSID)((int)&pCVar4->Data1 + 2);
      psVar6 = psVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = 5;
      bVar8 = true;
      pCVar4 = pCVar5;
      psVar6 = &DAT_0047aef0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = (short)pCVar4->Data1 == *psVar6;
        pCVar4 = (LPCLSID)((int)&pCVar4->Data1 + 2);
        psVar6 = psVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar3 = 5;
        bVar8 = true;
        psVar6 = &DAT_0047af00;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = (short)pCVar5->Data1 == *psVar6;
          pCVar5 = (LPCLSID)((int)&pCVar5->Data1 + 2);
          psVar6 = psVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
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
            bVar8 = FUN_0042fd00((LPCSTR)(DVar1 + 0x120));
            if (CONCAT31(extraout_var,bVar8) != 0) {
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
              bVar8 = true;
              psVar6 = (short *)(DVar1 + 4);
              psVar7 = &DAT_0047aea0;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *psVar6 == *psVar7;
                psVar6 = psVar6 + 1;
                psVar7 = psVar7 + 1;
              } while (bVar8);
              if ((bVar8) && ((*(uint *)(DVar1 + 0x244) & 2) == 0)) {
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
              iVar3 = FUN_0043f580(param_2,DVar1,param_4);
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


