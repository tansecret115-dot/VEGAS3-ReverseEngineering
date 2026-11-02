/* Module: rmto3260.dll
   Function: FUN_662ccd00
   Address: 662ccd00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ccd00(void *this,void *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint local_20;
  byte *local_10;
  uint local_c;
  int local_8;
  
  iVar3 = 0;
  uVar1 = *(uint *)((int)param_1 + 8);
  local_8 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    do {
      if (iVar3 != 0) break;
      pbVar2 = (byte *)FUN_662e3010(param_1,local_c,&local_10);
      if (pbVar2 != (byte *)0x0) {
        if (local_10 != (byte *)0x0) {
          local_20 = (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
                     (uint)pbVar2[3];
          iVar3 = local_8;
        }
        if (local_20 < 0x434f4e55) {
          if (local_20 == 0x434f4e54) {
            iVar3 = FUN_662cdc20(this,(int)pbVar2,(int)local_10);
            local_8 = iVar3;
          }
          else {
            if (local_20 != 0x2e524d46) goto LAB_662ccdf2;
            iVar3 = FUN_662cce60((int)this);
            local_8 = iVar3;
          }
        }
        else if (local_20 < 0x494e4459) {
          if (local_20 == 0x494e4458) {
            FUN_662f0810(*(int **)((int)this + 0x28),s____________________________6630a3a0);
            FUN_662f0810(*(int **)((int)this + 0x28),s_RM_INDEX_OBJECT_6630a38c);
          }
          else if (local_20 == 0x44415441) {
            iVar3 = FUN_662cdac0((int)this);
            local_8 = iVar3;
          }
          else {
LAB_662ccdf2:
            FUN_662f0810(*(int **)((int)this + 0x28),s____________________________6630a3a0);
            FUN_662f0810(*(int **)((int)this + 0x28),s_UNKNOWN_HEADER_OBJECT_6630a374);
          }
        }
        else if (local_20 == 0x4d445052) {
          iVar3 = FUN_662cd360(this,pbVar2,local_10);
          local_8 = iVar3;
        }
        else {
          if (local_20 != 0x50524f50) goto LAB_662ccdf2;
          iVar3 = FUN_662ccfd0(this,(int)pbVar2,(int)local_10);
          local_8 = iVar3;
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar1);
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s____________________________6630a3a0);
  return iVar3;
}


