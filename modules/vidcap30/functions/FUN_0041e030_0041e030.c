/* Module: vidcap30.exe
   Function: FUN_0041e030
   Address: 0041e030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041e192) */
/* WARNING: Removing unreachable block (ram,0x0041e196) */
/* WARNING: Removing unreachable block (ram,0x0041e1a1) */
/* WARNING: Removing unreachable block (ram,0x0041e1a8) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x005b52b0 : 0x0041e092 */
/* WARNING: Removing unreachable block (ram,0x0041e07e) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0041e030(uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  WORD *pWVar4;
  WORD *pWVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_4bc;
  tagACCEL local_4b0 [200];
  
  if (DAT_005ba504 == 0) {
    return 0;
  }
  if (DAT_005bc2b8 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*DAT_005bc2b8;
    puVar9 = (undefined4 *)PTR_DAT_005b52b0;
    for (iVar3 = 1000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  puVar1 = PTR_DAT_005b52b0;
  if ((param_1 & 1) != 0) {
    iVar3 = 0;
    puVar2 = (undefined4 *)(PTR_DAT_005b52b0 + 10);
    do {
      if (*(short *)((int)puVar2 + -10) == 0) break;
      iVar3 = iVar3 + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined2 *)puVar2 = *(undefined2 *)((int)puVar2 + -2);
      puVar2 = puVar2 + 5;
    } while (iVar3 < 200);
  }
  if ((param_1 & 2) != 0) {
    FUN_0041e1e0(0x4b0,puVar1);
  }
  if ((param_1 & 4) != 0) {
    iVar3 = 0;
    local_4bc = 0;
    puVar7 = (ushort *)puVar1;
    do {
      if (1999 < local_4bc) break;
      iVar8 = 0;
      if (iVar3 < 200) {
        pWVar4 = &local_4b0[iVar3].key;
        do {
          if ((3 < iVar8) || (iVar6 = local_4bc + iVar8, puVar1[iVar6 * 2 + 0xb] == '\0')) break;
          pWVar5 = pWVar4;
          if ((puVar1[iVar6 * 2 + 10] & 0x40) == 0) {
            iVar3 = iVar3 + 1;
            ((tagACCEL *)(pWVar4 + -1))->fVirt = puVar1[iVar6 * 2 + 10] & 0xdf;
            pWVar5 = pWVar4 + 3;
            *pWVar4 = (ushort)(byte)puVar1[iVar6 * 2 + 0xb];
            pWVar4[1] = *puVar7;
          }
          iVar8 = iVar8 + 1;
          pWVar4 = pWVar5;
        } while (iVar3 < 200);
      }
      local_4bc = local_4bc + 10;
      puVar7 = puVar7 + 10;
    } while (iVar3 < 200);
    FUN_0041d9e0(DAT_005ba504,0xffffffff);
    if (iVar3 != 0) {
      if (DAT_005ba4d4 != (HACCEL)0x0) {
        DestroyAcceleratorTable(DAT_005ba4d4);
      }
      DAT_005ba4d4 = CreateAcceleratorTableA(local_4b0,iVar3);
    }
  }
  return 1;
}


