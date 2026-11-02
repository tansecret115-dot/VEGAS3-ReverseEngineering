/* Module: erv23260.dll
   Function: FUN_638110c0
   Address: 638110c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638110c0(void *this,int *param_1,undefined1 *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_28;
  uint local_24;
  char *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_6382e6a0;
  puStack_10 = &DAT_63817ef6;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  local_28 = 0;
  ExceptionList = &local_14;
  local_20 = (char *)FUN_638128a0((int)this);
  uVar4 = *param_1 * *(int *)((int)this + 0x14) + param_1[1];
  *(uint *)((int)this + 0x588) = uVar4 + *(int *)((int)this + 0x584);
  local_24 = uVar4;
  if (uVar4 < (uVar4 - 1) + param_1[2]) {
    do {
      FUN_63812360(this,(int)local_20,uVar4,1,1);
      if (*(int *)((int)this + 0x58c) == 0) {
        *(undefined1 *)(uVar4 + *(int *)((int)this + 0x584)) = *param_2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (local_24 - 1) + param_1[2]);
  }
  FUN_63812360(this,(int)local_20,uVar4,0,1);
  if (*(int *)((int)this + 0x58c) == 0) {
    *(undefined1 *)(uVar4 + *(int *)((int)this + 0x584)) = *param_2;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      pbVar1 = (byte *)(*(int *)(*(int *)((int)this + 0x110) +
                                (*param_1 * *(int *)((int)this + 0x14) + param_1[1]) * 4) +
                        ((int)local_20 + 8) * *(int *)((int)this + 0x118) +
                        *(int *)((int)this + 0x120) + 10);
      do {
        *pbVar1 = *pbVar1 | 0x80;
        pbVar1 = pbVar1 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(undefined4 *)((int)this + 0x538) = *(undefined4 *)((int)this + 0x520);
  *(undefined4 *)((int)this + 0x53c) = *(undefined4 *)((int)this + 0x52c);
  local_8 = 0;
  pcVar2 = (char *)FUN_63811340(this,param_1,(int)param_2,1,&local_28);
  local_8 = 0xffffffff;
  *param_3 = local_28;
  local_20 = pcVar2;
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_63811b90(this,param_1,pcVar2);
  }
  local_8 = 1;
  FUN_63811340(this,param_1,(int)param_2,0,&local_28);
  local_8 = 0xffffffff;
  *(int *)((int)this + 0x568) = *(int *)((int)this + 0x564) + param_1[1] * 0x34;
  iVar3 = *(int *)(*(int *)((int)this + 0x110) + local_24 * 4) +
          (int)pcVar2 * *(int *)((int)this + 0x118) + *(int *)((int)this + 0x120);
  *(int *)((int)this + 0x56c) = iVar3;
  *(int *)((int)this + 0x570) = iVar3 + *(int *)((int)this + 0x118) * 8;
  *(int *)((int)this + 0x574) = param_1[2];
  (**(code **)(*(int *)this + 0x28))(param_1);
  ExceptionList = local_14;
  return 0;
}


