/* Module: oggplug.dll
   Function: FUN_004442c0
   Address: 004442c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_004442c0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  double local_18;
  uint local_10;
  
  iVar6 = -1;
  local_18 = 0.0;
  if (*(int *)(param_1 + 0x58) < 2) {
    return (float10)_DAT_0044d828;
  }
  lVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    lVar8 = FUN_004433a0(param_1,-1);
    fVar7 = FUN_00443410(param_1,-1);
    local_18 = (double)fVar7;
    iVar6 = *(int *)(param_1 + 0x34) + -1;
    lVar4 = lVar8;
    if (-1 < iVar6) {
      while( true ) {
        local_10 = (uint)lVar8;
        uVar1 = *(uint *)(*(int *)(param_1 + 0x44) + iVar6 * 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 4 + iVar6 * 8);
        lVar4 = CONCAT44(iVar5,uVar1);
        iVar5 = ((int)((ulonglong)lVar8 >> 0x20) - iVar5) - (uint)(local_10 < uVar1);
        lVar3 = lVar8 - lVar4;
        lVar2 = lVar8 - lVar4;
        lVar8 = lVar8 - lVar4;
        fVar7 = FUN_00443410(param_1,iVar6);
        local_18 = (double)((float10)local_18 - fVar7);
        lVar4 = lVar8;
        if (iVar5 < *(int *)(param_1 + 0x54)) break;
        if (((iVar5 <= *(int *)(param_1 + 0x54)) &&
            (lVar4 = lVar2, local_10 - uVar1 <= *(uint *)(param_1 + 0x50))) ||
           (iVar6 = iVar6 + -1, lVar4 = lVar3, iVar6 < 0)) break;
      }
    }
  }
  return (float10)CONCAT44((*(int *)(param_1 + 0x54) - (int)((ulonglong)lVar4 >> 0x20)) -
                           (uint)(*(uint *)(param_1 + 0x50) < (uint)lVar4),
                           *(uint *)(param_1 + 0x50) - (uint)lVar4) /
         (float10)*(int *)(*(int *)(param_1 + 0x48) + 8 + iVar6 * 0x20) + (float10)local_18;
}


