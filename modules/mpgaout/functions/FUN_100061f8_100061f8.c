/* Module: mpgaout.dll
   Function: FUN_100061f8
   Address: 100061f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100061f8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 0x18);
  iVar6 = 0;
  uVar4 = _DAT_100061f0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar6 + 1;
      if (0 < iVar9) {
        puVar5 = (uint *)(iVar6 * 0x180 + param_1);
        puVar8 = (undefined8 *)(param_3 + iVar6 * 0x100);
        iVar6 = 0;
        do {
          uVar7 = *puVar5;
          if (puVar5[0x20] < *puVar5) {
            uVar7 = puVar5[0x20];
          }
          if (puVar5[0x40] < uVar7) {
            uVar7 = puVar5[0x40];
          }
          puVar5 = puVar5 + 1;
          *puVar8 = (&DAT_1000c100)[uVar7];
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < iVar9);
      }
      iVar6 = iVar1;
      uVar4 = _DAT_100061f0;
    } while (iVar1 < iVar2);
  }
  for (; uVar3 = _DAT_100061f0, iVar9 < 0x20; iVar9 = iVar9 + 1) {
    *(undefined8 *)(param_3 + 0x100 + iVar9 * 8) = _DAT_100061f0;
    _DAT_100061f0 = uVar4;
    *(undefined8 *)(param_3 + iVar9 * 8) = uVar3;
    uVar4 = _DAT_100061f0;
    _DAT_100061f0 = uVar3;
  }
  _DAT_100061f0 = uVar4;
  return;
}


