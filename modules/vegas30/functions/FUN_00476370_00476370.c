/* Module: vegas30.exe
   Function: FUN_00476370
   Address: 00476370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476370(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0x58);
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = 0;
  if ((0xa121 < param_2) && (param_2 < 0xa13b)) {
    if ((param_3 != 3) && (((param_3 != 9 && (param_3 != 5)) && (param_3 != 7)))) {
      local_30 = *(undefined4 *)(param_2 * 8 + 0x5c20c8);
      local_28 = *(undefined4 *)(param_2 * 8 + 0x5c20cc);
      iVar1 = 1;
      goto switchD_00476406_default;
    }
    local_24 = *(undefined4 *)(param_2 * 8 + 0x5c20c8);
    local_2c = *(undefined4 *)(param_2 * 8 + 0x5c20cc);
    goto LAB_0047647c;
  }
  switch(param_2) {
  case 0xa13b:
    iVar1 = 1;
    local_30 = 1;
    break;
  case 0xa13c:
    local_30 = 2;
    iVar1 = 1;
    break;
  case 0xa13d:
    local_30 = 0xfffffffe;
    iVar1 = 1;
    break;
  case 0xa13e:
    local_2c = 1;
    goto LAB_0047647c;
  case 0xa13f:
    local_2c = 2;
    goto LAB_0047647c;
  case 0xa140:
    local_2c = 0xfffffffe;
    goto LAB_0047647c;
  case 0xa141:
    local_30 = 4;
    iVar1 = 1;
    break;
  case 0xa142:
    local_30 = 0xfffffffc;
    iVar1 = 1;
    break;
  case 0xa143:
    local_2c = 4;
    goto LAB_0047647c;
  case 0xa144:
    local_2c = 0xfffffffc;
LAB_0047647c:
    iVar1 = 2;
  }
switchD_00476406_default:
  FUN_004e9f70(*(undefined4 *)(*(int *)(param_1 + 8) + 8),0x2d,0);
  FUN_004ea750(*(undefined4 *)(*(int *)(param_1 + 8) + 8),param_1,2,0);
  FUN_005c7d10(param_1,local_40);
  if (*(int *)(param_1 + 4) == 3) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x200) != 0) {
        if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
          FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
        }
        _SfVideoPlugin_DestroyCacheList_4(*(undefined4 *)(param_1 + 0x200));
        *(undefined4 *)(param_1 + 0x200) = 0;
      }
    }
    else if ((iVar1 == 2) && (*(int *)(param_1 + 0x204) != 0)) {
      if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
        FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
      }
      _SfVideoPlugin_DestroyCacheList_4(*(undefined4 *)(param_1 + 0x204));
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
  }
  FUN_004eb2b0(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  FUN_004ea040(*(undefined4 *)(*(int *)(param_1 + 8) + 8),0);
  return;
}


