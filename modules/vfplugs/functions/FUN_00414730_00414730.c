/* Module: vfplugs.dll
   Function: FUN_00414730
   Address: 00414730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00414730(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(uint *)(param_1 + 0x88) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
      if (((*(uint *)(param_1 + 0x88) & 1) == 0) && (uVar4 = *(uint *)(param_1 + 0x7c), uVar4 != 0))
      {
        uVar2 = 0;
        if (uVar4 != 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 0xa0) + 0x10);
          do {
            if ((*puVar1 & 0x20000) != 0) goto LAB_0041477f;
            uVar2 = uVar2 + 1;
            puVar1 = puVar1 + 6;
          } while (uVar2 < uVar4);
        }
      }
      else {
LAB_0041477f:
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
    }
    if (((*(uint *)(param_1 + 0x4c) & 2) != 0) &&
       (uVar4 = *(uint *)(param_1 + 0xb4) & 0x700000, uVar4 != 0)) {
      uVar2 = *(uint *)(param_1 + 0x7c);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 == 0) {
          return;
        }
        puVar1 = (uint *)(*(int *)(param_1 + 0xa0) + 0x10);
        while ((puVar1[-3] == 0 || (uVar4 <= (*puVar1 & 0x700000)))) {
          uVar3 = uVar3 + 1;
          puVar1 = puVar1 + 6;
          if (uVar2 <= uVar3) {
            return;
          }
        }
      }
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
    }
  }
  return;
}


