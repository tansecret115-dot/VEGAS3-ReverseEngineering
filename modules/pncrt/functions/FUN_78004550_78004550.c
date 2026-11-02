/* Module: pncrt.dll
   Function: FUN_78004550
   Address: 78004550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78004550(undefined4 *param_1,DName *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  DName *pDVar8;
  uint uVar9;
  uint *puVar10;
  DName *pDVar11;
  char *pcVar12;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  DName local_10 [8];
  undefined1 local_8 [8];
  
  bVar1 = *DAT_78041aac;
  if (bVar1 == 0) {
    puVar5 = param_1;
    puVar4 = FUN_78006450(local_8,2);
    FUN_78006750(puVar4,puVar5,param_2);
    return param_1;
  }
  local_28 = CONCAT31(local_28._1_3_,bVar1);
  pbVar7 = DAT_78041aac + 1;
  uVar9 = 0xffffffff;
  local_1c = local_1c & 0xffffff80;
  local_20 = 0;
  switch(bVar1) {
  case 0x43:
  case 0x44:
  case 0x45:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"char");
    break;
  case 0x46:
  case 0x47:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"short");
    break;
  case 0x48:
  case 0x49:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"int");
    break;
  case 0x4a:
  case 0x4b:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"long");
    break;
  default:
    puVar5 = FUN_78004a80((undefined4 *)local_10,0);
    FUN_78006b80(&local_20,puVar5);
    iVar6 = DName::isEmpty((DName *)&local_20);
    if (iVar6 != 0) {
      uVar9 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
      uVar9 = (local_1c ^ uVar9) & 0x10 ^ uVar9;
      uVar9 = (local_1c ^ uVar9) & 0x20 ^ uVar9;
      param_1[1] = (local_1c ^ uVar9) & 0x40 ^ uVar9;
      *param_1 = local_20;
      return param_1;
    }
    break;
  case 0x4d:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"float");
    break;
  case 0x4f:
    DAT_78041aac = pbVar7;
    FUN_78006b50(&local_20,"long ");
    pbVar7 = DAT_78041aac;
  case 0x4e:
    DAT_78041aac = pbVar7;
    FUN_78006950(&local_20,"double");
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
    uVar9 = bVar1 & 7;
    DAT_78041aac = pbVar7;
    break;
  case 0x5f:
    DAT_78041aac = DAT_78041aac + 2;
    local_28 = CONCAT31(local_28._1_3_,*pbVar7);
    switch(*pbVar7) {
    case 0x44:
    case 0x45:
      FUN_78006b50(&local_20,"__int8");
      break;
    case 0x46:
    case 0x47:
      FUN_78006b50(&local_20,"__int16");
      break;
    case 0x48:
    case 0x49:
      FUN_78006b50(&local_20,"__int32");
      break;
    case 0x4a:
    case 0x4b:
      FUN_78006b50(&local_20,"__int64");
      break;
    case 0x4c:
    case 0x4d:
      FUN_78006b50(&local_20,"__int128");
      break;
    case 0x4e:
      FUN_78006b50(&local_20,"bool");
      break;
    default:
      FUN_78006b50(&local_20,"UNKNOWN");
      break;
    case 0x57:
      FUN_78006b50(&local_20,"wchar_t");
    }
  }
  if (uVar9 != 0xffffffff) {
    local_28 = 0;
    uVar2 = *(uint *)(param_2 + 4);
    local_24 = local_24 & 0xffffff80;
    uVar3 = local_14 ^ ((int)(uVar2 << 0x1c) >> 0x1c ^ local_14) & 0xf;
    uVar3 = uVar3 ^ (uVar3 ^ uVar2) & 0x10;
    uVar3 = uVar3 ^ (uVar3 ^ uVar2) & 0x20;
    local_14 = uVar3 ^ (uVar3 ^ uVar2) & 0x40;
    local_18 = *(undefined4 *)param_2;
    iVar6 = DName::isEmpty(param_2);
    if (iVar6 != 0) {
      if ((uVar9 & 1) == 0) {
        if ((uVar9 & 2) == 0) {
          if ((uVar9 & 4) == 0) goto LAB_7800479e;
          pcVar12 = "ptr64";
        }
        else {
          pcVar12 = "volatile";
        }
        FUN_78006b50(&local_28,pcVar12);
      }
      else {
        FUN_78006b50(&local_28,"const");
        if ((uVar9 & 2) != 0) {
          FUN_78006950(&local_28," volatile");
        }
        if ((uVar9 & 4) != 0) {
          FUN_78006950(&local_28," ptr64");
        }
      }
    }
LAB_7800479e:
    FUN_780053c0(param_1,(DName *)&local_28,(DName *)&local_18,1);
    return param_1;
  }
  switch(bVar1) {
  case 0x43:
    pDVar8 = (DName *)&local_20;
    puVar10 = &local_28;
    puVar5 = FUN_780062b0(local_8,"signed ");
    FUN_78006750(puVar5,puVar10,pDVar8);
    pDVar8 = (DName *)&local_28;
    break;
  default:
    goto switchD_780045d7_caseD_44;
  case 0x45:
  case 0x47:
  case 0x49:
  case 0x4b:
    pDVar8 = (DName *)&local_20;
    puVar5 = &local_18;
    puVar4 = FUN_780062b0(local_8,"unsigned ");
    FUN_78006750(puVar4,puVar5,pDVar8);
    pDVar8 = (DName *)&local_18;
    break;
  case 0x5f:
    switch(local_28 & 0xff) {
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4b:
    case 0x4d:
      pDVar8 = (DName *)&local_20;
      pDVar11 = local_10;
      puVar5 = FUN_780062b0(local_8,"unsigned ");
      FUN_78006750(puVar5,(undefined4 *)pDVar11,pDVar8);
      pDVar8 = local_10;
      break;
    default:
      goto switchD_780045d7_caseD_44;
    }
  }
  FUN_78006b80(&local_20,(undefined4 *)pDVar8);
switchD_780045d7_caseD_44:
  iVar6 = DName::isEmpty(param_2);
  if (iVar6 == 0) {
    pDVar8 = local_10;
    puVar5 = FUN_780061c0(local_8,' ');
    FUN_78006750(puVar5,(undefined4 *)pDVar8,param_2);
    FUN_780069e0(&local_20,local_10);
  }
  uVar9 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar9 = (local_1c ^ uVar9) & 0x10 ^ uVar9;
  uVar9 = (local_1c ^ uVar9) & 0x20 ^ uVar9;
  param_1[1] = (local_1c ^ uVar9) & 0x40 ^ uVar9;
  *param_1 = local_20;
  return param_1;
}


