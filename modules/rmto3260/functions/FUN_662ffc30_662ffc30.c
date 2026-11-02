/* Module: rmto3260.dll
   Function: FUN_662ffc30
   Address: 662ffc30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662ffc30(void *this,int param_1,undefined4 param_2,int param_3,short *param_4,int param_5,
            uint param_6)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  short sVar11;
  undefined4 *puVar12;
  uint local_14;
  uint local_10;
  uint local_c;
  
  *param_4 = 0;
  uVar8 = *(ushort *)((int)this + 6);
  local_14 = 0;
  uVar4 = 0;
  if (uVar8 == 0) {
    return 0;
  }
  local_c = 0;
  do {
    sVar2 = -1;
    if (*(int *)(param_5 + (local_14 & 0xffff) * 4) == 0) {
      sVar11 = 1;
      uVar3 = 0;
      if (uVar8 != 0) {
        do {
          if ((uVar3 & 1) == 0) {
            sVar1 = sVar11 + 1;
            sVar2 = sVar11;
          }
          else {
            sVar1 = sVar11;
            sVar2 = -sVar11;
          }
          sVar11 = sVar1;
          sVar2 = uVar4 + sVar2;
          if (((-1 < sVar2) && (sVar2 < (short)uVar8)) &&
             (sVar2 = (short)((int)sVar2 % (int)(uVar8 + 1)), *(int *)(param_5 + sVar2 * 4) != 0)) {
            *param_4 = *param_4 + *(short *)((int)this + 4);
            break;
          }
          sVar2 = -1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar8);
      }
      if (sVar2 == -1) {
        return 1;
      }
      iVar7 = 0;
      local_10 = local_c;
      uVar8 = 0;
      if (*(short *)((int)this + 6) != 0) {
        uVar6 = (uint)*(ushort *)((int)this + 4);
        do {
          puVar10 = (undefined4 *)((int)sVar2 * uVar6 + iVar7 + param_1);
          puVar9 = (undefined4 *)(param_3 + (local_10 & 0xffff));
          for (uVar5 = param_6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = param_6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          uVar6 = (uint)*(ushort *)((int)this + 4);
          iVar7 = iVar7 + param_6;
          local_10 = local_10 + uVar6;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)((int)this + 6));
      }
    }
    else {
      uVar8 = *(ushort *)((int)this + 4);
      uVar3 = 0;
      *param_4 = *param_4 + uVar8;
      if (*(short *)((int)this + 6) != 0) {
        puVar10 = (undefined4 *)((local_14 & 0xffff) * (uint)uVar8 + param_1);
        uVar6 = local_c;
        do {
          puVar9 = puVar10;
          puVar12 = (undefined4 *)(param_3 + (uVar6 & 0xffff));
          for (uVar5 = param_6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar5 = param_6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          puVar10 = (undefined4 *)((int)puVar10 + param_6);
          uVar6 = uVar6 + *(ushort *)((int)this + 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)((int)this + 6));
      }
    }
    uVar8 = *(ushort *)((int)this + 6);
    local_14 = (uint)((ulonglong)(local_14 + 1 & 0xffff) % (ulonglong)(longlong)(int)(uVar8 + 1));
    uVar4 = uVar4 + 1;
    local_c = local_c + param_6;
    if (uVar8 <= uVar4) {
      return 0;
    }
  } while( true );
}


