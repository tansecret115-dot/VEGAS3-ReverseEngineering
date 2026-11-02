/* Module: rmto3260.dll
   Function: FUN_662d92e0
   Address: 662d92e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662d92e0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_10;
  uint local_c;
  undefined1 local_6 [2];
  
  local_10 = 0;
  if (*(short *)(param_1 + 0x72) != *(short *)(param_1 + 0x6a)) {
    return -0x7ffbf03f;
  }
  if (*(int *)(param_1 + 0xba) == 0) {
    local_10 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                         (*(undefined4 *)(param_1 + 0x10),
                          CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10),
                                   *(undefined2 *)(param_1 + 0x48)),*(undefined4 *)(param_1 + 0x18),
                          local_6,*(undefined4 *)(param_1 + 0x1c));
    local_c = 0;
    if (*(int *)(param_1 + 0x7a) != 0) {
      local_c = *(uint *)(param_1 + 0x86);
    }
    uVar2 = *(ushort *)(param_1 + 0x6c);
    if (local_c < uVar2) {
      do {
        uVar1 = *(ushort *)(param_1 + 0x74);
        if ((uVar2 <= uVar1) || ((*(int *)(param_1 + 0x7a) != 0 && (*(int *)(param_1 + 0x82) == 0)))
           ) break;
        if (*(int *)(param_1 + 0xc2) == 0) {
          uVar5 = (uint)*(ushort *)(param_1 + 0x44);
          puVar3 = (undefined4 *)(local_c * uVar5 + *(int *)(param_1 + 0x18));
          puVar6 = (undefined4 *)(uVar5 * uVar1 + *(int *)(param_1 + 0x14));
          for (uVar4 = (uint)(*(ushort *)(param_1 + 0x44) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        else {
          uVar4 = (uint)*(ushort *)(param_1 + 0x42);
          FUN_662fdfb0(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),uVar4 * uVar1,
                       local_c * uVar4,uVar4);
        }
        local_c = local_c + 1;
        *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 1;
        *(int *)(param_1 + 0x82) = *(int *)(param_1 + 0x82) + -1;
        uVar2 = *(ushort *)(param_1 + 0x6c);
      } while (local_c < uVar2);
    }
    if ((-1 < local_10) && (*(short *)(param_1 + 0x74) == *(short *)(param_1 + 0x6c))) {
      local_10 = (**(code **)(**(int **)(param_1 + 0xc) + 8))
                           (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      uVar2 = 0;
      if (*(short *)(param_1 + 0x6a) != 0) {
        do {
          if (local_10 < 0) break;
          puVar3 = operator_new((uint)*(ushort *)(param_1 + 0x46));
          if (puVar3 == (undefined4 *)0x0) {
            local_10 = -0x7ff8fff2;
          }
          if (-1 < local_10) {
            uVar1 = *(ushort *)(param_1 + 0x46);
            puVar6 = (undefined4 *)((uint)uVar2 * (uint)uVar1 + *(int *)(param_1 + 0x10));
            puVar7 = puVar3;
            for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_662ed8a0(*(void **)(param_1 + 8),puVar3);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(param_1 + 0x6a));
      }
      uVar2 = *(ushort *)(param_1 + 0x6c);
      *(undefined2 *)(param_1 + 0x74) = 0;
      if (local_c < uVar2) {
        while ((uVar1 = *(ushort *)(param_1 + 0x74), uVar1 < uVar2 &&
               ((*(int *)(param_1 + 0x7a) == 0 || (*(int *)(param_1 + 0x82) != 0))))) {
          if (*(int *)(param_1 + 0xc2) == 0) {
            uVar5 = (uint)*(ushort *)(param_1 + 0x44);
            puVar3 = (undefined4 *)(local_c * uVar5 + *(int *)(param_1 + 0x18));
            puVar6 = (undefined4 *)(uVar5 * uVar1 + *(int *)(param_1 + 0x14));
            for (uVar4 = (uint)(*(ushort *)(param_1 + 0x44) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
          else {
            uVar4 = (uint)*(ushort *)(param_1 + 0x42);
            FUN_662fdfb0(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),uVar4 * uVar1,
                         local_c * uVar4,uVar4);
          }
          local_c = local_c + 1;
          *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 1;
          *(int *)(param_1 + 0x82) = *(int *)(param_1 + 0x82) + -1;
          uVar2 = *(ushort *)(param_1 + 0x6c);
          if (uVar2 <= local_c) {
            *(undefined2 *)(param_1 + 0x72) = 0;
            return local_10;
          }
        }
      }
    }
  }
  else {
    FUN_662ed820(*(int **)(param_1 + 0xaa));
  }
  *(undefined2 *)(param_1 + 0x72) = 0;
  return local_10;
}


