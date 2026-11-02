/* Module: rmbe3260.dll
   Function: FUN_660077f0
   Address: 660077f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660077f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    do {
      uVar3 = *(uint *)(param_1 + 0x114);
      uVar5 = 0;
      local_8 = 0;
      if (uVar3 != 0) {
        uVar4 = local_c & 0xffff;
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 0x10c) + (uVar3 * uVar4 + uVar5) * 4);
          if (piVar1 != (int *)0x0) {
            if ((*(int *)(param_1 + 0x118) == 0) || (uVar4 != *(int *)(param_1 + 0x110) - 1U)) {
              (**(code **)(*piVar1 + 0xc))();
            }
            else {
              (**(code **)(*piVar1 + 0x11c))(&DAT_66075004);
              (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) +
                                     (uVar4 * *(int *)(param_1 + 0x114) + uVar5) * 4) + 0xbc))();
            }
            puVar2 = *(undefined4 **)
                      (*(int *)(param_1 + 0x10c) + (uVar4 * *(int *)(param_1 + 0x114) + uVar5) * 4);
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)
             (*(int *)(param_1 + 0x10c) + (uVar4 * *(int *)(param_1 + 0x114) + uVar5) * 4) = 0;
          }
          uVar3 = *(uint *)(param_1 + 0x114);
          local_8 = local_8 + 1;
          uVar5 = local_8 & 0xffff;
        } while (uVar5 < uVar3);
      }
      local_c = local_c + 1;
    } while ((local_c & 0xffff) < *(uint *)(param_1 + 0x110));
  }
  operator_delete(*(void **)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}


