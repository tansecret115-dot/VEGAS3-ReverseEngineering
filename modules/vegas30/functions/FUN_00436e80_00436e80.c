/* Module: vegas30.exe
   Function: FUN_00436e80
   Address: 00436e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00436e80(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    piVar5 = piVar1;
LAB_00436e99:
    piVar5 = piVar5 + 1;
    if (*piVar5 == -1) goto code_r0x00436e9e;
    iVar3 = iVar2 << 5;
    for (uVar6 = piVar1[iVar2 + 1]; (uVar6 & 1) != 0; uVar6 = uVar6 >> 1) {
      iVar3 = iVar3 + 1;
    }
    if ((iVar3 == -1) || (FUN_00437060(iVar3), piVar1 + iVar3 * 7 + 5 == (int *)0x0))
    goto LAB_00436ed9;
    goto LAB_00436f3d;
  }
LAB_00436ed9:
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  do {
    if (puVar4 == (undefined4 *)0x0) {
LAB_00436f15:
      iVar2 = 0;
      puVar4 = (undefined4 *)FUN_004370e0();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar4;
        FUN_00437060(0);
        *(undefined4 **)(param_1 + 0x14) = puVar4;
        iVar2 = 0;
        if (puVar4 != (undefined4 *)0xffffffec) {
LAB_00436f3d:
          iVar2 = FUN_00437040(*(undefined4 *)(param_1 + 0xc));
        }
      }
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        return 0x8007000e;
      }
      *(int *)(iVar2 + 0xc) = iVar2;
      *(int *)(*(int *)(param_1 + 0xc) + 0x10) = *(int *)(param_1 + 0xc);
      *(int *)(*(int *)(param_1 + 0xc) + 0x14) = *(int *)(param_1 + 0xc);
      *(byte *)(*(int *)(param_1 + 0xc) + 0x18) = *(byte *)(*(int *)(param_1 + 0xc) + 0x18) | 2;
      *(byte *)(*(int *)(param_1 + 0xc) + 0x18) =
           *(byte *)(*(int *)(param_1 + 0xc) + 0x18) & 0xfe ^ 1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
      *param_1 = 1;
      return 0;
    }
    if ((puVar4 != *(undefined4 **)(param_1 + 0x14)) && (iVar2 = FUN_004370a0(), iVar2 != -1)) {
      FUN_00437060(iVar2);
      *(undefined4 **)(param_1 + 0x14) = puVar4;
      if (puVar4 + iVar2 * 7 + 5 != (undefined4 *)0x0) goto LAB_00436f3d;
      goto LAB_00436f15;
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
code_r0x00436e9e:
  iVar2 = iVar2 + 1;
  if (3 < iVar2) goto LAB_00436ed9;
  goto LAB_00436e99;
}


