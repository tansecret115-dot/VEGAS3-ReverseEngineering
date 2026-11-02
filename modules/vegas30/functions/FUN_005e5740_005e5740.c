/* Module: vegas30.exe
   Function: FUN_005e5740
   Address: 005e5740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e5740(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368 [199];
  void *local_4c;
  int *local_c;
  
  iVar2 = riff64_PrepareList(param_1,DAT_0062ac50,DAT_0062ac54,DAT_0062ac58,DAT_0062ac5c,&local_370)
  ;
  if (-1 < iVar2) {
    lVar3 = Mixer_NumBusTypePorts(4);
    *(long *)(param_3 + 0x7d8) = lVar3;
    iVar2 = FUN_005dac40(param_1,param_2,DAT_0062ac60,DAT_0062ac64,DAT_0062ac68,DAT_0062ac6c,
                         param_3 + 0x6c0);
    if (-1 < iVar2) {
      uVar6 = 0;
      if (*(int *)(param_3 + 0x7d4) != 0) {
        puVar4 = (uint *)(param_3 + 0x7e8);
        do {
          puVar5 = local_368;
          for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          iVar2 = FUN_005e7df0(((*puVar4 & 0x80000000) != 0) + '\x03',uVar6,*puVar4,0);
          if (iVar2 < 0) break;
          iVar2 = FUN_005dac40(param_1,param_2,DAT_0062ac70,DAT_0062ac74,DAT_0062ac78,DAT_0062ac7c,
                               local_368);
          if (iVar2 < 0) break;
          if (local_4c != (void *)0x0) {
            free(local_4c);
          }
          local_4c = (void *)0x0;
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
          }
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 1;
          local_c = (int *)0x0;
        } while (uVar6 < *(uint *)(param_3 + 0x7d4));
      }
      uVar6 = 0;
      puVar5 = local_368;
      for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar2 = FUN_005e7df0(7,0xffffffff,DAT_0064a924,0);
      if (-1 < iVar2) {
        iVar2 = FUN_005dac40(param_1,param_2,DAT_0062ac70,DAT_0062ac74,DAT_0062ac78,DAT_0062ac7c,
                             local_368);
        if (-1 < iVar2) {
          if (local_4c != (void *)0x0) {
            free(local_4c);
          }
          local_4c = (void *)0x0;
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
          }
          local_c = (int *)0x0;
          if (*(int *)(param_3 + 0x7d8) != 0) {
            puVar5 = (undefined4 *)(param_3 + 0x9e8);
            do {
              local_c = (int *)0x0;
              uVar1 = *puVar5;
              puVar7 = local_368;
              for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              iVar2 = FUN_005e7df0(5,uVar6,uVar1,0);
              if (iVar2 < 0) break;
              iVar2 = FUN_005dac40(param_1,param_2,DAT_0062ac70,DAT_0062ac74,DAT_0062ac78,
                                   DAT_0062ac7c,local_368);
              if (iVar2 < 0) break;
              if (local_4c != (void *)0x0) {
                free(local_4c);
              }
              local_4c = (void *)0x0;
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 8))(local_c);
              }
              uVar6 = uVar6 + 1;
              puVar5 = puVar5 + 1;
              local_c = (int *)0x0;
            } while (uVar6 < *(uint *)(param_3 + 0x7d8));
          }
          riff64_CompleteChunk(param_1,local_370,uStack_36c);
        }
      }
    }
  }
  return;
}


