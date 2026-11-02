/* Module: sfcdi.dll
   Function: FUN_5bf51670
   Address: 5bf51670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf51670(uint param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCSTR lpString1;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  LPCSTR lpString2;
  int local_24;
  int local_20;
  int local_1c;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = param_1;
  local_24 = 0;
  iVar5 = FUN_5bf3e580(param_2,"VCD");
  iVar5 = FUN_5bf3e580(iVar5,"ENTRIES.VCD");
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 0x350);
    iVar6 = FUN_5bf3e580(param_2,"MPEGAV");
    if (iVar6 != 0) {
      psVar1 = (short *)(iVar5 + 0x12);
      *psVar1 = 0;
      local_1c = 0;
      pbVar10 = (byte *)(iVar5 + 0x15);
      while( true ) {
        piVar2 = *(int **)(iVar6 + 0x214);
        if (piVar2 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar2;
        }
        if (iVar9 <= local_1c) goto LAB_5bf5189c;
        if (piVar2 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar2;
        }
        if ((local_1c < 0) || (iVar9 + -1 < local_1c)) {
          local_20 = 0;
        }
        else {
          local_20 = *(int *)(pbVar10 + piVar2[2] + (-0xd - (iVar5 + 8)));
        }
        iVar9 = *(int *)(local_20 + 0x350);
        *(int *)(uVar4 + 0x24) = *(int *)(uVar4 + 0x24) + 0x98;
        *psVar1 = *psVar1 + 1;
        pbVar10[-1] = (char)local_1c + 2;
        FUN_5bf2b5e0(&local_c,*(int *)(uVar4 + 0x24) + 0x96);
        FUN_5bf2b870(pbVar10,local_c);
        FUN_5bf2b870(pbVar10 + 1,local_8);
        FUN_5bf2b870(pbVar10 + 2,local_4);
        iVar8 = *(int *)(local_20 + 0x34c);
        *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(uVar4 + 0x24);
        uVar3 = *(undefined4 *)(uVar4 + 0x24);
        param_2 = CONCAT13((char)uVar3,
                           CONCAT12((char)((uint)uVar3 >> 8),
                                    CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18)
                                            )));
        *(int *)(iVar8 + 0x5c) = param_2;
        *(int *)(iVar8 + 0x60) = (*(int *)(iVar9 + 4) + 0x2d) * 0x800;
        iVar7 = (*(int *)(iVar9 + 4) + 0x2d) * 0x800;
        param_1 = (uint)CONCAT12((char)((uint)iVar7 >> 8),
                                 CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18)));
        *(uint *)(iVar8 + 100) = param_1;
        local_24 = FUN_5bf47a60(uVar4,0xd,0,0x1e,1,0,0x60,0);
        if (local_24 < 0) goto LAB_5bf5189c;
        lpString2 = ".mpg";
        *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 2;
        *(uint *)(iVar8 + 0x18) = (-(uint)(*(uint *)(iVar8 + 8) < 0x80000) & 0xfffffffe) + 4;
        lpString1 = FUN_5bf23120((LPCSTR)(local_20 + 0x224));
        iVar8 = lstrcmpiA(lpString1,lpString2);
        if (iVar8 != 0) break;
        local_24 = FUN_5bf47a60(uVar4,0xf,local_20,*(int *)(iVar9 + 4),1,1,0x60,0xf);
        if (local_24 < 0) goto LAB_5bf5189c;
        local_24 = FUN_5bf47a60(uVar4,0xe,0,0x2d,1,0,0x60,0);
        if (local_24 < 0) goto LAB_5bf5189c;
        local_1c = local_1c + 1;
        pbVar10 = pbVar10 + 4;
      }
      local_24 = -0x7ffb1ff8;
LAB_5bf5189c:
      FUN_5bf46fd0((undefined1 *)psVar1,1);
      return local_24;
    }
  }
  return -0x7ff8ffa9;
}


