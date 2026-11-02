/* Module: vegas30k.dll
   Function: FUN_011b2400
   Address: 011b2400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_011b2400(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_EBX;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iStack_28;
  int local_20;
  int iStack_1c;
  
  if (*(int *)(param_1 + 0x19c) == 0) {
    return 1;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))(*(int **)(param_1 + 0x14),&local_20);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1f0))(*(int **)(param_1 + 0x14),4);
  if ((*(undefined1 **)(*(int *)(param_1 + 0x19c) + 4) == &stack0xfffffffc) &&
     (*(int *)(*(int *)(param_1 + 0x19c) + 0x2c) == iVar4)) {
    return 0;
  }
  local_20 = FUN_011b2720(&stack0xffffffcc);
  if (-1 < local_20) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x19c) + 4);
    if (_DAT_00000004 <= iVar4) {
      iVar4 = _DAT_00000004;
    }
    uRam00000008 = *(uint *)(*(int *)(param_1 + 0x19c) + 8);
    uRam00000008 = uRam00000008 & (iVar4 <= (int)uRam00000008) - 1;
    _DAT_00000010 = *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x10);
    uRam00000014 = *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x14);
    uRam00000018 = *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x18);
    uRam0000001c = *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x1c);
    uRam00000020 = *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x20);
    iVar7 = 0;
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar3 = iRam00000024;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x10;
        iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x24);
        *(undefined4 *)(iRam00000024 + -0x10 + iVar5) = *(undefined4 *)(iVar1 + -0x10 + iVar5);
        *(undefined4 *)(iVar3 + -0xc + iVar5) = *(undefined4 *)(iVar1 + -0xc + iVar5);
        iVar3 = iRam00000024;
        iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x24);
        *(undefined4 *)(iRam00000024 + -8 + iVar5) = *(undefined4 *)(iVar1 + -8 + iVar5);
        *(undefined4 *)(iVar3 + -4 + iVar5) = *(undefined4 *)(iVar1 + -4 + iVar5);
        *(undefined4 *)(iRam00000028 + -4 + iVar7 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x28) + -4 + iVar7 * 4);
      } while (iVar7 < iVar4);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x19c) + 0x2c);
    iVar7 = iRam0000002c;
    if (iVar4 < iRam0000002c) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        iVar3 = iRam00000030;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x10;
        iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x30);
        *(undefined4 *)(iRam00000030 + -0x10 + iVar5) = *(undefined4 *)(iVar1 + -0x10 + iVar5);
        *(undefined4 *)(iVar3 + -0xc + iVar5) = *(undefined4 *)(iVar1 + -0xc + iVar5);
        *(undefined4 *)(iRam00000034 + -4 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x34) + -4 + iVar4 * 4);
      } while (iVar4 < iVar7);
    }
    free(*(void **)(param_1 + 0x19c));
    piVar2 = *(int **)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x19c) = 0;
    if ((piVar2 != (int *)0x0) &&
       (local_20 = _SfList_CreateExZ_32(param_1 + 0x1a0,0x18,2,2,0x40000004,0,0,0),
       piVar2 != (int *)0x0)) {
      iStack_1c = *piVar2;
      iStack_28 = 0;
      if (0 < iStack_1c) {
        do {
          piVar10 = (int *)(piVar2[1] * iStack_28 + piVar2[2]);
          FUN_011b3a80(&stack0xffffffd4);
          iVar4 = 0;
          while( true ) {
            iVar7 = *piVar10;
            if (*unaff_EBX <= *piVar10) {
              iVar7 = *unaff_EBX;
            }
            if (iVar7 <= iVar4) break;
            *(undefined4 *)(unaff_EBX[2] + iVar4 * 4) = *(undefined4 *)(piVar10[2] + iVar4 * 4);
            iVar4 = iVar4 + 1;
          }
          uVar9 = *(uint *)(param_1 + 0x1a4);
          puVar11 = (undefined4 *)piVar10[3];
          puVar12 = (undefined4 *)unaff_EBX[3];
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          unaff_EBX[4] = piVar10[4];
          unaff_EBX[5] = piVar10[5];
          iVar4 = piVar10[1];
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (*unaff_EBX < iVar4) {
            iVar4 = *unaff_EBX;
          }
          unaff_EBX[1] = iVar4;
          pvVar6 = GlobalHandle((LPCVOID)piVar10[3]);
          GlobalUnlock(pvVar6);
          pvVar6 = GlobalHandle((LPCVOID)piVar10[3]);
          GlobalFree(pvVar6);
          iStack_28 = iStack_28 + 1;
        } while (iStack_28 < iStack_1c);
      }
      _SfList_Destroy_4(piVar2);
    }
  }
  return local_20;
}


