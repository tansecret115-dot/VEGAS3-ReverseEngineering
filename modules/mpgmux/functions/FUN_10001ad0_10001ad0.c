/* Module: mpgmux.dll
   Function: FUN_10001ad0
   Address: 10001ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_10001ad0(undefined4 *param_1,LPCSTR param_2,size_t param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 local_428 [1064];
  
  pvVar3 = _malloc(0x148);
  param_1[0xd] = pvVar3;
  if (pvVar3 == (void *)0x0) {
    FUN_1000c6d4(local_428,(byte *)s_Unable_to_allocate_memory_for_bu_100160c0);
    if (param_4 != (undefined *)0x0) {
      (*(code *)param_4)(local_428);
      return 0xffffffff;
    }
  }
  else {
    uVar4 = FUN_1000c6c1(param_2,&DAT_10016144);
    *(undefined4 *)param_1[0xd] = uVar4;
    if (*(int *)param_1[0xd] == 0) {
      FUN_1000c6d4(local_428,(byte *)s_Unable_to_open_file__s_for_readi_10016120);
      if (param_4 != (undefined *)0x0) {
        (*(code *)param_4)(local_428);
        return 0xffffffff;
      }
    }
    else {
      pvVar3 = _malloc(param_3);
      *(void **)(param_1[0xd] + 4) = pvVar3;
      puVar1 = (undefined4 *)param_1[0xd];
      if (puVar1[1] != 0) {
        puVar1[3] = param_3;
        *(undefined4 *)(param_1[0xd] + 0x10) = 0;
        *(size_t *)(param_1[0xd] + 0x14) = param_3;
        *(undefined4 *)(param_1[0xd] + 8) = 0;
        iVar2 = param_1[0xd];
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        *param_1 = &LAB_10001c60;
        param_1[1] = &LAB_10001c70;
        param_1[2] = &LAB_10001650;
        param_1[3] = &LAB_10001d20;
        param_1[4] = &LAB_100016f0;
        param_1[8] = FUN_10001e60;
        param_1[5] = &LAB_10001250;
        param_1[7] = &LAB_10001e30;
        return 0;
      }
      FUN_1000c613((FILE *)*puVar1);
      FUN_1000c6d4(local_428,(byte *)s_Unable_to_allocate_memory_for_bu_100160f4);
      if (param_4 != (undefined *)0x0) {
        (*(code *)param_4)(local_428);
      }
    }
  }
  return 0xffffffff;
}


