/* Module: vegas30k.dll
   Function: FUN_011b2a70
   Address: 011b2a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b2a70(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 unaff_EBP;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 local_1c;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 1;
  }
  local_1c = 0;
  local_18[0] = 0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x9cc) + 0x2c))(*(int **)(param_1 + 0x9cc));
  piVar8 = *(int **)(param_1 + 0x9cc);
  puVar9 = &stack0xffffffe0;
  (**(code **)(*piVar8 + 0x24))(piVar8,puVar9);
  (**(code **)(**(int **)(param_1 + 0x9cc) + 0x28))(*(int **)(param_1 + 0x9cc),local_18);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))
                    (*(int **)(param_1 + 0x20),unaff_EBP,local_1c,puVar9,piVar8);
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x1b8) = (int)local_18 + *(int *)(param_1 + 0x1b8) + -4;
  }
  uVar5 = *(uint *)(param_1 + 0x1ac);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x1a4) / (uint)*(ushort *)(param_1 + 0x182)) * 2 < uVar5) {
    do {
      if (!bVar1) {
        return iVar2;
      }
      piVar8 = *(int **)(param_1 + 0x1a0);
      puVar6 = (uint *)0x0;
      bVar1 = false;
      if (piVar8 != (int *)0x0) {
        iVar4 = 0;
        if (0 < *piVar8) {
          do {
            puVar3 = (uint *)(piVar8[1] * iVar4 + piVar8[2]);
            if ((puVar3[1] == *puVar3) && ((puVar6 == (uint *)0x0 || (puVar3[4] < puVar6[4])))) {
              puVar6 = puVar3;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *piVar8);
          if (puVar6 == (uint *)0x0) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            *(uint *)(param_1 + 0x1ac) = uVar5 - puVar6[5];
            puVar6[4] = 0xffffffff;
            puVar6[5] = 0;
            puVar6[1] = 0;
            puVar7 = (undefined4 *)puVar6[2];
            for (uVar5 = *puVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined1 *)puVar7 = 0;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
        }
      }
      uVar5 = *(uint *)(param_1 + 0x1ac);
    } while ((*(uint *)(param_1 + 0x1a4) / (uint)*(ushort *)(param_1 + 0x182)) * 2 < uVar5);
  }
  return iVar2;
}


