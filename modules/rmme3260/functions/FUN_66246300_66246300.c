/* Module: rmme3260.dll
   Function: FUN_66246300
   Address: 66246300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66246300(void)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  ushort uVar9;
  int local_1c [3];
  char *local_10 [3];
  
  FUN_662500f0(local_10);
  uVar9 = 1;
  puVar2 = FUN_66201570();
  pcVar3 = (char *)FUN_66264090(puVar2,uVar9);
  FUN_66250410(local_10,pcVar3);
  pbVar6 = &DAT_6626fdc0;
  puVar4 = FUN_662507e0(local_10,local_1c,1);
  pbVar5 = (byte *)*puVar4;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_66246364:
      iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_66246369;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_66246364;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_66246369:
  FUN_66250210(local_1c);
  if (iVar7 != 0) {
    FUN_66250640(local_10,&DAT_6626fdc0);
  }
  FUN_66250640(local_10,s_Codecs_66270388);
  uVar9 = 2;
  puVar2 = FUN_66201570();
  FUN_66264000(puVar2,uVar9,local_10[0]);
  FUN_66250210((int *)local_10);
  return 0;
}


