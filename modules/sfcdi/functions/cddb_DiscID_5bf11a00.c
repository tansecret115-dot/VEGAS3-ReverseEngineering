/* Module: sfcdi.dll
   Function: cddb_DiscID
   Address: 5bf11a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall cddb_DiscID(struct _toc *) */

ulong cddb_DiscID(_toc *param_1)

{
  _toc *p_Var1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  uint local_c;
  int local_8;
  
                    /* 0x11a00  146  ?cddb_DiscID@@YGKPAU_toc@@@Z */
  p_Var1 = param_1;
  uVar2 = FUN_5bf2bb90((int)param_1);
  uVar5 = 0;
  iVar3 = FUN_5bf2bbb0((int)param_1,0);
  if (iVar3 == 0) {
    param_1 = (_toc *)0x0;
  }
  else {
    param_1 = (_toc *)(*(uint *)(param_1 + 0x1d8c) / 0x4b - *(uint *)(iVar3 + 0x14) / 0x4b);
  }
  local_14 = 0;
  if (0 < (int)uVar2) {
    do {
      iVar4 = 0;
      iVar3 = FUN_5bf2bbb0((int)p_Var1,uVar5);
      FUN_5bf2b5e0(&local_c,*(uint *)(iVar3 + 0x14));
      for (iVar3 = local_8 + local_c * 0x3c; 0 < iVar3; iVar3 = iVar3 / 10) {
        iVar4 = iVar4 + iVar3 % 10;
      }
      local_14 = local_14 + iVar4;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar2);
  }
  return (local_14 % 0xff << 0x10 | (uint)param_1) << 8 | uVar2;
}


