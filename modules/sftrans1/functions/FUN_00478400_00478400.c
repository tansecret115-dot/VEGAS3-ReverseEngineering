/* Module: sftrans1.dll
   Function: FUN_00478400
   Address: 00478400
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_00478400(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  iVar2 = 0x6e;
  bVar7 = true;
  piVar3 = param_1;
  piVar5 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar3 == *piVar5;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    return false;
  }
  iVar2 = param_1[0x72];
  if (iVar2 != param_2[0x72]) {
    return false;
  }
  if (((byte *)param_1[0x73] == (byte *)0x0) || ((byte *)param_2[0x73] == (byte *)0x0)) {
    return true;
  }
  bVar7 = false;
  iVar1 = 0;
  bVar8 = true;
  pbVar4 = (byte *)param_1[0x73];
  pbVar6 = (byte *)param_2[0x73];
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *pbVar4 < *pbVar6;
    bVar8 = *pbVar4 == *pbVar6;
    pbVar4 = pbVar4 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  return iVar1 == 0;
}


