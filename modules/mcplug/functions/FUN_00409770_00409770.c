/* Module: mcplug.dll
   Function: FUN_00409770
   Address: 00409770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409770(undefined4 *param_1,char *param_2,char *param_3,undefined *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  FILE *pFVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_428 [1064];
  
  pvVar4 = malloc(0x148);
  param_1[0xd] = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar9 = "Unable to allocate memory for buffstream file %s.";
  }
  else {
    pFVar5 = fopen(param_2,"wb");
    *(FILE **)param_1[0xd] = pFVar5;
    if (*(int *)param_1[0xd] == 0) {
      sprintf(local_428,"BUFSTRM:Unable to open file %s for writing.",param_2);
      if (param_4 != (undefined *)0x0) {
        (*(code *)param_4)(local_428);
      }
      return 0xffffffff;
    }
    pvVar4 = malloc((size_t)param_3);
    *(void **)(param_1[0xd] + 4) = pvVar4;
    puVar2 = (undefined4 *)param_1[0xd];
    if (puVar2[1] != 0) {
      puVar2[3] = param_3;
      *(undefined4 *)(param_1[0xd] + 0x10) = 0;
      *(char **)(param_1[0xd] + 0x14) = param_3;
      *(undefined4 *)(param_1[0xd] + 8) = 0;
      iVar3 = param_1[0xd];
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(param_1[0xd] + 0x20) = 0;
      *(undefined4 *)(param_1[0xd] + 0x124) = 0;
      *(undefined4 *)(param_1[0xd] + 0x128) = 0;
      *(undefined4 *)(param_1[0xd] + 300) = 0;
      *(undefined4 *)(param_1[0xd] + 0x130) = 0;
      *(undefined4 *)(param_1[0xd] + 0x134) = 0;
      *(undefined4 *)(param_1[0xd] + 0x138) = 0;
      uVar6 = 0xffffffff;
      *(undefined4 *)(param_1[0xd] + 0x13c) = 0;
      *(undefined4 *)(param_1[0xd] + 0x140) = 0;
      do {
        pcVar9 = param_2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar9 + -uVar6;
      pcVar8 = (char *)(param_1[0xd] + 0x24);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xc] = 0;
      *param_1 = &LAB_00409950;
      param_1[1] = &LAB_00409960;
      param_1[2] = &LAB_004099b0;
      param_1[3] = FUN_004099e0;
      param_1[6] = &LAB_0040a4b0;
      param_1[4] = &LAB_00409a60;
      param_1[8] = FUN_00409e40;
      param_1[5] = &LAB_00409a70;
      param_1[7] = FUN_00409d20;
      param_1[0xb] = 1;
      return 0;
    }
    fclose((FILE *)*puVar2);
    pcVar9 = "Unable to allocate memory for bitstream buffer=%d";
    param_2 = param_3;
  }
  sprintf(local_428,pcVar9,param_2);
  if (param_4 != (undefined *)0x0) {
    (*(code *)param_4)(local_428);
  }
  return 0xffffffff;
}


