/* Module: sfxpfx2.dll
   Function: FUN_5c89dab0
   Address: 5c89dab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89dab0(void *this,int *param_1,int param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint local_58;
  int local_48 [17];
  
  local_58 = 0;
  iVar3 = *(int *)((int)this + 0x44);
  if (iVar3 != 0) {
    local_58 = (uint)*(ushort *)(iVar3 + 2);
  }
  if (local_58 != 0) {
    piVar9 = local_48;
    for (uVar5 = local_58; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
  }
  dVar2 = (double)*param_1 * _DAT_5c8dc928;
  *(double *)((int)this + 0x58) = dVar2;
  *(double *)((int)this + 0x50) = _DAT_5c8dc920 - dVar2;
  local_48[0] = MulDiv(param_1[1],*(int *)(iVar3 + 4),10000);
  dVar2 = (double)(uint)param_1[2] * _DAT_5c8dc928;
  *(double *)((int)this + 0x68) = dVar2;
  *(double *)((int)this + 0x70) = dVar2;
  if (_DAT_5c8dc8e8 == *(double *)((int)this + 0x68)) {
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x60) = 1;
  }
  local_48[1] = local_48[0];
  iVar3 = FUN_5c89d930(this,param_1,param_2);
  *(uint *)((int)this + 0x48) = (uint)(-1 < iVar3);
  if (local_58 != 0) {
    piVar4 = local_48;
    piVar9 = (int *)((int)this + 0xe8);
    piVar6 = (int *)((int)this + 0x170);
    do {
      if (*piVar4 < 2) {
        *piVar4 = 2;
      }
      iVar1 = *piVar4;
      iVar7 = *piVar9;
      if (iVar7 < iVar1) {
        iVar7 = piVar6[2] + (iVar1 - iVar7);
        piVar6[2] = iVar7;
        if (*piVar6 < iVar7) {
          piVar6[2] = iVar7 - *piVar6;
        }
      }
      else if (iVar1 < iVar7) {
        iVar8 = piVar6[1];
        iVar7 = iVar7 + (iVar8 - iVar1);
        piVar6[1] = iVar7;
        if (*piVar6 < iVar7) {
          piVar6[1] = iVar7 - *piVar6;
        }
        if (iVar8 == piVar6[1]) {
          do {
            iVar7 = piVar9[0x10];
            iVar8 = iVar8 + 1;
            *(undefined4 *)(iVar7 + -8 + iVar8 * 8) = 0;
            *(undefined4 *)(iVar7 + -4 + iVar8 * 8) = 0;
            if (*piVar6 < iVar8) {
              iVar8 = piVar6[-1];
            }
          } while (iVar8 == piVar6[1]);
        }
      }
      *piVar9 = iVar1;
      piVar6 = piVar6 + 6;
      piVar4 = piVar4 + 1;
      piVar9 = piVar9 + 1;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  return iVar3;
}


