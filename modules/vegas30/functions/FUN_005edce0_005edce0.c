/* Module: vegas30.exe
   Function: FUN_005edce0
   Address: 005edce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005edce0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  if ((*(byte *)(*(undefined4 **)(param_1 + 8) + 6) & 2) != 2) {
    do {
      puVar5 = puVar6;
      iVar2 = lstrcmpiA((LPCSTR)*param_2,(LPCSTR)*puVar5);
      if (iVar2 == 0) {
        return 0x8004e0a9;
      }
      if (iVar2 < 0) {
        puVar6 = (undefined4 *)puVar5[4];
      }
      else {
        puVar6 = (undefined4 *)puVar5[5];
      }
    } while ((*(byte *)(puVar6 + 6) & 2) != 2);
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      iVar4 = 0;
      piVar8 = piVar1;
LAB_005ede76:
      piVar8 = piVar8 + 1;
      if (*piVar8 == -1) goto code_r0x005ede7b;
      iVar3 = iVar4 << 5;
      for (uVar9 = piVar1[iVar4 + 1]; (uVar9 & 1) != 0; uVar9 = uVar9 >> 1) {
        iVar3 = iVar3 + 1;
      }
      if ((iVar3 == -1) || (FUN_00437060(iVar3), piVar1 + iVar3 * 7 + 5 == (int *)0x0))
      goto LAB_005edec3;
      goto LAB_005edf27;
    }
LAB_005edec3:
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    do {
      if (puVar6 == (undefined4 *)0x0) {
LAB_005edeff:
        puVar7 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)FUN_004370e0();
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 **)(param_1 + 0x10) = puVar6;
          FUN_00437060(0);
          *(undefined4 **)(param_1 + 0x14) = puVar6;
          if (puVar6 == (undefined4 *)0xffffffec) {
            return 0x8007000e;
          }
LAB_005edf27:
          puVar7 = (undefined4 *)FUN_00437040(*(undefined4 *)(param_1 + 0xc));
        }
        if (puVar7 == (undefined4 *)0x0) {
          return 0x8007000e;
        }
        *puVar7 = *param_2;
        puVar7[1] = *param_3;
        puVar7[2] = param_3[1];
        puVar7[3] = puVar5;
        if (iVar2 < 0) {
          puVar5[4] = puVar7;
          *param_4 = puVar7;
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          return 0;
        }
        puVar5[5] = puVar7;
        *param_4 = puVar7;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        return 0;
      }
      if ((puVar6 != *(undefined4 **)(param_1 + 0x14)) && (iVar4 = FUN_004370a0(), iVar4 != -1)) {
        FUN_00437060(iVar4);
        *(undefined4 **)(param_1 + 0x14) = puVar6;
        if (puVar6 + iVar4 * 7 + 5 != (undefined4 *)0x0) goto LAB_005edf27;
        goto LAB_005edeff;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while( true );
  }
  if ((*(int *)(param_1 + 0x14) == 0) || (iVar2 = FUN_004370a0(), iVar2 == -1)) {
LAB_005edd4b:
    for (puVar6 = *(undefined4 **)(param_1 + 0x10); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)*puVar6) {
      if ((puVar6 != *(undefined4 **)(param_1 + 0x14)) && (iVar2 = FUN_004370a0(), iVar2 != -1)) {
        iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        puVar6[iVar4 + 1] = puVar6[iVar4 + 1] | 1 << ((byte)iVar2 & 0x1f);
        *(undefined4 **)(param_1 + 0x14) = puVar6;
        if (puVar6 + iVar2 * 7 + 5 != (undefined4 *)0x0) goto LAB_005eddeb;
        break;
      }
    }
    puVar6 = (undefined4 *)0x0;
    hMem = GlobalAlloc(0x40,0xe14);
    puVar5 = GlobalLock(hMem);
    if (puVar5 == (undefined4 *)0x0) goto LAB_005eddf8;
    puVar6 = puVar5;
    for (iVar2 = 0x385; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *puVar5 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar5;
    FUN_00437060(0);
    *(undefined4 **)(param_1 + 0x14) = puVar5;
    puVar6 = (undefined4 *)0x0;
    if (puVar5 == (undefined4 *)0xffffffec) goto LAB_005eddf8;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
    *(uint *)(iVar4 + 4 + iVar3 * 4) = *(uint *)(iVar4 + 4 + iVar3 * 4) | 1 << ((byte)iVar2 & 0x1f);
    if (iVar4 + 0x14 + iVar2 * 0x1c == 0) goto LAB_005edd4b;
  }
LAB_005eddeb:
  puVar6 = (undefined4 *)FUN_00437040(*(undefined4 *)(param_1 + 0xc));
LAB_005eddf8:
  *(undefined4 **)(param_1 + 8) = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar6 = *param_2;
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 4) = *param_3;
  *(undefined4 *)(iVar2 + 8) = param_3[1];
  *param_4 = *(undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
code_r0x005ede7b:
  iVar4 = iVar4 + 1;
  if (3 < iVar4) goto LAB_005edec3;
  goto LAB_005ede76;
}


