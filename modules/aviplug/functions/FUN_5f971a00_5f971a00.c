/* Module: aviplug.dll
   Function: FUN_5f971a00
   Address: 5f971a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971a00(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_8;
  
  piVar5 = param_2;
  for (iVar6 = 0x180; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_8 = 6;
  iVar6 = *(int *)(param_1 + 4);
  piVar5 = (int *)(param_1 + 8);
  do {
    puVar2 = (uint *)*piVar5;
    iVar8 = 1;
    uVar3 = *puVar2;
    uVar7 = (int)uVar3 >> 2 & 1;
    puVar10 = puVar2 + 2;
    uVar9 = puVar2[1];
    iVar1 = uVar7 * 0x218;
    if ((uVar9 & 0x100) != 0) {
      uVar9 = uVar9 | 0xfffffe00;
    }
    *param_2 = (int)((&DAT_5f9f52e0)[uVar7 * 0x86] * uVar9) >>
               ((byte)*(undefined4 *)(&DAT_5f9f52dc + iVar1) & 0x1f);
    uVar9 = *puVar10;
    for (; (uVar9 != 0x1556 && (iVar8 = iVar8 + uVar9, iVar8 < 0x40)); iVar8 = iVar8 + 1) {
      puVar2 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      iVar4 = *(int *)(*(int *)(&DAT_5f9f52c8 + iVar1) + iVar8 * 4);
      param_2[iVar4] =
           (int)((*puVar2 <<
                 ((byte)*(undefined4 *)
                         (&DAT_5f9daa78 +
                         *(int *)(*(int *)(&DAT_5f9f52cc + iVar1) + iVar4 * 4) * 4 +
                         ((uVar3 & 3) + iVar6 * 4) * 0x10) & 0x1f)) *
                (&DAT_5f9f52e0)[uVar7 * 0x86 + iVar4]) >>
           ((byte)*(undefined4 *)(&DAT_5f9f52dc + iVar1) & 0x1f);
      uVar9 = *puVar10;
    }
    piVar5 = piVar5 + 1;
    param_2 = param_2 + 0x40;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


