/* Module: sfcdi.dll
   Function: SfScsi_GetNumAdapters
   Address: 5bf0cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfScsi_GetNumAdapters(void) */

uint SfScsi_GetNumAdapters(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint local_110 [35];
  uint local_84 [33];
  
                    /* 0xcb00  112  ?SfScsi_GetNumAdapters@@YGIXZ */
  uVar3 = DAT_5bf630e4;
  if (DAT_5bf630e4 == 0xffffffff) {
    puVar1 = local_110;
    for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    DAT_5bf630e4 = 0;
    iVar2 = FUN_5bf0bff0(local_110,0,0);
    if (-1 < iVar2) {
      iVar2 = FUN_5bf0c390((byte *)local_110,local_84);
      if (-1 < iVar2) {
        DAT_5bf630e4 = local_84[0];
      }
      FUN_5bf0c050(local_110);
    }
    uVar3 = DAT_5bf630e4;
    if ((DAT_5bf631c4 == 0) && (uVar3 = 0, DAT_5bf630e4 != 0)) {
      do {
        iVar2 = FUN_5bf0bff0(local_110,uVar3,0);
        if (iVar2 < 0) {
          DAT_5bf630e4 = uVar3;
          return DAT_5bf630e4;
        }
        iVar2 = FUN_5bf0c390((byte *)local_110,local_84);
        if (iVar2 < 0) {
          DAT_5bf630e4 = uVar3;
          return DAT_5bf630e4;
        }
        FUN_5bf0c050(local_110);
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_5bf630e4);
    }
  }
  DAT_5bf630e4 = uVar3;
  return DAT_5bf630e4;
}


