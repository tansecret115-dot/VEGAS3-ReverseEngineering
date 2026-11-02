/* Module: pncrt.dll
   Function: FUN_78001690
   Address: 78001690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78001690(undefined4 *param_1)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  DName *pDVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  DName *pDVar9;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined1 local_70 [8];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined1 local_28 [8];
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  int local_10 [2];
  undefined4 local_8 [2];
  
  local_90 = 0;
  local_88 = 0;
  bVar2 = false;
  local_8c = local_8c & 0xffffff80;
  local_84 = local_84 & 0xffffff80;
  pcVar3 = DAT_78041aac + 1;
  switch(*DAT_78041aac) {
  case '\0':
switchD_780016e8_caseD_0:
    DAT_78041aac = pcVar3 + -1;
    uVar12 = 2;
    goto LAB_78001b0e;
  default:
    goto switchD_780016e8_caseD_1;
  case '0':
  case '1':
    DAT_78041aac = pcVar3;
    puVar4 = (undefined4 *)FUN_78001540(local_10);
    FUN_78006b80(&local_90,puVar4);
    DAT_78041aac = pcVar3;
    iVar7 = DName::isEmpty((DName *)&local_90);
    if ((iVar7 == 0) && (DAT_78041aac[-1] == '1')) {
      pDVar5 = (DName *)&local_90;
      puVar4 = local_78;
      puVar8 = FUN_780061c0(local_80,'~');
      FUN_78006750(puVar8,puVar4,pDVar5);
      FUN_78006b80(&local_90,local_78);
    }
    uVar12 = param_1[1];
    goto LAB_78001ad1;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    cVar10 = *DAT_78041aac;
    DAT_78041aac = pcVar3;
    FUN_78006b50(&local_90,(char *)(&RemoveDirectoryW_exref)[cVar10]);
    pcVar3 = DAT_78041aac;
    break;
  case 'B':
    bVar2 = true;
  case 'A':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
    cVar10 = *DAT_78041aac;
    DAT_78041aac = pcVar3;
    FUN_78006b50(&local_90,(char *)(&GetCurrentDirectoryW_exref)[cVar10]);
    pcVar3 = DAT_78041aac;
    break;
  case '_':
    cVar10 = *pcVar3;
    pcVar3 = DAT_78041aac + 2;
    switch(cVar10) {
    case '\0':
      goto switchD_780016e8_caseD_0;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      pcVar1 = DAT_78041aac + 1;
      DAT_78041aac = pcVar3;
      FUN_78006b50(&local_90,*(char **)("new_p == 0" + *pcVar1 * 4));
      pcVar3 = DAT_78041aac;
      break;
    case '7':
    case '8':
    case '9':
      pcVar1 = DAT_78041aac + 1;
      DAT_78041aac = pcVar3;
      FUN_780062b0(param_1,*(char **)("new_p == 0" + *pcVar1 * 4));
      return param_1;
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'S':
    case 'T':
      pcVar1 = DAT_78041aac + 1;
      DAT_78041aac = pcVar3;
      FUN_780062b0(param_1,(char *)(&LocalFileTimeToFileTime_exref)[*pcVar1]);
      return param_1;
    case 'P':
      pcVar1 = DAT_78041aac + 1;
      DAT_78041aac = pcVar3;
      FUN_78006b50(&local_90,(char *)(&LocalFileTimeToFileTime_exref)[*pcVar1]);
      puVar4 = FUN_78001690(local_8);
      FUN_78006b80(&local_88,puVar4);
      iVar7 = DName::isEmpty((DName *)&local_88);
      pcVar3 = DAT_78041aac;
      if ((iVar7 != 0) ||
         (iVar7 = DName::isEmpty((DName *)&local_88), pcVar3 = DAT_78041aac, iVar7 != 0)) {
switchD_780018f6_caseD_32:
        DAT_78041aac = pcVar3;
        FUN_78006750(&local_90,param_1,(DName *)&local_88);
        return param_1;
      }
      if ((local_84 & 0x40) == 0) {
        FUN_78006750(&local_90,param_1,(DName *)&local_88);
        return param_1;
      }
    default:
switchD_780016e8_caseD_1:
      DAT_78041aac = pcVar3;
      uVar12 = 1;
LAB_78001b0e:
      FUN_78006450(param_1,uVar12);
      return param_1;
    case 'Q':
      break;
    case 'R':
      pcVar1 = DAT_78041aac + 1;
      DAT_78041aac = pcVar3;
      FUN_78006b50(&local_90,(char *)(&LocalFileTimeToFileTime_exref)[*pcVar1]);
      FUN_78006b50(&local_88,(&PTR_DAT_780362b8)[*DAT_78041aac]);
      pcVar3 = DAT_78041aac + 1;
      switch(*DAT_78041aac) {
      case '0':
        DAT_78041aac = pcVar3;
        FUN_78003cc0(local_80,0);
        pDVar5 = (DName *)&local_88;
        pDVar9 = (DName *)&local_90;
        puVar4 = local_30;
        puVar8 = param_1;
        pvVar6 = (void *)FUN_780065f0(local_80,local_50,' ');
        pvVar6 = (void *)FUN_78006750(pvVar6,puVar4,pDVar9);
        FUN_78006750(pvVar6,puVar8,pDVar5);
        return param_1;
      case '1':
        DAT_78041aac = pcVar3;
        FUN_78006750(&local_90,local_80,(DName *)&local_88);
        puVar4 = local_68;
        cVar10 = ',';
        puVar8 = FUN_78001f30(local_40);
        pDVar5 = (DName *)FUN_780065f0(puVar8,puVar4,cVar10);
        FUN_780069e0(local_80,pDVar5);
        puVar4 = local_20;
        cVar10 = ',';
        puVar8 = FUN_78001f30(local_60);
        pDVar5 = (DName *)FUN_780065f0(puVar8,puVar4,cVar10);
        FUN_780069e0(local_80,pDVar5);
        puVar4 = local_58;
        cVar10 = ',';
        puVar8 = FUN_78001f30(local_48);
        pDVar5 = (DName *)FUN_780065f0(puVar8,puVar4,cVar10);
        FUN_780069e0(local_80,pDVar5);
        puVar4 = local_38;
        cVar10 = ')';
        pvVar6 = FUN_78001fb0(local_28);
        pDVar5 = (DName *)FUN_780065f0(pvVar6,puVar4,cVar10);
        FUN_780069e0(local_80,pDVar5);
        FUN_780065f0(local_80,param_1,'\'');
        return param_1;
      case '2':
      case '3':
      case '4':
        goto switchD_780018f6_caseD_32;
      default:
        uVar12 = 2;
      }
      goto LAB_78001b0e;
    case 'U':
    case 'V':
      pcVar1 = DAT_78041aac + 1;
      puVar4 = local_18;
      pcVar11 = "[]";
      DAT_78041aac = pcVar3;
      puVar8 = FUN_780062b0(local_70,(char *)(&RemoveDirectoryW_exref)[*pcVar1]);
      puVar4 = (undefined4 *)FUN_780066a0(puVar8,puVar4,pcVar11);
      FUN_78006b80(&local_90,puVar4);
      pcVar3 = DAT_78041aac;
    }
  }
  DAT_78041aac = pcVar3;
  if (bVar2) {
    iVar7 = DName::isEmpty((DName *)&local_90);
    if (iVar7 == 0) {
      local_8c = local_8c | 0x20;
    }
  }
  else {
    iVar7 = DName::isEmpty((DName *)&local_90);
    if (iVar7 == 0) {
      pDVar5 = (DName *)&local_90;
      puVar4 = local_78;
      puVar8 = FUN_780062b0(local_70,"operator");
      FUN_78006750(puVar8,puVar4,pDVar5);
      FUN_78006b80(&local_90,local_78);
    }
  }
  uVar12 = param_1[1];
LAB_78001ad1:
  uVar12 = ((int)(local_8c << 0x1c) >> 0x1c ^ uVar12) & 0xf ^ uVar12;
  uVar12 = (local_8c ^ uVar12) & 0x10 ^ uVar12;
  uVar12 = (uVar12 ^ local_8c) & 0x20 ^ uVar12;
  param_1[1] = (uVar12 ^ local_8c) & 0x40 ^ uVar12;
  *param_1 = local_90;
  return param_1;
}


