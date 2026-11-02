/* Module: sfcdi.dll
   Function: cdr_GetDriveEntry
   Address: 5bf07360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetDriveEntry(struct tPARAMETERS_DEVDES *,struct drivedbentry *) */

long cdr_GetDriveEntry(tPARAMETERS_DEVDES *param_1,drivedbentry *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  drivedbentry *pdVar6;
  
  uVar4 = 0;
  pdVar6 = param_2;
                    /* 0x7360  175
                       ?cdr_GetDriveEntry@@YGJPAUtPARAMETERS_DEVDES@@PAUdrivedbentry@@@Z */
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar6 = 0;
    pdVar6 = pdVar6 + 4;
  }
  if (*DAT_5bf65ff4 != 0) {
    piVar2 = (int *)DAT_5bf65ff4[2];
    do {
      iVar1 = *piVar2;
      if ((*(int *)(iVar1 + 4) == *(int *)(param_1 + 4)) &&
         (*(int *)(iVar1 + 8) == *(int *)(param_1 + 8))) {
        if (*(int *)(iVar1 + 0x1b4) != 0) {
          puVar5 = (undefined4 *)(iVar1 + 0x1b8);
          for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)param_2 = *puVar5;
            puVar5 = puVar5 + 1;
            param_2 = param_2 + 4;
          }
        }
        return 0;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < *DAT_5bf65ff4);
  }
  return -0x7ffb1ff6;
}


