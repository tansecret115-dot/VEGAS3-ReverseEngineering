/* Module: sftrans1.dll
   Function: FUN_004e7c60
   Address: 004e7c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e7c60(int param_1,int *param_2)

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
  
  iVar6 = *(int *)(param_1 + 0x223c);
  iVar7 = *param_2;
  iVar10 = 0;
  iVar5 = iVar6 * 0x4000;
  local_8 = 0;
  local_c = 0;
  if ((iVar5 < iVar7) && (iVar5 < param_2[2])) {
    return 0;
  }
  if ((-1 < iVar7) && (-1 < param_2[2])) {
    iVar10 = 1;
  }
  iVar1 = param_2[4];
  if ((iVar1 < 0) && (param_2[6] < 0)) {
    return 0;
  }
  if ((iVar1 <= iVar5) && (param_2[6] <= iVar5)) {
    iVar10 = iVar10 + 1;
  }
  if (iVar10 != 2) {
    iVar10 = param_2[6];
    iVar8 = iVar1;
    if (iVar1 < iVar10) {
      iVar8 = iVar10;
    }
    iVar2 = param_2[2];
    iVar9 = iVar2;
    if (iVar7 <= iVar2) {
      iVar9 = iVar7;
    }
    if (iVar7 < 0) {
      local_8 = -iVar7;
      *param_2 = 0;
    }
    if (iVar2 < 0) {
      if (-local_8 != iVar2 && local_8 <= -iVar2) {
        local_8 = -iVar2;
      }
      param_2[2] = 0;
    }
    if (iVar5 < iVar1) {
      local_c = iVar1 + iVar6 * -0x4000;
      param_2[4] = iVar5;
    }
    if (iVar5 < iVar10) {
      iVar10 = iVar10 + iVar6 * -0x4000;
      if (local_c < iVar10) {
        local_c = iVar10;
      }
      param_2[6] = iVar5;
    }
    if ((local_c != 0) || (local_8 != 0)) {
      if (*(int *)(param_1 + 0x2214) == 2) {
        iVar6 = (int)(((longlong)(param_2[0xb] - param_2[10]) * 0x4000) / (longlong)(iVar8 - iVar9))
        ;
        iVar7 = (int)(((longlong)(param_2[0xd] - param_2[0xc]) * 0x4000) / (longlong)(iVar8 - iVar9)
                     );
        if (local_8 != 0) {
          lVar3 = (longlong)local_8 * (longlong)iVar6;
          param_2[10] = param_2[10] + ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12)
          ;
          lVar3 = (longlong)local_8 * (longlong)iVar7;
          param_2[0xc] = param_2[0xc] +
                         ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
        }
        if (local_c != 0) {
          lVar3 = (longlong)local_c * (longlong)iVar6;
          param_2[0xb] = param_2[0xb] -
                         ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
          lVar3 = (longlong)local_c * (longlong)iVar7;
          param_2[0xd] = param_2[0xd] -
                         ((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12);
        }
        iVar6 = param_2[2];
        if (*param_2 <= param_2[2]) {
          param_2[0x14] = *param_2;
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x2214) != 3) {
          return 1;
        }
        fVar4 = (float)local_8 * _DAT_00561084;
        if (local_8 != 0) {
          param_2[10] = (int)(fVar4 * (float)param_2[0xb] + (float)param_2[10]);
          param_2[0xc] = (int)(fVar4 * (float)param_2[0xd] + (float)param_2[0xc]);
          param_2[0xe] = (int)(fVar4 * (float)param_2[0xf] + (float)param_2[0xe]);
        }
        iVar6 = param_2[2];
        if (*param_2 <= param_2[2]) {
          iVar6 = *param_2;
        }
      }
      param_2[0x14] = iVar6;
    }
  }
  return 1;
}


