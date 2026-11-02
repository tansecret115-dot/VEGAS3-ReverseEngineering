/* Module: sfcdi.dll
   Function: FUN_5bf4feb0
   Address: 5bf4feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4feb0(uint param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  LPCSTR lpString1;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  LPCSTR lpString2;
  int local_28;
  int local_24;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar5 = param_1;
  iVar10 = 0;
  iVar6 = FUN_5bf3e580(param_2,"VCD");
  iVar6 = FUN_5bf3e580(iVar6,"ENTRIES.VCD");
  if (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 0x350);
    iVar7 = FUN_5bf3e580(param_2,"MPEGAV");
    if (iVar7 != 0) {
      psVar1 = (short *)(iVar6 + 0x12);
      *psVar1 = 0;
      local_28 = 0;
      pbVar9 = (byte *)(iVar6 + 0x15);
      while( true ) {
        piVar2 = *(int **)(iVar7 + 0x214);
        if (piVar2 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar2;
        }
        if (iVar8 <= local_28) goto LAB_5bf500ed;
        if (piVar2 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar2;
        }
        if ((local_28 < 0) || (iVar10 + -1 < local_28)) {
          local_24 = 0;
        }
        else {
          local_24 = *(int *)(pbVar9 + piVar2[2] + (-0xd - (iVar6 + 8)));
        }
        iVar8 = *(int *)(local_24 + 0x350);
        iVar10 = FUN_5bf47a60(uVar5,1,0,0x96,0,0,0,0);
        if (iVar10 < 0) goto LAB_5bf500ed;
        *psVar1 = *psVar1 + 1;
        pbVar9[-1] = (char)local_28 + 2;
        FUN_5bf2b5e0(&local_c,*(uint *)(uVar5 + 0x24));
        FUN_5bf2b870(pbVar9,local_c);
        FUN_5bf2b870(pbVar9 + 1,local_8);
        FUN_5bf2b870(pbVar9 + 2,local_4);
        iVar3 = *(int *)(local_24 + 0x34c);
        *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(uVar5 + 0x24);
        uVar4 = *(undefined4 *)(uVar5 + 0x24);
        param_2 = CONCAT13((char)uVar4,
                           CONCAT12((char)((uint)uVar4 >> 8),
                                    CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18)
                                            )));
        *(int *)(iVar3 + 0x5c) = param_2;
        *(int *)(iVar3 + 0x60) = (*(int *)(iVar8 + 4) + 0x2d) * 0x800;
        iVar10 = (*(int *)(iVar8 + 4) + 0x2d) * 0x800;
        param_1 = (uint)CONCAT12((char)((uint)iVar10 >> 8),
                                 CONCAT11((char)((uint)iVar10 >> 0x10),(char)((uint)iVar10 >> 0x18))
                                );
        *(uint *)(iVar3 + 100) = param_1;
        iVar10 = FUN_5bf47a60(uVar5,0xd,0,0x1e,1,0,0x60,0);
        if (iVar10 < 0) goto LAB_5bf500ed;
        lpString2 = ".mpg";
        *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 2;
        *(uint *)(iVar3 + 0x18) = (-(uint)(*(uint *)(iVar3 + 8) < 0x80000) & 0xfffffffe) + 4;
        lpString1 = FUN_5bf23120((LPCSTR)(local_24 + 0x224));
        iVar10 = lstrcmpiA(lpString1,lpString2);
        if (iVar10 != 0) break;
        iVar10 = FUN_5bf47a60(uVar5,0xf,local_24,*(int *)(iVar8 + 4),1,1,0x60,0xf);
        if (iVar10 < 0) goto LAB_5bf500ed;
        iVar10 = FUN_5bf47a60(uVar5,0xe,0,0x2d,1,0,0x60,0);
        if (iVar10 < 0) goto LAB_5bf500ed;
        local_28 = local_28 + 1;
        pbVar9 = pbVar9 + 4;
      }
      iVar10 = -0x7ffb1ff8;
LAB_5bf500ed:
      FUN_5bf46fd0((undefined1 *)psVar1,1);
      return iVar10;
    }
  }
  return -0x7ff8ffa9;
}


