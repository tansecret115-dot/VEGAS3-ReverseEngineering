/* Module: encn3260.dll
   Function: FUN_664b0ea0
   Address: 664b0ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b0ea0(void)

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
  
  FUN_664bb2c0(local_10);
  uVar9 = 1;
  puVar2 = FUN_66481080();
  pcVar3 = (char *)FUN_664cbdc0(puVar2,uVar9);
  FUN_664bb5e0(local_10,pcVar3);
  pbVar6 = &DAT_664e32e0;
  puVar4 = FUN_664bba50(local_10,local_1c,1);
  pbVar5 = (byte *)*puVar4;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_664b0f04:
      iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_664b0f09;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_664b0f04;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_664b0f09:
  FUN_664bb3e0(local_1c);
  if (iVar7 != 0) {
    FUN_664bb810(local_10,&DAT_664e32e0);
  }
  FUN_664bb810(local_10,s_Codecs_664e389c);
  uVar9 = 2;
  puVar2 = FUN_66481080();
  FUN_664cbd30(puVar2,uVar9,local_10[0]);
  FUN_664bb3e0((int *)local_10);
  return 0;
}


