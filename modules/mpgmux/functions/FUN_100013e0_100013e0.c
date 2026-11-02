/* Module: mpgmux.dll
   Function: FUN_100013e0
   Address: 100013e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_100013e0(undefined4 *param_1,LPCSTR param_2,size_t param_3,undefined *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_428 [1064];
  
  pvVar4 = _malloc(0x148);
  param_1[0xd] = pvVar4;
  if (pvVar4 == (void *)0x0) {
    FUN_1000c6d4(local_428,(byte *)s_Unable_to_allocate_memory_for_bu_100160c0);
    if (param_4 != (undefined *)0x0) {
      (*(code *)param_4)(local_428);
      return 0xffffffff;
    }
  }
  else {
    uVar5 = FUN_1000c6c1(param_2,&DAT_100160bc);
    *(undefined4 *)param_1[0xd] = uVar5;
    if (*(int *)param_1[0xd] == 0) {
      FUN_1000c6d4(local_428,(byte *)s_BUFSTRM_Unable_to_open_file__s_f_10016090);
      if (param_4 != (undefined *)0x0) {
        (*(code *)param_4)(local_428);
        return 0xffffffff;
      }
    }
    else {
      pvVar4 = _malloc(param_3);
      *(void **)(param_1[0xd] + 4) = pvVar4;
      puVar2 = (undefined4 *)param_1[0xd];
      if (puVar2[1] != 0) {
        puVar2[3] = param_3;
        *(undefined4 *)(param_1[0xd] + 0x10) = 0;
        *(size_t *)(param_1[0xd] + 0x14) = param_3;
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
          pcVar8 = param_2;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar8 = param_2 + 1;
          cVar1 = *param_2;
          param_2 = pcVar8;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar8 + -uVar6;
        pcVar9 = (char *)(param_1[0xd] + 0x24);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xc] = 0;
        *param_1 = &LAB_100015f0;
        param_1[1] = &LAB_10001600;
        param_1[2] = &LAB_10001650;
        param_1[3] = &LAB_10001680;
        param_1[6] = &LAB_10001e80;
        param_1[4] = &LAB_100016f0;
        param_1[8] = FUN_10001e60;
        param_1[5] = &LAB_10001700;
        param_1[7] = &LAB_100019b0;
        param_1[0xb] = 1;
        return 0;
      }
      FUN_1000c613((FILE *)*puVar2);
      FUN_1000c6d4(local_428,(byte *)s_Unable_to_allocate_memory_for_bi_1001605c);
      if (param_4 != (undefined *)0x0) {
        (*(code *)param_4)(local_428);
      }
    }
  }
  return 0xffffffff;
}


