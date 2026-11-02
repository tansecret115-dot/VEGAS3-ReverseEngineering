/* Module: vegas30.exe
   Function: FUN_00551840
   Address: 00551840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00551840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_1a0 [104];
  
  iVar1 = _SfGetMetricEx_20(DAT_00647200,0xe7f,0,0x40000000,0);
  if (iVar1 == 0x30) {
    iVar1 = _SfGetMetricBinary_16(DAT_00647200,0xe74,local_1a0,0x1a0);
    if (iVar1 == 0x1a0) {
      puVar4 = local_1a0;
      puVar5 = &DAT_00644c80;
      for (iVar1 = 0x68; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    uVar2 = _SfGetMetricEx_20(DAT_00647200,0xe7a,0,2,0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    DAT_00644e20 = _SfGetMetricEx_20(DAT_00647200,0xe75,1,DAT_00644e20,DAT_00644e20);
    iVar1 = _SfGetMetricBinary_16(DAT_00647200,0xe7b,local_1a0,0x1a0);
    iVar3 = 0x68;
    puVar4 = local_1a0;
    if (iVar1 != 0x1a0) {
      puVar4 = &DAT_00644c80;
    }
    puVar5 = &DAT_00657628;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = _SfGetMetricEx_20(DAT_00647200,0xe76,0,0x19,0);
    *(undefined4 *)(param_1 + 0x56c) = uVar2;
    uVar2 = _SfGetMetricBool_12(DAT_00647200,0xe77,1);
    *(undefined4 *)(param_1 + 0x570) = uVar2;
    uVar2 = _SfGetMetricEx_20(DAT_00647200,0xe78,0,0x19,0x1a);
    *(undefined4 *)(param_1 + 0x574) = uVar2;
    uVar2 = _SfGetMetricBool_12(DAT_00647200,0xe79,1);
    *(undefined4 *)(param_1 + 0x578) = uVar2;
    uVar2 = _SfGetMetricBool_12(DAT_00647200,0xe7c,0);
    *(undefined4 *)(param_1 + 0x580) = uVar2;
    uVar2 = _SfGetMetricBool_12(DAT_00647200,0xe7d,0);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  puVar4 = &DAT_00644c80;
  puVar5 = &DAT_00657628;
  for (iVar1 = 0x68; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x570) = 1;
  *(undefined4 *)(param_1 + 0x574) = 0x1a;
  *(undefined4 *)(param_1 + 0x578) = 1;
  return;
}


