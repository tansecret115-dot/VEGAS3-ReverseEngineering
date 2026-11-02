/* Module: sfcdi.dll
   Function: cdpi_DiscID
   Address: 5bf13940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall cdpi_DiscID(struct _toc *) */

ulong cdpi_DiscID(_toc *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
                    /* 0x13940  156  ?cdpi_DiscID@@YGKPAU_toc@@@Z */
  uVar4 = 0;
  uVar3 = 0;
  local_10 = 0;
  uVar1 = FUN_5bf2bb90((int)param_1);
  if (uVar1 != 0) {
    do {
      iVar2 = FUN_5bf2bbb0((int)param_1,uVar4);
      if ((*(uint *)(iVar2 + 8) & 4) == 0) {
        FUN_5bf2b5e0(&local_c,*(uint *)(iVar2 + 0x14));
        uVar3 = uVar3 + (local_c * 0x100 + local_8) * 0x100 + local_4;
      }
      if (uVar4 == 0) {
        local_10 = local_4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (uVar1 < 3) {
    iVar2 = FUN_5bf2bbb0((int)param_1,0);
    uVar3 = uVar3 + (*(int *)(param_1 + 0x1d8c) - *(int *)(iVar2 + 0x14)) + local_10;
  }
  return uVar3;
}


