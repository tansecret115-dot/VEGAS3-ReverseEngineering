/* Module: rmbe3260.dll
   Function: FUN_6600d820
   Address: 6600d820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600d820(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  void *pvVar3;
  int local_10;
  void *local_c;
  undefined4 local_8;
  
  pbVar2 = param_1;
  local_8 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    pbVar1 = param_1 + 0x7c;
    pvVar3 = (void *)FUN_6605c4d0((int *)pbVar1);
    while (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      pvVar3 = (void *)FUN_6605c4d0((int *)pbVar1);
    }
  }
  if (*(int *)(pbVar2 + 0x58) != 0) {
    local_10 = -1;
    param_1 = (byte *)0x0;
    local_c = (void *)0x0;
    do {
      FUN_6605cd60(pbVar2 + 0x50,&local_10,&param_1,&local_c);
      FUN_6605cb80(pbVar2 + 0x50,param_1);
      param_1 = (byte *)0x0;
      operator_delete(local_c);
    } while (local_10 != 0);
  }
  if (*(int **)(pbVar2 + 0x4c) != (int *)0x0) {
    local_8 = (**(code **)(**(int **)(pbVar2 + 0x4c) + 0x18))();
    if (*(int *)(pbVar2 + 0x48) == 1) {
      local_8 = (**(code **)(**(int **)(pbVar2 + 0x4c) + 0x44))(*(undefined4 *)(pbVar2 + 0x70));
    }
    FUN_6605b970(pbVar2 + 0x70,&DAT_66075004);
    if (*(undefined4 **)(pbVar2 + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(pbVar2 + 0x4c))(1);
    }
    pbVar2[0x4c] = 0;
    pbVar2[0x4d] = 0;
    pbVar2[0x4e] = 0;
    pbVar2[0x4f] = 0;
  }
  return local_8;
}


