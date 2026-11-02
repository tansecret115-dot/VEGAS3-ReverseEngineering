/* Module: vidcap30.exe
   Function: FUN_0042e2e0
   Address: 0042e2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e2e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_48 [10];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar3 = DAT_005bb548;
  uVar2 = DAT_005bb544;
  *(undefined4 *)(param_1 + 0x638) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = DAT_005bb504;
  uVar1 = DAT_005bb51c;
  *(undefined4 *)(param_1 + 0x400) = DAT_005bb518;
  *(undefined4 *)(param_1 + 0x404) = uVar1;
  *(undefined4 *)(param_1 + 0x410) = DAT_005bb520;
  *(undefined4 *)(param_1 + 0x3f4) = DAT_005bb508;
  uVar1 = DAT_005bb514;
  *(undefined4 *)(param_1 + 0x3f8) = DAT_005bb510;
  *(undefined4 *)(param_1 + 0x3fc) = uVar1;
  *(undefined4 *)(param_1 + 0x414) = DAT_005bb524;
  *(undefined4 *)(param_1 + 0x408) = DAT_005bb528;
  *(undefined4 *)(param_1 + 0x40c) = DAT_005bb52c;
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  DAT_005bb504 = 0xffffffff;
  puVar5 = local_48;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (DAT_005bb540 == 0) {
    local_18 = DAT_005bb538;
    local_14 = DAT_005bb53c;
  }
  else {
    local_18 = 0;
    local_14 = 0x3ff00000;
  }
  local_20 = DAT_005bb818;
  local_1c = DAT_005bb81c;
  local_10 = uVar2;
  local_c = uVar3;
  puVar5 = local_48;
  puVar6 = (undefined4 *)(param_1 + 0x418);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x418);
  puVar6 = (undefined4 *)(param_1 + 0x458);
  for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = param_1 + 0x1c0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  _SfSummary_SetItem_12(iVar4,0x474e4549,&DAT_005baae8);
  _SfSummary_SetItem_12(iVar4,0x4d414e49,&DAT_005bab68);
  _SfSummary_SetItem_12(iVar4,0x54524149,&DAT_005babe8);
  _SfSummary_SetItem_12(iVar4,0x504f4349,&DAT_005bac68);
  _SfSummary_SetItem_12(iVar4,0x544d4349,&DAT_005bace8);
  _mbscpy((uchar *)(param_1 + 0x1e0),&DAT_005bb100);
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x528) = 0;
  return;
}


