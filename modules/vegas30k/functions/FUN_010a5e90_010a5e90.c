/* Module: vegas30k.dll
   Function: FUN_010a5e90
   Address: 010a5e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010a5e90(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (*(uint *)(param_1 + 0xa0) < param_2) {
    return 0;
  }
  if (param_3 == 0) {
    iVar2 = FUN_010a4160(param_1,param_2,0);
    if (iVar2 != 0) {
      uVar5 = *(uint *)(param_1 + 0xa4);
      bVar1 = false;
      uVar6 = 0;
      if (uVar5 != 0) {
        puVar7 = *(uint **)(param_1 + 0xb8);
        do {
          if (*puVar7 == param_2) {
            bVar1 = true;
            break;
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 < uVar5);
      }
      if (uVar6 < uVar5 - 1) {
        do {
          uVar6 = uVar6 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xb8) + -4 + uVar6 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xb8) + uVar6 * 4);
        } while (uVar6 < *(int *)(param_1 + 0xa4) - 1U);
      }
      if (!bVar1) {
        return 0;
      }
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
    }
  }
  else {
    iVar2 = FUN_010a4160(param_1,param_2,0);
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0xa8) < *(int *)(param_1 + 0xa4) + 1U) {
        pvVar3 = GlobalAlloc(0x42,*(uint *)(param_1 + 0xa8) * 4 + 0x14);
        pvVar4 = GlobalLock(pvVar3);
        if (pvVar4 == (LPVOID)0x0) {
          return 0;
        }
        uVar5 = 0;
        if (*(int *)(param_1 + 0xa4) != 0) {
          do {
            uVar5 = uVar5 + 1;
            *(undefined4 *)((int)pvVar4 + uVar5 * 4 + -4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xb8) + -4 + uVar5 * 4);
          } while (uVar5 < *(uint *)(param_1 + 0xa4));
        }
        if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
          GlobalFree(pvVar3);
        }
        *(LPVOID *)(param_1 + 0xb8) = pvVar4;
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 5;
      }
      *(uint *)(*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xa4) * 4) = param_2;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      return 1;
    }
  }
  return 1;
}


