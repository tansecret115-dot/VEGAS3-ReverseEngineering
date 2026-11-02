/* Module: rmto3260.dll
   Function: FUN_662e74c0
   Address: 662e74c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_662e74c0(void *this,uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  undefined2 *puVar5;
  short *psVar6;
  void *this_00;
  uint uVar7;
  int local_8;
  
  uVar7 = 0;
  local_8 = 0;
  if ((*(int *)((int)this + 0x74) == 0) || (*(int *)((int)this + 0x70) == 0)) {
    return -0x7fffbffb;
  }
  if (*(ushort *)((int)this + 0x6e) != 0) {
    psVar6 = (short *)(*(int *)((int)this + 0x74) + 0xe);
    do {
      if ((short)param_1[1] == *psVar6) {
        iVar2 = *(int *)(**(int **)((int)this + 0x6a) + uVar7 * 4);
        if (*(int *)(iVar2 + 0x28) != 0) {
          *(byte *)(param_1 + 2) = (byte)param_1[2] | 2;
          *(undefined4 *)(iVar2 + 0x28) = 0;
        }
        if ((param_1[2] & 2) != 2) {
          return 0;
        }
        if (*(int *)((int)this + 0x8c) < param_3) {
          if (*(uint *)(iVar2 + 0x20) != 0) {
            if (*(uint *)(iVar2 + 0x24) < *param_1) {
              dVar4 = _DAT_663079f8;
              if (*(uint *)(iVar2 + 4) != 0) {
                dVar4 = (double)*(uint *)(iVar2 + 4);
              }
              if (((double)*(uint *)(iVar2 + 0x20) * _DAT_66307a00) / dVar4 < _DAT_663079f8)
              goto LAB_662e75a6;
            }
            goto LAB_662e7683;
          }
LAB_662e75a6:
          puVar5 = operator_new(0xe);
          if (puVar5 == (undefined2 *)0x0) {
            local_8 = -0x7ff8fff2;
          }
          if (local_8 == 0) {
            *puVar5 = 0;
            if ((*(int *)(iVar2 + 0x30) == 0) || (*(uint *)(iVar2 + 0x34) != *param_1)) {
              *(uint *)(puVar5 + 1) = *param_1;
              *(undefined4 *)(puVar5 + 3) = param_2;
              *(int *)(puVar5 + 5) = param_3;
            }
            else {
              *(uint *)(puVar5 + 1) = *(uint *)(iVar2 + 0x34);
              *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(iVar2 + 0x38);
              *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(iVar2 + 0x3c);
            }
            this_00 = (void *)(uVar7 * 0x10 + *(int *)((int)this + 0x70));
            FUN_662ed5e0(this_00,*(int *)((int)this_00 + 4),puVar5);
            piVar1 = (int *)(*(int *)((int)this + 0x74) + 10 + uVar7 * 0x14);
            *piVar1 = *piVar1 + 1;
            *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 0xe;
            *(uint *)(iVar2 + 0x24) = *param_1;
          }
        }
        else {
LAB_662e7683:
          if ((*(uint *)(iVar2 + 0x24) < *param_1) && (*(uint *)(iVar2 + 0x34) != *param_1)) {
            *(undefined4 *)(iVar2 + 0x30) = 1;
            uVar3 = *param_1;
            *(undefined4 *)(iVar2 + 0x38) = param_2;
            *(uint *)(iVar2 + 0x34) = uVar3;
            *(int *)(iVar2 + 0x3c) = param_3;
          }
        }
        if (param_4 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_4;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      psVar6 = psVar6 + 10;
    } while (uVar7 < *(ushort *)((int)this + 0x6e));
  }
  if (*(int *)((int)this + 0x8c) < param_3) {
    *(int *)((int)this + 0x8c) = param_3;
  }
  if ((local_8 == 0) && (*(ushort *)((int)this + 0x6e) <= uVar7)) {
    local_8 = -0x7ffbf03d;
  }
  *(int *)((int)this + 0x24) = local_8;
  return local_8;
}


