/* Module: vegas30.exe
   Function: FUN_00514410
   Address: 00514410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514410(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_a4;
  int local_a0;
  tagRECT local_9c;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  undefined4 local_5c [16];
  undefined1 local_1c [28];
  
  iVar6 = *(int *)(*param_1 + 0x98);
  local_a4 = 0x15;
  local_a0 = 0x15;
  GetClientRect((HWND)param_1[1],&local_9c);
  local_84 = (local_9c.left + local_9c.right) / 2;
  local_80 = (local_9c.bottom + local_9c.top) / 2;
  uVar4 = param_1[3] & 0x7fff8;
  if (uVar4 == 0x68) {
    fVar1 = *(float *)(iVar6 + 8);
    fVar2 = *(float *)(iVar6 + 0xc);
    fVar3 = *(float *)(iVar6 + 0x10);
    puVar7 = (undefined4 *)(iVar6 + 0x24);
    puVar9 = local_5c;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00512a70(param_1,0x3f800000,local_5c,&local_9c);
    if (((fVar1 == *(float *)(iVar6 + 8)) && (fVar2 == *(float *)(iVar6 + 0xc))) &&
       (fVar3 == *(float *)(iVar6 + 0x10))) {
      FUN_005a62e0(local_5c,param_1 + 6,(undefined4 *)(iVar6 + 0x24));
      FUN_005a6440(local_5c,local_5c,local_1c,0x3f8ccccd,0x3f8ccccd);
      FUN_00512a70(param_1,0,local_5c,&local_9c);
      return;
    }
  }
  else if (uVar4 == 0x88) {
    if (param_2 < local_a4) {
      iVar5 = param_1[0x34];
      iVar6 = iVar6 + 0x94;
LAB_00514591:
      FUN_0050d3b0(iVar6,iVar5);
      param_1[3] = param_1[3] & 0xfff80097U | 0x90;
      return;
    }
  }
  else if (uVar4 == 0x80) {
    if (param_3 < local_a0) {
      iVar5 = param_1[0x34];
      iVar6 = iVar6 + 0x98;
      goto LAB_00514591;
    }
  }
  else {
    if (((*(uint *)(iVar6 + 4) & 0x1e000) == 0x2000) && (uVar4 == 0x90)) {
      local_8c = (param_1[4] + param_2) / 2;
      local_88 = (param_1[5] + param_3) / 2;
      FUN_0050d680(&local_6c,&local_8c,iVar6,&local_a4);
      uVar4 = param_1[4] - param_2 >> 0x1f;
      iVar5 = (param_1[4] - param_2 ^ uVar4) - uVar4;
      uVar4 = param_1[5] - param_3 >> 0x1f;
      iVar8 = (param_1[5] - param_3 ^ uVar4) - uVar4;
      if ((param_1[3] & 2U) == 0) {
        fVar1 = _DAT_00619ab0;
        if ((param_1[3] & 4U) != 0) {
          fVar1 = _DAT_0061a460;
        }
      }
      else {
        fVar1 = _DAT_00619aa8;
        if ((1 < iVar5) && (1 < iVar8)) {
          fVar1 = (float)(local_9c.right - local_9c.left) / (float)iVar5;
          fVar2 = (float)(local_9c.bottom - local_9c.top) / (float)iVar8;
          if (fVar2 <= fVar1) {
            fVar1 = fVar2;
          }
        }
      }
      FUN_00512930(param_1,fVar1 * *(float *)(iVar6 + 8));
      FUN_0050d680(&local_7c,&local_84,iVar6,&local_a4);
      *(float *)(iVar6 + 0xc) = (local_7c - local_6c) + *(float *)(iVar6 + 0xc);
      *(float *)(iVar6 + 0x10) = (local_78 - local_68) + *(float *)(iVar6 + 0x10);
    }
    *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
  }
  return;
}


