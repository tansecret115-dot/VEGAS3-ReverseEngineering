/* Module: erv23260.dll
   Function: FUN_637f5260
   Address: 637f5260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f5260(void *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = *(uint *)((int)param_1 + 0x2c);
  bVar2 = true;
  local_8 = 3;
  local_10 = 0;
  uVar4 = local_c;
  uVar7 = *(int *)((int)param_1 + 0x30) - 1;
  uVar9 = local_10;
  do {
    if (uVar4 == 0) {
      return;
    }
    bVar1 = (int)uVar9 < (int)uVar7;
    bVar3 = false;
    iVar8 = (-(uint)bVar1 & 2) - 1;
    uVar5 = uVar4;
    uVar6 = uVar7;
    local_10 = uVar9;
LAB_637f52b7:
    if (!bVar1) {
LAB_637f52c4:
      if ((int)uVar9 < (int)uVar7) goto LAB_637f5321;
LAB_637f52c9:
      if ((*(byte *)(*(int *)((int)param_1 + 0x20) + uVar9) & 0x40) == 0) {
LAB_637f531a:
        uVar9 = uVar9 + iVar8;
      }
      else {
        FUN_637f5360(param_1,uVar9);
        if (*(uint *)((int)param_1 + 0xa0) < local_8) {
          uVar5 = local_c;
          uVar6 = uVar9;
          if (!bVar3) {
            bVar3 = true;
            local_10 = uVar9;
          }
          goto LAB_637f531a;
        }
        FUN_637f5480(param_1);
        uVar5 = local_c - 1;
        uVar9 = uVar9 + iVar8;
        local_c = uVar5;
      }
      goto LAB_637f52b7;
    }
    if ((int)uVar9 <= (int)uVar7) goto LAB_637f52c9;
    if (!bVar1) goto LAB_637f52c4;
LAB_637f5321:
    if (uVar5 == 0) {
      return;
    }
    uVar7 = uVar6;
    if ((uVar5 < uVar4) && (uVar7 = local_10, local_10 = uVar6, bVar2)) {
      bVar2 = false;
      uVar4 = uVar5;
      uVar9 = uVar6;
    }
    else {
      bVar2 = true;
      local_8 = local_8 - 1;
      uVar4 = uVar5;
      uVar9 = local_10;
    }
  } while( true );
}


