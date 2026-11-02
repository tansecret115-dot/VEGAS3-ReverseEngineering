/* Module: rmto3260.dll
   Function: FUN_662c6a20
   Address: 662c6a20
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __cdecl FUN_662c6a20(int param_1,byte *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *this;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  uVar4 = param_3;
  pbVar8 = param_2;
  *param_4 = param_3;
  bVar1 = *param_2 & 0xc0;
  if ((bVar1 != 0xc0) && (bVar1 != 0x80)) {
    return param_2;
  }
  uVar6 = 0;
  local_8 = param_2;
  if (bVar1 == 0x80) {
    local_18 = 0;
    iVar2 = FUN_662c6bd0(param_2 + 2,&local_18,(uint *)(param_2 + 2));
    local_14 = 0;
    iVar3 = FUN_662c6bd0(&local_14,(uint *)&local_14,(uint *)(pbVar8 + iVar2 + 2));
    uVar6 = iVar2 + 2 + iVar3 + 1 + local_14;
    if (uVar4 <= uVar6) {
      return pbVar8;
    }
    local_8 = pbVar8 + uVar6;
    if ((*local_8 & 0xc0) != 0xc0) {
      return pbVar8;
    }
  }
  local_10 = operator_new(uVar4 * 2);
  local_c = 0;
  if (uVar6 != 0) {
    pbVar9 = local_10;
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    pbVar7 = pbVar8;
    for (uVar5 = uVar6 & 3; pbVar8 = param_2, uVar4 = param_3, local_c = uVar6, uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *pbVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    }
  }
  if (local_8 != (byte *)0x0) {
    do {
      param_3 = 0;
      iVar2 = FUN_662c6bd0(&param_3,&param_3,(uint *)(local_8 + 1));
      pbVar9 = local_8;
      uVar5 = iVar2 + 1;
      param_2 = (byte *)0x0;
      iVar2 = FUN_662c6bd0(this,(uint *)&param_2,(uint *)(local_8 + uVar5));
      pbVar7 = local_10 + local_c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar7 = pbVar7 + 1;
      }
      iVar10 = local_c + uVar5;
      param_2 = param_2 + -param_1;
      iVar3 = FUN_662c6c30((uint)param_2,(undefined4 *)(local_10 + iVar10));
      iVar10 = iVar10 + iVar3;
      pbVar9 = local_8 + uVar5 + iVar2;
      pbVar7 = local_10 + iVar10;
      for (uVar6 = param_3 + 1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar6 = param_3 + 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar7 = pbVar7 + 1;
      }
      local_c = iVar10 + 1 + param_3;
      *param_4 = local_c;
      local_8 = local_8 + param_3 + uVar5 + iVar2 + 1;
      if (pbVar8 + uVar4 <= local_8) {
        local_8 = (byte *)0x0;
      }
    } while (local_8 != (byte *)0x0);
  }
  return local_10;
}


