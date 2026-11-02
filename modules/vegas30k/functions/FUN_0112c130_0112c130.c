/* Module: vegas30k.dll
   Function: FUN_0112c130
   Address: 0112c130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_0112c130(uint param_1,tagDIR_ENTRY *param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  tagDIR_ENTRY *ptVar6;
  int iVar7;
  LPCSTR lpString1;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  LPCSTR lpString2;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar5 = param_1;
  local_24 = (undefined1 *)0x0;
  ptVar6 = DtGetLocalDirEntry(param_2,"VCD");
  ptVar6 = DtGetLocalDirEntry(ptVar6,"ENTRIES.VCD");
  if (ptVar6 != (tagDIR_ENTRY *)0x0) {
    iVar2 = *(int *)(ptVar6 + 0x350);
    ptVar6 = DtGetLocalDirEntry(param_2,"MPEGAV");
    if (ptVar6 != (tagDIR_ENTRY *)0x0) {
      psVar1 = (short *)(iVar2 + 0x12);
      *psVar1 = 0;
      local_1c = 0;
      puVar10 = (uchar *)(iVar2 + 0x15);
      while( true ) {
        piVar3 = *(int **)(ptVar6 + 0x214);
        if (piVar3 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar3;
        }
        if (iVar9 <= local_1c) goto LAB_0112c35c;
        if (piVar3 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar3;
        }
        if ((local_1c < 0) || (iVar9 + -1 < local_1c)) {
          local_20 = 0;
        }
        else {
          local_20 = *(int *)(puVar10 + piVar3[2] + (-0xd - (iVar2 + 8)));
        }
        iVar9 = *(int *)(local_20 + 0x350);
        *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 0x98;
        *psVar1 = *psVar1 + 1;
        puVar10[-1] = (char)local_1c + '\x02';
        cdr_LBAToMSF((_cdrmsf *)&local_c,*(int *)(iVar5 + 0x24) + 0x96);
        cdr_ToBCD(puVar10,local_c);
        cdr_ToBCD(puVar10 + 1,local_8);
        cdr_ToBCD(puVar10 + 2,local_4);
        iVar8 = *(int *)(local_20 + 0x34c);
        *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar5 + 0x24);
        uVar4 = *(undefined4 *)(iVar5 + 0x24);
        param_2 = (tagDIR_ENTRY *)
                  CONCAT13((char)uVar4,
                           CONCAT12((char)((uint)uVar4 >> 8),
                                    CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18)
                                            )));
        *(tagDIR_ENTRY **)(iVar8 + 0x5c) = param_2;
        *(int *)(iVar8 + 0x60) = (*(int *)(iVar9 + 4) + 0x2d) * 0x800;
        iVar7 = (*(int *)(iVar9 + 4) + 0x2d) * 0x800;
        param_1 = (uint)CONCAT12((char)((uint)iVar7 >> 8),
                                 CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18)));
        *(uint *)(iVar8 + 100) = param_1;
        local_24 = (undefined1 *)FUN_010128d0(iVar5,0xd,0,0x1e,1,0,0x60,0);
        if ((int)local_24 < 0) goto LAB_0112c35c;
        lpString2 = ".mpg";
        *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 2;
        *(uint *)(iVar8 + 0x18) = (-(uint)(*(uint *)(iVar8 + 8) < 0x80000) & 0xfffffffe) + 4;
        lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_20 + 0x224);
        iVar8 = lstrcmpiA(lpString1,lpString2);
        if (iVar8 != 0) break;
        local_24 = (undefined1 *)
                   FUN_010128d0(iVar5,0xf,local_20,*(undefined4 *)(iVar9 + 4),1,1,0x60,0xf);
        if ((int)local_24 < 0) goto LAB_0112c35c;
        local_24 = (undefined1 *)FUN_010128d0(iVar5,0xe,0,0x2d,1,0,0x60,0);
        if ((int)local_24 < 0) goto LAB_0112c35c;
        local_1c = local_1c + 1;
        puVar10 = puVar10 + 4;
      }
      local_24 = (undefined1 *)0x8004e008;
LAB_0112c35c:
      FUN_01086180(psVar1,1);
      return local_24;
    }
  }
  return &DAT_80070057;
}


