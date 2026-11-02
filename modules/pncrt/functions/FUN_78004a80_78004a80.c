/* Module: pncrt.dll
   Function: FUN_78004a80
   Address: 78004a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_78004a80(undefined4 *param_1,uint param_2)

{
  char cVar1;
  DName *pDVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  DName *pDVar7;
  char *pcVar8;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  DName local_48 [8];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  DName local_20 [8];
  DName local_18 [8];
  undefined4 local_10 [2];
  undefined1 local_8 [8];
  
  local_54 = local_54 & 0xffffff80;
  local_58 = 0;
  if (param_2 != 0) {
    if (param_2 == 0xffff) {
      FUN_78006450(param_1,1);
      return param_1;
    }
    if (param_2 == 0xfffe) {
      FUN_78006be0(&local_58,2);
    }
    else if (((byte)param_2 & 0xc) == 0xc) {
      if (((~_DAT_78041abc & 2) == 0) || ((~_DAT_78041abc & 0x400) == 0)) {
        pDVar2 = (DName *)FUN_78003940((undefined4 *)local_20);
        FUN_78006af0(&local_58,pDVar2);
      }
      else {
        puVar3 = FUN_78003940((undefined4 *)local_18);
        FUN_78006b80(&local_58,puVar3);
      }
    }
  }
  pcVar6 = DAT_78041aac + 1;
  switch(*DAT_78041aac) {
  case '\0':
    pDVar2 = (DName *)&local_58;
    puVar3 = local_40;
    puVar4 = FUN_780062b0(local_20,"`unknown ecsu\'");
    FUN_78006750(puVar4,puVar3,pDVar2);
    FUN_78006820(local_40,param_1,2);
    return param_1;
  case 'T':
    if ((_DAT_78041abc & 0x1000) == 0) {
      pDVar2 = (DName *)&local_58;
      puVar3 = local_38;
      DAT_78041aac = pcVar6;
      puVar4 = FUN_780062b0(local_20,"union ");
      FUN_78006750(puVar4,puVar3,pDVar2);
      FUN_78006b80(&local_58,local_38);
      pcVar6 = DAT_78041aac;
    }
    break;
  case 'U':
    if ((_DAT_78041abc & 0x1000) == 0) {
      pDVar2 = (DName *)&local_58;
      puVar3 = local_30;
      DAT_78041aac = pcVar6;
      puVar4 = FUN_780062b0(local_20,"struct ");
      FUN_78006750(puVar4,puVar3,pDVar2);
      FUN_78006b80(&local_58,local_30);
      pcVar6 = DAT_78041aac;
    }
    break;
  case 'V':
    if ((_DAT_78041abc & 0x1000) == 0) {
      pDVar2 = (DName *)&local_58;
      puVar3 = local_28;
      DAT_78041aac = pcVar6;
      puVar4 = FUN_780062b0(local_20,"class ");
      FUN_78006750(puVar4,puVar3,pDVar2);
      FUN_78006b80(&local_58,local_28);
      pcVar6 = DAT_78041aac;
    }
    break;
  case 'W':
    local_50 = 0;
    local_4c = local_4c & 0xffffff80;
    if (*pcVar6 == '\0') {
      uVar5 = 2;
LAB_78004dbf:
      DAT_78041aac = pcVar6;
      FUN_78006450(local_48,uVar5);
      goto LAB_78004dc8;
    }
    DAT_78041aac = pcVar6;
    switch(*pcVar6) {
    case '0':
    case '1':
      pcVar8 = "char ";
      break;
    case '2':
    case '3':
      pcVar8 = "short ";
      break;
    case '4':
      goto switchD_78004d2d_caseD_34;
    case '5':
      pcVar8 = "int ";
      break;
    case '6':
    case '7':
      pcVar8 = "long ";
      break;
    default:
      uVar5 = 1;
      goto LAB_78004dbf;
    }
    FUN_78006b50(&local_50,pcVar8);
switchD_78004d2d_caseD_34:
    cVar1 = *DAT_78041aac;
    DAT_78041aac = DAT_78041aac + 1;
    switch(cVar1) {
    case '1':
    case '3':
    case '5':
    case '7':
      puVar3 = FUN_78006170(local_10,"unsigned ",(DName *)&local_50);
      FUN_78006b80(&local_50,puVar3);
    }
    FUN_78003a20((undefined4 *)local_20);
    FUN_78006750(&local_50,(undefined4 *)local_48,local_20);
LAB_78004dc8:
    pDVar2 = (DName *)&local_58;
    pDVar7 = local_18;
    puVar3 = FUN_780062b0(local_8,"enum ");
    FUN_78006750(puVar3,(undefined4 *)pDVar7,pDVar2);
    FUN_78006750(local_18,param_1,local_48);
    return param_1;
  }
  DAT_78041aac = pcVar6;
  if ((param_2 & 2) != 0) {
    pDVar2 = (DName *)&local_58;
    pDVar7 = local_18;
    puVar3 = FUN_780062b0(local_8,"volatile ");
    FUN_78006750(puVar3,(undefined4 *)pDVar7,pDVar2);
    FUN_78006b80(&local_58,(undefined4 *)local_18);
  }
  if ((param_2 & 1) != 0) {
    pDVar2 = (DName *)&local_58;
    pDVar7 = local_18;
    puVar3 = FUN_780062b0(local_8,"const ");
    FUN_78006750(puVar3,(undefined4 *)pDVar7,pDVar2);
    FUN_78006b80(&local_58,(undefined4 *)local_18);
  }
  FUN_78003a20((undefined4 *)local_18);
  FUN_780069e0(&local_58,local_18);
  uVar5 = ((int)(local_54 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar5 = (local_54 ^ uVar5) & 0x10 ^ uVar5;
  uVar5 = (local_54 ^ uVar5) & 0x20 ^ uVar5;
  param_1[1] = (local_54 ^ uVar5) & 0x40 ^ uVar5;
  *param_1 = local_58;
  return param_1;
}


