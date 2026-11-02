/* Module: vegas30k.dll
   Function: FUN_01021f40
   Address: 01021f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01021f40(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  if (param_3 < 0) {
    iVar7 = -1;
    param_3 = -param_3;
  }
  else {
    iVar7 = 1;
  }
  if ((*param_1 & 0x10) == 0) {
    iVar8 = iVar7;
    if ((*param_2 & 0x10) != 0) goto LAB_01021f95;
  }
  else if ((*param_2 & 0x10) == 0) {
    iVar8 = -iVar7;
LAB_01021f95:
    if (iVar8 != 0) {
      return iVar8;
    }
  }
  iVar8 = 0;
  if (*(short *)(param_1 + 0x12) == 0) {
    pbVar4 = param_1 + 0x14;
  }
  else {
    pbVar4 = param_1 + *(ushort *)(param_1 + 0x10) + 0x14;
  }
  if (*(short *)(param_2 + 0x12) == 0) {
    pbVar6 = param_2 + 0x14;
  }
  else {
    pbVar6 = param_2 + *(ushort *)(param_2 + 0x10) + 0x14;
  }
  FUN_01021ac0(local_104,pbVar4,0);
  FUN_01021ac0(local_208,pbVar6,0);
  iVar5 = lstrcmpA(local_104,local_208);
  iVar5 = iVar5 * iVar7;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_2 + 0xc);
  switch(param_3) {
  case 1:
    return iVar5;
  case 2:
    iVar8 = *(int *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
    if ((*(uint *)(iVar1 + 8) == *(uint *)(iVar2 + 8)) && (iVar8 == iVar3)) {
      return iVar5;
    }
    if (iVar3 <= iVar8) {
      if (iVar3 < iVar8) {
        return iVar7;
      }
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar1 + 8)) {
        return iVar7;
      }
      return -iVar7;
    }
    break;
  case 3:
    FUN_01021ac0(local_104,pbVar4,2);
    FUN_01021ac0(local_208,pbVar6,2);
    iVar8 = lstrcmpA(local_104,local_208);
    if (iVar8 * iVar7 != 0) {
      return iVar8 * iVar7;
    }
    return iVar5;
  case 4:
    if ((*(int *)(iVar1 + 0x10) == *(int *)(iVar2 + 0x10)) &&
       (*(int *)(iVar1 + 0x14) == *(int *)(iVar2 + 0x14))) {
      return iVar5;
    }
    if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar1 + 0x14)) {
      if (*(uint *)(iVar1 + 0x14) != *(uint *)(iVar2 + 0x14)) {
        return iVar7;
      }
      if (*(uint *)(iVar2 + 0x10) < *(uint *)(iVar1 + 0x10)) {
        return iVar7;
      }
    }
    break;
  default:
    goto switchD_01022034_default;
  }
  iVar8 = -iVar7;
switchD_01022034_default:
  return iVar8;
}


