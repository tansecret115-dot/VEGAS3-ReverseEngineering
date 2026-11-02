/* Module: pncrt.dll
   Function: FUN_78003de0
   Address: 78003de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78003de0(undefined4 *param_1,DName *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8 [2];
  
  local_20 = 0;
  local_1c = local_1c & 0xffffff80;
  pcVar6 = DAT_78041aac;
  switch(*DAT_78041aac) {
  case '\0':
    puVar7 = param_1;
    puVar5 = FUN_78006450(&local_18,2);
    FUN_78006750(puVar5,puVar7,param_2);
    return param_1;
  case '$':
    if (DAT_78041aac[1] != '$') {
      if (DAT_78041aac[1] == '\0') {
        puVar7 = param_1;
        puVar5 = FUN_78006450(&local_18,2);
        FUN_78006750(puVar5,puVar7,param_2);
        return param_1;
      }
switchD_78003f25_caseD_1:
      DAT_78041aac = pcVar6;
      FUN_78006450(param_1,1);
      return param_1;
    }
    pcVar6 = DAT_78041aac + 2;
    switch(*pcVar6) {
    case '\0':
      DAT_78041aac = pcVar6;
      puVar7 = param_1;
      puVar5 = FUN_78006450(&local_18,2);
      FUN_78006750(puVar5,puVar7,param_2);
      return param_1;
    default:
      goto switchD_78003f25_caseD_1;
    case 'A':
      DAT_78041aac = DAT_78041aac + 3;
      FUN_78004eb0(param_1,param_2);
      return param_1;
    case 'B':
      pcVar6 = DAT_78041aac + 3;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') {
        DAT_78041aac = pcVar6;
        puVar7 = param_1;
        puVar5 = FUN_78006450(&local_18,2);
        FUN_78006750(puVar5,puVar7,param_2);
        return param_1;
      }
      if (cVar1 == 'X') {
        DAT_78041aac = DAT_78041aac + 4;
        iVar4 = DName::isEmpty(param_2);
        if (iVar4 != 0) {
          FUN_780062b0(param_1,"void");
          return param_1;
        }
        puVar7 = param_1;
        puVar5 = FUN_780062b0(&local_18,"void ");
        FUN_78006750(puVar5,puVar7,param_2);
        return param_1;
      }
      if (cVar1 == 'Y') {
        DAT_78041aac = DAT_78041aac + 4;
        FUN_78005bc0(param_1,param_2);
        return param_1;
      }
      break;
    case 'C':
      DAT_78041aac = DAT_78041aac + 3;
      local_c = local_c & 0xffffff80;
      local_10 = 0;
      param_2 = (DName *)FUN_78005780(local_8,param_2,'\0',(DName *)&local_10,0);
      goto LAB_78004077;
    }
    break;
  case 'B':
    FUN_78006b50(&local_20,"volatile");
    iVar4 = DName::isEmpty(param_2);
    if (iVar4 == 0) {
      FUN_780068d0(&local_20,' ');
    }
  case 'A':
    bVar2 = (byte)local_14 ^
            ((byte)((*(int *)(param_2 + 4) << 0x1c) >> 0x1c) ^ (byte)local_14) & 0xf;
    bVar3 = (byte)*(int *)(param_2 + 4);
    bVar2 = bVar2 ^ (bVar2 ^ bVar3) & 0x10;
    bVar2 = bVar2 ^ (bVar2 ^ bVar3) & 0x20;
    local_18 = *(undefined4 *)param_2;
    DAT_78041aac = DAT_78041aac + 1;
    local_14 = CONCAT31((int3)(local_14 >> 8),bVar2 ^ (bVar2 ^ bVar3) & 0x40) | 0x10;
    FUN_780053c0(param_1,(DName *)&local_20,(DName *)&local_18,0);
    return param_1;
  }
  DAT_78041aac = pcVar6;
LAB_78004077:
  FUN_78004550(param_1,param_2);
  return param_1;
}


