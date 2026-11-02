/* Module: sfcdi.dll
   Function: sfcddb_DiscID
   Address: 5bf120b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall sfcddb_DiscID(struct _toc *) */

ulong sfcddb_DiscID(_toc *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x120b0  260  ?sfcddb_DiscID@@YGKPAU_toc@@@Z */
  iVar2 = FUN_5bf2bb90((int)param_1);
  uVar4 = 0;
  uVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_5bf2bbb0((int)param_1,uVar5);
      uVar1 = *(uint *)(iVar3 + 0x14);
      uVar4 = FUN_5bf0e190(uVar4,uVar1);
      uVar4 = FUN_5bf0e190(uVar4,uVar1 >> 8);
      uVar4 = FUN_5bf0e190(uVar4,uVar1 >> 0x10);
      uVar4 = FUN_5bf0e190(uVar4,uVar1);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
  }
  uVar5 = *(uint *)(param_1 + 0x1d8c);
  uVar4 = FUN_5bf0e190(uVar4,uVar5);
  uVar4 = FUN_5bf0e190(uVar4,uVar5 >> 8);
  uVar4 = FUN_5bf0e190(uVar4,uVar5 >> 0x10);
  uVar4 = FUN_5bf0e190(uVar4,uVar5);
  return uVar4;
}


