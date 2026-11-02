/* Module: rmbe3260.dll
   Function: FUN_660521e0
   Address: 660521e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_660521e0(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if ((param_1 == (byte *)0x0) && (param_2 == (byte *)0x0)) {
    return 0;
  }
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  iVar2 = FUN_66051fe0();
  if (iVar2 == 0) {
    iVar2 = strncmp((char *)param_1,(char *)param_2,param_3);
    return iVar2;
  }
  bVar1 = *param_1;
  pbVar3 = param_1;
  while ((bVar1 != 0 && ((uint)((int)pbVar3 - (int)param_1) < param_3))) {
    pbVar3 = (byte *)FUN_66052000((LPCSTR)pbVar3);
    bVar1 = *pbVar3;
  }
  bVar1 = *param_2;
  pbVar4 = param_2;
  while ((bVar1 != 0 && ((uint)((int)pbVar4 - (int)param_2) < param_3))) {
    pbVar4 = (byte *)FUN_66052000((LPCSTR)pbVar4);
    bVar1 = *pbVar4;
  }
  iVar2 = (int)pbVar3 - (int)param_1;
  if (iVar2 < (int)pbVar4 - (int)param_2) {
    return -1;
  }
  if ((int)pbVar4 - (int)param_2 < iVar2) {
    return 1;
  }
  bVar6 = false;
  iVar5 = 0;
  bVar7 = true;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *param_1 < *param_2;
    bVar7 = *param_1 == *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar5 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  return iVar5;
}


