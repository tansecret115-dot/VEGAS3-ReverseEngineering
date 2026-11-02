/* Module: vegas30.exe
   Function: FUN_0046f260
   Address: 0046f260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f260(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint auStack_48 [5];
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  puStack_24 = (undefined1 *)&local_10;
  piStack_28 = &local_8;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  uStack_2c = param_1;
  iStack_30 = 0x46f281;
  FUN_004582a0();
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined4 *)(param_1 + 0x20);
  puVar6 = auStack_48;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_00501970(uVar2,&local_10);
  iVar4 = DAT_00647784;
  if (iVar3 == 0) {
    if ((-1 < local_c) && ((0 < local_c || (local_10 != 0)))) {
      piStack_28 = (int *)0x1d;
      if (local_10 == 0 && local_c == 0) {
        piStack_28 = (int *)((**(int **)(param_1 + 0xcd0) != 1) + 0x1b);
      }
      puStack_24 = (undefined1 *)0x0;
      iStack_30 = 0x46f2eb;
      uStack_2c = uVar1;
      FUN_004e9f70();
      if (**(int **)(param_1 + 0xcd0) < 1) {
        puStack_24 = (undefined1 *)0x1;
        piStack_28 = (int *)0x0;
        uStack_2c = -(uint)(iVar4 != 0) & DAT_0064a588;
        iStack_30 = iVar4;
        iStack_34 = local_c;
        auStack_48[4] = local_10;
        auStack_48[3] = local_4;
        auStack_48[2] = local_8;
        auStack_48[1] = 0;
        auStack_48[0] = param_1;
        iVar4 = FUN_0046cb60();
      }
      else {
        puStack_24 = (undefined1 *)iVar4;
        piStack_28 = (int *)local_c;
        uStack_2c = local_10;
        iStack_30 = local_4;
        iStack_34 = local_8;
        auStack_48[4] = param_1;
        auStack_48[3] = 0x46f311;
        iVar4 = FUN_0046d8b0();
      }
      if (0 < iVar4) {
        puStack_24 = (undefined1 *)param_1;
        piStack_28 = (int *)0x46f34f;
        FUN_0046ee50();
        piStack_28 = (int *)0x46f355;
        puStack_24 = (undefined1 *)uVar1;
        FUN_004eb2b0();
      }
      puStack_24 = (undefined1 *)0x0;
      uStack_2c = 0x46f35d;
      piStack_28 = (int *)uVar1;
      FUN_004ea040();
      if (iVar4 != 0) {
        puStack_24 = (undefined1 *)param_1;
        piStack_28 = (int *)0x46f367;
        FUN_00456c20();
        puStack_24 = (undefined1 *)0x0;
        piStack_28 = (int *)param_1;
        uStack_2c = 0x46f36f;
        FUN_004530a0();
        DAT_0064767c = DAT_0064767c | 4;
      }
    }
  }
  return;
}


