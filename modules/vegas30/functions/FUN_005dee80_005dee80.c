/* Module: vegas30.exe
   Function: FUN_005dee80
   Address: 005dee80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005dee80(int *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  short *local_8;
  
  bVar3 = false;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  psVar10 = (short *)*param_1;
  if (param_2 == 0) {
    iVar9 = 0;
    cVar1 = (char)*psVar10;
    while (((cVar1 != '\n' && (cVar1 != '\r')) && (cVar1 != '\0'))) {
      iVar4 = iVar9 + 1;
      iVar9 = iVar9 + 1;
      cVar1 = *(char *)((int)psVar10 + iVar4);
    }
    local_8 = (short *)((int)psVar10 + iVar9);
    if ((char)*local_8 != '\0') goto LAB_005def06;
  }
  else {
    sVar2 = *psVar10;
    iVar9 = 0;
    for (psVar7 = psVar10; ((sVar2 != 10 && (sVar2 != 0xd)) && (*psVar7 != 0)); psVar7 = psVar7 + 1)
    {
      sVar2 = psVar7[1];
      iVar9 = iVar9 + 1;
    }
    local_8 = psVar10 + iVar9;
    if (psVar10[iVar9] != 0) goto LAB_005def06;
  }
  bVar3 = true;
LAB_005def06:
  uVar5 = (int)local_8 - (int)psVar10;
  if ((uVar5 == 0) && (bVar3)) {
    return 0;
  }
  FUN_0060ac30();
  puVar11 = (undefined4 *)&stack0xffffffe8;
  for (uVar8 = uVar5 + 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar8 = uVar5 + 1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  puVar11 = (undefined4 *)&stack0xffffffe8;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar11 = *(undefined4 *)psVar10;
    psVar10 = psVar10 + 2;
    puVar11 = puVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar11 = (char)*psVar10;
    psVar10 = (short *)((int)psVar10 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  uVar6 = FUN_005e3e30(&stack0xffffffe8,param_2);
  if (param_2 == 0) {
    for (iVar9 = 0;
        (*(char *)((int)local_8 + iVar9) == '\n' || (*(char *)((int)local_8 + iVar9) == '\r'));
        iVar9 = iVar9 + 1) {
    }
    *param_1 = (int)((int)local_8 + iVar9);
    return uVar6;
  }
  iVar9 = 0;
  for (psVar10 = local_8; (*psVar10 == 10 || (*psVar10 == 0xd)); psVar10 = psVar10 + 1) {
    iVar9 = iVar9 + 1;
  }
  *param_1 = (int)(local_8 + iVar9);
  return uVar6;
}


