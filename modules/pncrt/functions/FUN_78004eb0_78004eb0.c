/* Module: pncrt.dll
   Function: FUN_78004eb0
   Address: 78004eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_78004eb0(undefined4 *param_1,DName *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  DName *pDVar6;
  char *pcVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  DName local_18 [8];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  cVar9 = *DAT_78041aac;
  if (cVar9 == '\0') {
    puVar5 = param_1;
    puVar2 = FUN_78006450(local_18,2);
    FUN_78006750(puVar2,puVar5,param_2);
    return param_1;
  }
  if (((cVar9 < '6') || ('9' < cVar9)) && (cVar9 != '_')) {
    FUN_78006450(param_1,1);
    return param_1;
  }
  uVar8 = (int)cVar9 - 0x36;
  pcVar7 = DAT_78041aac + 1;
  if (uVar8 == 0x29) {
    if (*pcVar7 == '\0') {
      DAT_78041aac = pcVar7;
      puVar5 = param_1;
      puVar2 = FUN_78006450(local_18,2);
      FUN_78006750(puVar2,puVar5,param_2);
      return param_1;
    }
    uVar8 = (int)*pcVar7 - 0x3d;
    DAT_78041aac = DAT_78041aac + 2;
    if ((3 < (int)uVar8) && ((int)uVar8 < 8)) goto LAB_78004f6b;
  }
  else {
    DAT_78041aac = pcVar7;
    if ((-1 < (int)uVar8) && ((int)uVar8 < 4)) goto LAB_78004f6b;
  }
  uVar8 = 0xffffffff;
LAB_78004f6b:
  if (uVar8 == 0xffffffff) {
    FUN_78006450(param_1,1);
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 4);
  local_2c = local_2c & 0xffffff80;
  local_30 = 0;
  uVar3 = local_34 ^ ((int)(uVar1 << 0x1c) >> 0x1c ^ local_34) & 0xf;
  uVar3 = uVar3 ^ (uVar3 ^ uVar1) & 0x10;
  uVar3 = uVar3 ^ (uVar3 ^ uVar1) & 0x20;
  local_34 = uVar3 ^ (uVar3 ^ uVar1) & 0x40;
  local_38 = *(undefined4 *)param_2;
  if ((uVar8 & 2) != 0) {
    pDVar4 = (DName *)&local_38;
    puVar5 = &local_28;
    puVar2 = FUN_780062b0(local_18,"::");
    FUN_78006750(puVar2,puVar5,pDVar4);
    FUN_78006b80(&local_38,&local_28);
    if (*DAT_78041aac == '\0') {
      pDVar4 = (DName *)&local_38;
      puVar5 = &local_28;
      puVar2 = FUN_78006450(local_8,2);
      FUN_78006750(puVar2,puVar5,pDVar4);
      puVar5 = &local_28;
    }
    else {
      pDVar4 = (DName *)FUN_78001c40((undefined4 *)local_18);
      puVar5 = &local_28;
      puVar2 = FUN_780061c0(local_10,' ');
      FUN_78006750(puVar2,puVar5,pDVar4);
      puVar5 = (undefined4 *)FUN_78006750(&local_28,local_8,(DName *)&local_38);
    }
    FUN_78006b80(&local_38,puVar5);
    if (*DAT_78041aac == '\0') {
      pDVar4 = (DName *)&local_38;
      puVar5 = param_1;
      puVar2 = FUN_78006450(local_8,2);
      FUN_78006750(puVar2,puVar5,pDVar4);
      return param_1;
    }
    if (*DAT_78041aac != '@') {
      FUN_78006450(param_1,1);
      return param_1;
    }
    DAT_78041aac = DAT_78041aac + 1;
    if ((DAT_78041abc & 0x60) == 0x60) {
      pDVar4 = (DName *)&local_28;
      iVar10 = 1;
      cVar9 = '\0';
      local_24 = local_24 & 0xffffff80;
      local_28 = 0;
      pDVar6 = (DName *)FUN_780061a0(local_8);
      FUN_78005780((undefined4 *)local_18,pDVar6,cVar9,pDVar4,iVar10);
      FUN_78006af0(&local_30,local_18);
    }
    else {
      pDVar4 = (DName *)&local_28;
      iVar10 = 1;
      cVar9 = '\0';
      local_24 = local_24 & 0xffffff80;
      local_28 = 0;
      pDVar6 = (DName *)FUN_780061a0(local_8);
      FUN_78005780((undefined4 *)local_18,pDVar6,cVar9,pDVar4,iVar10);
      FUN_78006b80(&local_30,(undefined4 *)local_18);
    }
  }
  if ((uVar8 & 4) != 0) {
    if ((~DAT_78041abc & 2) == 0) {
      pDVar4 = (DName *)FUN_78003940(local_8);
      FUN_78006af0(&local_38,pDVar4);
    }
    else {
      pDVar6 = (DName *)FUN_78003940(local_8);
      pDVar4 = local_18;
      puVar5 = FUN_780061c0(local_10,' ');
      FUN_78006750(puVar5,(undefined4 *)pDVar4,pDVar6);
      puVar5 = (undefined4 *)FUN_78006750(local_18,&local_28,(DName *)&local_38);
      FUN_78006b80(&local_38,puVar5);
    }
  }
  if ((~DAT_78041abc & 2) == 0) {
    pDVar4 = (DName *)FUN_78003b60(local_8);
    FUN_78006af0(&local_38,pDVar4);
  }
  else {
    pDVar4 = (DName *)&local_38;
    puVar5 = local_8;
    puVar2 = FUN_78003b60(local_10);
    puVar5 = (undefined4 *)FUN_78006750(puVar2,puVar5,pDVar4);
    FUN_78006b80(&local_38,puVar5);
  }
  iVar10 = DName::isEmpty(param_2);
  if (iVar10 == 0) {
    pDVar4 = (DName *)&local_38;
    pDVar6 = local_18;
    puVar5 = FUN_780061c0(local_8,'(');
    FUN_78006750(puVar5,(undefined4 *)pDVar6,pDVar4);
    puVar5 = (undefined4 *)FUN_780065f0(local_18,local_10,')');
    FUN_78006b80(&local_38,puVar5);
  }
  puVar5 = (undefined4 *)FUN_78006050(&DAT_78041a90,8,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = puVar5[1] & 0xffffff80;
  }
  FUN_78003c80(&local_20,(int)puVar5);
  pDVar6 = (DName *)FUN_78004140(local_8);
  pDVar4 = local_18;
  puVar2 = FUN_780061c0(local_10,'(');
  FUN_78006750(puVar2,(undefined4 *)pDVar4,pDVar6);
  pDVar4 = (DName *)FUN_780065f0(local_18,&local_28,')');
  FUN_780069e0(&local_38,pDVar4);
  if ((((byte)_DAT_78041abc & 0x60) != 0x60) && ((uVar8 & 2) != 0)) {
    FUN_780069e0(&local_38,(DName *)&local_30);
  }
  if ((~_DAT_78041abc & 0x100) == 0) {
    pDVar4 = (DName *)FUN_78004470(local_8);
    FUN_78006af0(&local_38,pDVar4);
  }
  else {
    pDVar4 = (DName *)FUN_78004470(local_8);
    FUN_780069e0(&local_38,pDVar4);
  }
  if (puVar5 == (undefined4 *)0x0) {
    FUN_78006450(param_1,3);
    return param_1;
  }
  FUN_78006b80(puVar5,&local_38);
  uVar8 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar8 = (local_1c ^ uVar8) & 0x10 ^ uVar8;
  uVar8 = (local_1c ^ uVar8) & 0x20 ^ uVar8;
  param_1[1] = (local_1c ^ uVar8) & 0x40 ^ uVar8;
  *param_1 = local_20;
  return param_1;
}


