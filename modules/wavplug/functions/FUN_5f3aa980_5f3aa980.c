/* Module: wavplug.dll
   Function: FUN_5f3aa980
   Address: 5f3aa980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3aa980(HANDLE param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                uint *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  undefined8 local_18;
  uint local_10 [4];
  
  uVar2 = param_2;
  uVar4 = param_3;
  if (param_7 != (uint *)0x0) {
    uVar2 = *param_7;
    uVar4 = param_7[1];
  }
  do {
    if ((param_7 != (uint *)0x0) && (((int)uVar4 < 0 || (((int)uVar4 < 1 && (uVar2 < 0x18)))))) {
      *param_7 = uVar2;
      param_7[1] = uVar4;
      return -0x7ffb1ff6;
    }
    iVar1 = FUN_5f3aa700(param_1,local_10,(uint *)&local_18);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = uVar2 - 0x18;
    iVar1 = 4;
    uVar4 = (uVar4 - 1) + (uint)(0x17 < uVar2);
    bVar7 = true;
    puVar5 = local_10;
    puVar6 = &param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar7 = *puVar5 == *puVar6;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      if (param_6 != (uint *)0x0) {
        *param_6 = (uint)local_18;
        param_6[1] = local_18._4_4_;
      }
      if (param_7 != (uint *)0x0) {
        *param_7 = uVar3;
        param_7[1] = uVar4;
      }
      return 0;
    }
    local_18 = FUN_5f3a9f00(param_1,(uint)local_18,local_18._4_4_);
    uVar2 = uVar3 - (uint)local_18;
    uVar4 = (uVar4 - (int)((ulonglong)local_18 >> 0x20)) - (uint)(uVar3 < (uint)local_18);
  } while( true );
}


