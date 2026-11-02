/* Module: aviplug.dll
   Function: FUN_5f976f00
   Address: 5f976f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f976f00(ulonglong *param_1,uint *param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined8 local_10;
  int local_8;
  
  local_1c = *(int *)(param_3 + 0x44);
  local_14 = (undefined4 *)param_4[2];
  local_18 = 0;
  iVar3 = 2;
  do {
    puVar4 = param_1;
    uVar5 = FUN_5f976a00(puVar4,100,param_2,&local_1c);
    uVar5 = FUN_5f976a00(puVar4 + 2,100,(uint *)uVar5,&local_1c);
    param_2 = (uint *)uVar5;
    iVar3 = iVar3 + -1;
    param_1 = puVar4 + 4;
  } while (iVar3 != 0);
  uVar5 = FUN_5f976a00(puVar4 + 4,0x44,param_2,&local_1c);
  uVar5 = FUN_5f976a00(puVar4 + 6,0x44,(uint *)uVar5,&local_1c);
  *(undefined4 *)((int)local_14 + 8) = 0;
  local_14 = (undefined4 *)param_4[2];
  local_10._0_4_ = 0;
  local_10._4_4_ = local_18;
  local_8 = local_1c;
  if ((0 < local_18) && (local_14[2] != 0)) {
    FUN_5f976c80((int)&local_1c,&local_10);
  }
  if (local_10._4_4_ == 0) {
    if (local_14[2] != 0) {
      do {
        if (0 < (int)local_14[1]) {
          puVar2 = (undefined4 *)param_4[2];
          puVar2[1] = local_14[1];
          *puVar2 = *local_14;
          puVar2[2] = local_14[2];
        }
        iVar3 = param_4[2];
        param_4[2] = iVar3 + 0x10;
        piVar1 = local_14 + 6;
        local_14 = local_14 + 4;
      } while (*piVar1 != 0);
      *(undefined4 *)(iVar3 + 0x18) = 0;
      return (int)uVar5;
    }
  }
  else {
    FUN_5f976e10(param_4,(uint *)&local_10);
  }
  *(undefined4 *)(param_4[2] + 8) = 0;
  return (int)uVar5;
}


