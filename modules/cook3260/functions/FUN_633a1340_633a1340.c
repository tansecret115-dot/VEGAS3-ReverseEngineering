/* Module: cook3260.dll
   Function: FUN_633a1340
   Address: 633a1340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a1340(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_20;
  short local_1c;
  short local_1a;
  uint local_18;
  ushort local_14;
  ushort uStack_12;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x28) != 0) {
    return 1;
  }
  *(undefined4 *)((int)this + 0x28) = 2;
  pbVar1 = *(byte **)((int)param_1 + 0x16);
  local_8 = 0;
  if (pbVar1 != (byte *)0x0) {
    local_20 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 |
               (uint)pbVar1[3];
    local_1c = CONCAT11(pbVar1[4],pbVar1[5]);
    local_1a = CONCAT11(pbVar1[6],pbVar1[7]);
    if (0x1000002 < (int)local_20) {
      local_18 = (uint)pbVar1[8] << 0x18 | (uint)pbVar1[9] << 0x10 | (uint)pbVar1[10] << 8 |
                 (uint)pbVar1[0xb];
      local_14 = CONCAT11(pbVar1[0xc],pbVar1[0xd]);
      uStack_12 = CONCAT11(pbVar1[0xe],pbVar1[0xf]);
    }
  }
  *(uint *)((int)this + 8) = (uint)*(ushort *)((int)param_1 + 6);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 10);
  *(int *)((int)this + 0xc) = (int)local_1c;
  if (0x1000000 < (int)local_20) {
    if ((int)local_20 < 0x1000003) {
      puVar2 = operator_new(0x18);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_633a19c0(puVar2);
      }
      *(undefined4 **)this = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
        *(int *)((int)this + 0x18) = (local_c * *(int *)((int)this + 0xc)) / *(int *)((int)this + 8)
        ;
      }
      else {
        iVar3 = FUN_633a1b60(puVar2,*(int *)((int)this + 0xc) / *(int *)((int)this + 8),
                             *(int *)((int)this + 8),(int)local_1a,*(int *)((int)this + 4) << 3,
                             *param_1,&local_c);
        if (iVar3 != 0) {
          local_8 = -0x7ff8ffa9;
        }
        *(int *)((int)this + 0x18) = (local_c * *(int *)((int)this + 0xc)) / *(int *)((int)this + 8)
        ;
      }
      goto LAB_633a1552;
    }
    if (local_20 == 0x1000003) {
      puVar2 = operator_new(0x16bb8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_633a1f60(puVar2);
      }
      *(undefined4 **)this = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        iVar3 = FUN_633a2000(puVar2,*(int *)((int)this + 0xc) / *(int *)((int)this + 8),
                             *(int *)((int)this + 8),(int)local_1a,*(int *)((int)this + 4) << 3,
                             *param_1,(uint)local_14,(uint)uStack_12,&local_c);
        if (iVar3 != 0) {
          local_8 = -0x7ff8ffa9;
        }
      }
      *(uint *)((int)this + 0x18) =
           (local_c * *(int *)((int)this + 0xc)) / *(int *)((int)this + 8) + local_18;
      goto LAB_633a1552;
    }
  }
  local_8 = -0x7ffbfffb;
LAB_633a1552:
  iVar3 = local_8;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x18) * *(int *)((int)this + 8) * 2;
  *(int *)((int)this + 0x20) = local_c;
  if (local_8 != 0) {
    FUN_633a1750(this);
  }
  return iVar3;
}


