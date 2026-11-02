/* Module: vegas30k.dll
   Function: ClipIntersect
   Address: 01065d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall A_Buffer::ClipIntersect(class CScanlineIntersect *) */

int __thiscall A_Buffer::ClipIntersect(A_Buffer *this,CScanlineIntersect *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  
                    /* 0x65d60  23  ?ClipIntersect@A_Buffer@@AAEHPAVCScanlineIntersect@@@Z */
  iVar6 = *(int *)(this + 0x223c);
  iVar7 = *(int *)param_1;
  iVar10 = 0;
  iVar5 = iVar6 * 0x4000;
  local_8 = 0;
  local_c = 0;
  if ((iVar5 < iVar7) && (iVar5 < *(int *)(param_1 + 8))) {
    return 0;
  }
  if ((-1 < iVar7) && (-1 < *(int *)(param_1 + 8))) {
    iVar10 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x18) < 0)) {
    return 0;
  }
  if ((iVar1 <= iVar5) && (*(int *)(param_1 + 0x18) <= iVar5)) {
    iVar10 = iVar10 + 1;
  }
  if (iVar10 != 2) {
    iVar10 = *(int *)(param_1 + 0x18);
    iVar8 = iVar1;
    if (iVar1 < iVar10) {
      iVar8 = iVar10;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar9 = iVar2;
    if (iVar7 <= iVar2) {
      iVar9 = iVar7;
    }
    if (iVar7 < 0) {
      local_8 = -iVar7;
      *(undefined4 *)param_1 = 0;
    }
    if (iVar2 < 0) {
      if (-local_8 != iVar2 && local_8 <= -iVar2) {
        local_8 = -iVar2;
      }
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (iVar5 < iVar1) {
      local_c = iVar1 + iVar6 * -0x4000;
      *(int *)(param_1 + 0x10) = iVar5;
    }
    if (iVar5 < iVar10) {
      iVar10 = iVar10 + iVar6 * -0x4000;
      if (local_c < iVar10) {
        local_c = iVar10;
      }
      *(int *)(param_1 + 0x18) = iVar5;
    }
    if ((local_c != 0) || (local_8 != 0)) {
      if (*(int *)(this + 0x2214) == 2) {
        iVar6 = (int)(((longlong)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) * 0x4000) /
                     (longlong)(iVar8 - iVar9));
        iVar7 = (int)(((longlong)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) * 0x4000) /
                     (longlong)(iVar8 - iVar9));
        if (local_8 != 0) {
          lVar3 = (longlong)local_8 * (longlong)iVar6;
          *(uint *)(param_1 + 0x28) =
               *(int *)(param_1 + 0x28) +
               ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
          lVar3 = (longlong)local_8 * (longlong)iVar7;
          *(uint *)(param_1 + 0x30) =
               *(int *)(param_1 + 0x30) +
               ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
        }
        if (local_c != 0) {
          lVar3 = (longlong)local_c * (longlong)iVar6;
          *(uint *)(param_1 + 0x2c) =
               *(int *)(param_1 + 0x2c) -
               ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
          lVar3 = (longlong)local_c * (longlong)iVar7;
          *(uint *)(param_1 + 0x34) =
               *(int *)(param_1 + 0x34) -
               ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
        }
        iVar6 = *(int *)(param_1 + 8);
        if (*(int *)param_1 <= *(int *)(param_1 + 8)) {
          *(int *)(param_1 + 0x50) = *(int *)param_1;
          return 1;
        }
      }
      else {
        if (*(int *)(this + 0x2214) != 3) {
          return 1;
        }
        fVar4 = (float)local_8 * _DAT_011dd9a8;
        if (local_8 != 0) {
          *(float *)(param_1 + 0x28) =
               fVar4 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28);
          *(float *)(param_1 + 0x30) =
               fVar4 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x30);
          *(float *)(param_1 + 0x38) =
               fVar4 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x38);
        }
        iVar6 = *(int *)(param_1 + 8);
        if (*(int *)param_1 <= *(int *)(param_1 + 8)) {
          iVar6 = *(int *)param_1;
        }
      }
      *(int *)(param_1 + 0x50) = iVar6;
    }
  }
  return 1;
}


