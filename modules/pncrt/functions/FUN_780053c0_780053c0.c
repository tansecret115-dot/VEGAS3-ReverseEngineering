/* Module: pncrt.dll
   Function: FUN_780053c0
   Address: 780053c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_780053c0(undefined4 *param_1,DName *param_2,DName *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *this;
  char *pcVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  undefined4 local_28;
  uint local_24;
  DName local_20 [8];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  cVar9 = *DAT_78041aac;
  if (cVar9 == '\0') {
    FUN_78006450(&local_28,2);
    FUN_780068d0(&local_28,(-(param_4 != 0) & 4U) + 0x26);
    iVar1 = DName::isEmpty(param_2);
    if (iVar1 == 0) {
      FUN_780069e0(&local_28,param_2);
    }
    iVar1 = DName::isEmpty(param_3);
    if (iVar1 == 0) {
      iVar1 = DName::isEmpty(param_2);
      if (iVar1 == 0) {
        FUN_780068d0(&local_28,' ');
      }
      FUN_780069e0(&local_28,param_3);
    }
    uVar8 = ((int)(local_24 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
    uVar8 = (local_24 ^ uVar8) & 0x10 ^ uVar8;
    uVar8 = (local_24 ^ uVar8) & 0x20 ^ uVar8;
    param_1[1] = (local_24 ^ uVar8) & 0x40 ^ uVar8;
    *param_1 = local_28;
    return param_1;
  }
  if ((('5' < cVar9) && (cVar9 < ':')) || (cVar9 == '_')) {
    FUN_780061c0(local_20,(-(param_4 != 0) & 4U) + 0x26);
    iVar1 = DName::isEmpty(param_2);
    if (iVar1 == 0) {
      iVar1 = DName::isEmpty(param_3);
      if ((iVar1 != 0) || (((byte)param_3[4] & 0x10) == 0)) {
        FUN_780069e0(local_20,param_2);
      }
    }
    iVar1 = DName::isEmpty(param_3);
    if (iVar1 == 0) {
      FUN_780069e0(local_20,param_3);
    }
    FUN_78004eb0(param_1,local_20);
    return param_1;
  }
  FUN_78005780(&local_28,param_3,(-(param_4 != 0) & 4U) + 0x26,param_2,0);
  cVar9 = *DAT_78041aac;
  if (cVar9 == '\0') {
    FUN_78006140(param_1,2,(DName *)&local_28);
    return param_1;
  }
  if ((param_4 != 0) && (cVar9 == 'X')) {
    DAT_78041aac = DAT_78041aac + 1;
    iVar1 = DName::isEmpty((DName *)&local_28);
    if (iVar1 != 0) {
      FUN_780062b0(param_1,"void");
      return param_1;
    }
    pDVar4 = (DName *)&local_28;
    puVar6 = param_1;
    puVar2 = FUN_780062b0(local_20,"void ");
    FUN_78006750(puVar2,puVar6,pDVar4);
    return param_1;
  }
  if (cVar9 != 'Y') {
    FUN_78004550(param_1,(DName *)&local_28);
    return param_1;
  }
  DAT_78041aac = DAT_78041aac + 1;
  if (*DAT_78041aac != '\0') {
    iVar1 = FUN_78002060();
    if (iVar1 == 0) {
      pDVar4 = local_20;
      cVar9 = ']';
      puVar6 = local_18;
      uVar8 = 2;
      puVar2 = FUN_780061c0(local_10,'[');
      pvVar3 = (void *)FUN_78006820(puVar2,puVar6,uVar8);
      pDVar4 = (DName *)FUN_780065f0(pvVar3,(undefined4 *)pDVar4,cVar9);
      FUN_78004550(param_1,pDVar4);
      return param_1;
    }
    FUN_780061a0((undefined4 *)local_20);
    do {
      puVar6 = local_10;
      cVar9 = ']';
      pDVar4 = FUN_78001fb0(local_18);
      puVar2 = FUN_78006110(local_8,'[',pDVar4);
      pDVar4 = (DName *)FUN_780065f0(puVar2,puVar6,cVar9);
      FUN_780069e0(local_20,pDVar4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = DName::isEmpty((DName *)&local_28);
    if (iVar1 == 0) {
      pDVar4 = local_20;
      puVar6 = local_8;
      puVar2 = local_10;
      cVar9 = ')';
      puVar5 = FUN_78006110(local_18,'(',(DName *)&local_28);
      pvVar3 = (void *)FUN_780065f0(puVar5,puVar2,cVar9);
      puVar6 = (undefined4 *)FUN_78006750(pvVar3,puVar6,pDVar4);
      FUN_78006b80(local_20,puVar6);
    }
    FUN_78003de0(param_1,local_20);
    return param_1;
  }
  iVar1 = DName::isEmpty((DName *)&local_28);
  cVar9 = ']';
  cVar10 = ']';
  if (iVar1 == 0) {
    puVar6 = local_8;
    puVar2 = local_10;
    uVar8 = 2;
    puVar5 = local_18;
    pcVar7 = ")[";
    this = FUN_78006110((undefined4 *)local_20,'(',(DName *)&local_28);
    pvVar3 = (void *)FUN_780066a0(this,puVar5,pcVar7);
    pvVar3 = (void *)FUN_78006820(pvVar3,puVar2,uVar8);
    pDVar4 = (DName *)FUN_780065f0(pvVar3,puVar6,cVar9);
    FUN_78004550(param_1,pDVar4);
    return param_1;
  }
  puVar6 = local_8;
  puVar2 = local_10;
  uVar8 = 2;
  puVar5 = FUN_780061c0(local_18,'[');
  pvVar3 = (void *)FUN_78006820(puVar5,puVar2,uVar8);
  pDVar4 = (DName *)FUN_780065f0(pvVar3,puVar6,cVar10);
  FUN_78004550(param_1,pDVar4);
  return param_1;
}


