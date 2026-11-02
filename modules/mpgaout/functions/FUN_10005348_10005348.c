/* Module: mpgaout.dll
   Function: FUN_10005348
   Address: 10005348
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10005348(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_20;
  uint local_1c;
  
  iVar4 = *(int *)(param_8 + 0x10);
  iVar5 = *(int *)(param_8 + 0x14);
  local_20 = 0;
LAB_1000536c:
  iVar10 = local_20 + 1;
  iVar11 = 0;
LAB_10005384:
  iVar12 = 0;
  iVar1 = iVar11 + 1;
  do {
    if (iVar11 < iVar5) {
      if (iVar4 <= iVar12) break;
    }
    else if (0 < iVar12) break;
    iVar3 = iVar11 * 4;
    if (*(int *)(param_6 + iVar12 * 0x80 + iVar3) != 0) {
      if ((iVar4 == 2) && (iVar5 <= iVar11)) {
        dVar9 = *(double *)(param_5 + local_20 * 0x100 + iVar11 * 8) *
                (double)(&DAT_1001f900)[*(int *)(param_4 + iVar11 * 4)];
      }
      else {
        dVar9 = *(double *)(iVar12 * 0x2400 + param_3 + local_20 * 0x100 + iVar11 * 8) *
                (double)(&DAT_1001f900)[*(int *)(param_2 + iVar12 * 0x180 + iVar3)];
      }
      iVar6 = *(int *)(param_6 + iVar12 * 0x80 + iVar3);
      dVar9 = dVar9 * *(double *)(*(int *)(param_1 + 0xc564) + -8 + iVar6 * 8) +
              *(double *)(*(int *)(param_1 + 0xc568) + -8 + iVar6 * 8);
      bVar8 = dVar9 < 0.0;
      if (bVar8) {
        dVar9 = dVar9 + 1.0;
      }
      uVar7 = 1 << ((byte)iVar6 & 0x1f);
      puVar2 = (uint *)(iVar12 * 0x1200 + param_7 + local_20 * 0x80 + iVar3);
      local_1c = (uint)(longlong)ROUND((double)(int)uVar7 * dVar9);
      *puVar2 = local_1c;
      if (!bVar8) {
        *puVar2 = local_1c | uVar7;
      }
    }
    iVar12 = iVar12 + 1;
  } while( true );
  iVar11 = iVar1;
  if (0x1f < iVar1) goto code_r0x100054fd;
  goto LAB_10005384;
code_r0x100054fd:
  local_20 = iVar10;
  if (0xb < iVar10) {
    return;
  }
  goto LAB_1000536c;
}


