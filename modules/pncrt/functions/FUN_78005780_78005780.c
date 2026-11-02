/* Module: pncrt.dll
   Function: FUN_78005780
   Address: 78005780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl
FUN_78005780(undefined4 *param_1,DName *param_2,char param_3,DName *param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  DName *pDVar6;
  uint uVar7;
  uint uVar8;
  DName *pDVar9;
  undefined4 local_28;
  uint local_24;
  DName local_20 [8];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  cVar1 = *DAT_78041aac;
  if (cVar1 == '\0') {
    if (param_5 == 0) {
      iVar5 = DName::isEmpty(param_2);
      if (iVar5 == 0) {
        if ((((byte)param_2[4] & 0x10) == 0) && (iVar5 = DName::isEmpty(param_4), iVar5 == 0)) {
          pDVar6 = local_20;
          puVar2 = FUN_78006450(local_8,2);
          FUN_78006750(puVar2,(undefined4 *)pDVar6,param_4);
          puVar2 = param_1;
          pvVar3 = (void *)FUN_780065f0(local_20,local_10,' ');
          FUN_78006750(pvVar3,puVar2,param_2);
          return param_1;
        }
        puVar2 = param_1;
        puVar4 = FUN_78006450(local_8,2);
        FUN_78006750(puVar4,puVar2,param_2);
        return param_1;
      }
      iVar5 = DName::isEmpty(param_4);
      if (iVar5 == 0) {
        puVar2 = param_1;
        puVar4 = FUN_78006450(local_8,2);
        FUN_78006750(puVar4,puVar2,param_4);
        return param_1;
      }
    }
    FUN_78006450(param_1,2);
    return param_1;
  }
  uVar8 = (int)cVar1 - (((cVar1 < 'A') - 1 & 0x2b) + 0x16);
  DAT_78041aac = DAT_78041aac + 1;
  if (0x1f < uVar8) {
    FUN_78006450(param_1,1);
    return param_1;
  }
  FUN_780061c0(&local_28,param_3);
  if ((uVar8 & 0x10) != 0) {
    if (param_5 != 0) {
      FUN_78006450(param_1,1);
      return param_1;
    }
    if (param_3 == '\0') {
      if (*DAT_78041aac != '\0') {
        pDVar6 = (DName *)FUN_78001c40(local_18);
        FUN_78006af0(&local_28,pDVar6);
      }
    }
    else {
      pDVar6 = (DName *)&local_28;
      pDVar9 = local_20;
      puVar2 = FUN_780062b0(local_18,"::");
      FUN_78006750(puVar2,(undefined4 *)pDVar9,pDVar6);
      FUN_78006b80(&local_28,(undefined4 *)local_20);
      pDVar6 = (DName *)&local_28;
      if (*DAT_78041aac == '\0') {
        pDVar9 = local_20;
        puVar2 = FUN_78006450(local_18,2);
        FUN_78006750(puVar2,(undefined4 *)pDVar9,pDVar6);
        FUN_78006b80(&local_28,(undefined4 *)local_20);
      }
      else {
        puVar2 = local_18;
        pvVar3 = (void *)FUN_78001c40((undefined4 *)local_20);
        puVar2 = (undefined4 *)FUN_78006750(pvVar3,puVar2,pDVar6);
        FUN_78006b80(&local_28,puVar2);
      }
    }
    cVar1 = *DAT_78041aac;
    if (cVar1 == '\0') {
      FUN_78006a60(&local_28,2);
    }
    else {
      DAT_78041aac = DAT_78041aac + 1;
      if (cVar1 != '@') {
        FUN_78006450(param_1,1);
        return param_1;
      }
    }
  }
  if ((~DAT_78041abc & 2) == 0) {
    if (((byte)uVar8 & 0xc) == 0xc) {
      pDVar6 = (DName *)FUN_78003940(local_18);
      FUN_78006af0(&local_28,pDVar6);
    }
  }
  else if (((byte)uVar8 & 0xc) == 0xc) {
    if (param_5 != 0) {
      FUN_78006450(param_1,1);
      return param_1;
    }
    pDVar6 = (DName *)&local_28;
    puVar2 = local_18;
    puVar4 = FUN_78003940((undefined4 *)local_20);
    puVar2 = (undefined4 *)FUN_78006750(puVar4,puVar2,pDVar6);
    FUN_78006b80(&local_28,puVar2);
  }
  if ((uVar8 & 2) != 0) {
    pDVar6 = (DName *)&local_28;
    pDVar9 = local_20;
    puVar2 = FUN_780062b0(local_18,"volatile ");
    FUN_78006750(puVar2,(undefined4 *)pDVar9,pDVar6);
    FUN_78006b80(&local_28,(undefined4 *)local_20);
  }
  if ((uVar8 & 1) != 0) {
    pDVar6 = (DName *)&local_28;
    pDVar9 = local_20;
    puVar2 = FUN_780062b0(local_18,"const ");
    FUN_78006750(puVar2,(undefined4 *)pDVar9,pDVar6);
    FUN_78006b80(&local_28,(undefined4 *)local_20);
  }
  if (param_5 == 0) {
    iVar5 = DName::isEmpty(param_2);
    if (iVar5 == 0) {
      if ((((byte)param_2[4] & 0x10) == 0) && (iVar5 = DName::isEmpty(param_4), iVar5 == 0)) {
        pDVar6 = local_20;
        puVar2 = FUN_780061c0(local_18,' ');
        FUN_78006750(puVar2,(undefined4 *)pDVar6,param_4);
        puVar2 = local_10;
        pvVar3 = (void *)FUN_780065f0(local_20,local_8,' ');
        pDVar6 = (DName *)FUN_78006750(pvVar3,puVar2,param_2);
      }
      else {
        pDVar6 = local_20;
        puVar2 = FUN_780061c0(local_8,' ');
        FUN_78006750(puVar2,(undefined4 *)pDVar6,param_2);
        pDVar6 = local_20;
      }
    }
    else {
      iVar5 = DName::isEmpty(param_4);
      if (iVar5 != 0) goto LAB_78005a5a;
      pDVar6 = local_20;
      puVar2 = FUN_780061c0(local_8,' ');
      FUN_78006750(puVar2,(undefined4 *)pDVar6,param_4);
      pDVar6 = local_20;
    }
    FUN_780069e0(&local_28,pDVar6);
  }
LAB_78005a5a:
  uVar8 = local_24 | 0x10;
  uVar7 = ((int)(local_24 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar7 = (uVar8 ^ uVar7) & 0x10 ^ uVar7;
  uVar7 = (uVar8 ^ uVar7) & 0x20 ^ uVar7;
  param_1[1] = (uVar8 ^ uVar7) & 0x40 ^ uVar7;
  *param_1 = local_28;
  return param_1;
}


