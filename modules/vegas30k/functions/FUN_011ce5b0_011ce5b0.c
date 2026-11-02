/* Module: vegas30k.dll
   Function: FUN_011ce5b0
   Address: 011ce5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_011ce5b0(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_24;
  int iStack_20;
  undefined8 local_1c;
  longlong local_14;
  uint local_8;
  
  local_14 = CONCAT44(local_14._4_4_,2);
  iVar7 = FUN_011cba10(0);
  FUN_011cb5b0(*(undefined4 *)(param_1 + 0x2f4),&local_14,0xc,&local_1c);
  iVar8 = FUN_011cba10(0);
  lVar6 = local_1c;
  uVar9 = (uint)(iVar8 + iVar7) >> 1;
  iVar7 = (uVar9 - *(int *)(param_1 + 0x208)) - *(int *)(param_1 + 0x20c);
  if (-1 < iVar7) {
    iVar8 = local_1c._4_4_;
    local_8 = (uint)local_1c - *(uint *)(param_1 + 0x218);
    iStack_20 = (local_1c._4_4_ - *(int *)(param_1 + 0x21c)) -
                (uint)((uint)local_1c < *(uint *)(param_1 + 0x218));
    uVar1 = *(uint *)(*(int *)(param_1 + 0x60) + 4);
    if (((local_1c < 0) || ((local_1c._4_4_ < 1 && ((uint)local_1c < uVar1 * 3)))) ||
       ((-1 < iStack_20 && ((0 < iStack_20 || (uVar1 <= local_8)))))) {
      *(uint *)(param_1 + 0x218) = (uint)local_1c;
      iVar10 = uVar9 - *(int *)(param_1 + 0x208);
      *(int *)(param_1 + 0x21c) = local_1c._4_4_;
      *(int *)(param_1 + 0x20c) = iVar10;
      iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 4);
      if ((local_1c._4_4_ < 1) && ((local_1c < 0 || ((uint)local_1c < (uint)(iVar2 * 3))))) {
        local_14 = __alldiv(iVar10 * iVar2,0,1000,0);
        local_24 = (uint)local_1c;
        iStack_20 = iVar8;
      }
      else {
        local_14 = __alldiv(iVar2 * iVar7,0,1000,0);
        local_24 = local_8;
      }
      dVar3 = _DAT_011db3e8 - (double)CONCAT44(iStack_20,local_24) / (double)local_14;
      dVar4 = _DAT_011dad58 - *(double *)(param_1 + 800);
      dVar5 = *(double *)(param_1 + 800) + _DAT_011dad58;
      if ((dVar4 <= dVar3) && (dVar4 = dVar3, dVar5 < dVar3)) {
        dVar4 = dVar5;
      }
      uVar9 = 0;
      if ((0 < iVar8) ||
         ((dVar3 = _DAT_011db3f0, -1 < lVar6 && ((uint)(iVar2 * 2) <= (uint)local_1c)))) {
        uVar9 = 0;
        if ((0 < iVar8) ||
           ((dVar3 = _DAT_011e2af8, -1 < lVar6 && (uVar9 = iVar2 * 3, uVar9 <= (uint)local_1c)))) {
          uVar9 = 0;
          if ((0 < iVar8) ||
             ((dVar3 = _DAT_011ec520, -1 < lVar6 && ((uint)(iVar2 * 4) <= (uint)local_1c)))) {
            uVar9 = 0;
            if ((0 < iVar8) ||
               ((dVar3 = _DAT_011ec518, -1 < lVar6 && ((uint)(iVar2 * 5) <= (uint)local_1c)))) {
              uVar9 = iVar2 * 6;
              if ((0 < iVar8) || ((dVar3 = _DAT_011ec510, -1 < lVar6 && (uVar9 <= (uint)local_1c))))
              {
                uVar9 = iVar2 * 7;
                dVar3 = _DAT_011ec508;
              }
            }
          }
        }
      }
      *(double *)(param_1 + 0x288) =
           dVar3 * *(double *)(param_1 + 0x288) + (_DAT_011dad58 - dVar3) * dVar4;
    }
    return uVar9;
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0x3ff00000;
  return uVar9;
}


