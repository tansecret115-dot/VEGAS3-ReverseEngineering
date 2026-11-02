/* Module: sfcdi.dll
   Function: SfDecodePQBuffer
   Address: 5bf0ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDecodePQBuffer(struct SFPQdecodetag *,unsigned char *,unsigned long) */

long SfDecodePQBuffer(SFPQdecodetag *param_1,uchar *param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  SFPQdecodetag *pSVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uchar *puVar11;
  int local_3c;
  uint local_38;
  uint local_28;
  int local_24;
  
                    /* 0xebf0  80  ?SfDecodePQBuffer@@YGJPAUSFPQdecodetag@@PAEK@Z */
  pSVar3 = param_1;
  uVar8 = param_3 >> 4;
  uVar6 = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (uVar8 == 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  bVar1 = false;
  pbVar9 = param_2 + 9;
  pbVar7 = pbVar9;
  while( true ) {
    uVar4 = uVar8;
    if (0xf < uVar8) {
      uVar4 = 0x10;
    }
    if (uVar4 <= uVar6) {
      FUN_5bf2b830((char *)&param_3,*pbVar9);
      uVar6 = param_3 & 0xff;
      goto LAB_5bf0ec6a;
    }
    if (9 < (*pbVar7 & 0xf)) break;
    pbVar7 = pbVar7 + 0x10;
    uVar6 = uVar6 + 1;
  }
  bVar1 = true;
  uVar6 = (uint)*pbVar9;
LAB_5bf0ec6a:
  local_3c = 0;
  local_38 = 0;
  bVar2 = false;
  uVar4 = uVar8;
  if (0xf < uVar8) {
    uVar4 = 0x10;
  }
  uVar10 = 1;
  if (1 < uVar4) {
    pbVar9 = param_2 + 0x19;
    do {
      if (bVar1) {
        uVar5 = (uint)*pbVar9;
      }
      else {
        FUN_5bf2b830((char *)&param_3,*pbVar9);
        uVar5 = param_3 & 0xff;
      }
      if (uVar5 - uVar6 != 1) {
        if ((uVar5 != 0) || (uVar6 == 0)) {
          local_38 = local_38 + 1;
        }
        if ((((*(int *)(param_1 + 0x4c) != 1) || (3 < uVar10)) && (2 < uVar5 - uVar6)) &&
           ((uVar5 != 0 || (uVar6 == 0)))) goto LAB_5bf0ed2e;
      }
      pbVar9 = pbVar9 + 0x10;
      local_3c = local_3c + uVar5;
      uVar10 = uVar10 + 1;
      uVar6 = uVar5;
    } while (uVar10 < uVar4);
    if (local_3c != 0) goto LAB_5bf0ed13;
  }
  bVar2 = true;
LAB_5bf0ed13:
  if (local_38 == uVar4) {
LAB_5bf0ed2e:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else if (bVar2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  uVar6 = 0;
  param_1 = (SFPQdecodetag *)0x0;
  puVar11 = param_2;
  if (uVar8 != 0) {
    do {
      if (bVar1) {
        cdr_BufferToDataQ((tDATAQ *)&local_28,param_2);
      }
      else {
        cdr_BufferToDataQBCD((tDATAQ *)&local_28,param_2);
      }
      param_2 = param_2 + 0x10;
      uVar4 = local_28 & 0x20;
      if (uVar4 == uVar6) {
        puVar11 = puVar11 + 1;
      }
      else {
        if (puVar11 == (uchar *)0x3) {
          param_1 = param_1 + 1;
        }
        puVar11 = (uchar *)0x0;
      }
      if (local_24 == 1) {
        FUN_5bf0e980((byte *)pSVar3,&local_28);
      }
      else if (local_24 == 2) {
        FUN_5bf0e760((byte *)pSVar3,(int)&local_28);
      }
      else if (local_24 == 3) {
        FUN_5bf0e830((byte *)pSVar3,(int)&local_28);
      }
      uVar8 = uVar8 - 1;
      uVar6 = uVar4;
    } while (uVar8 != 0);
    if (param_1 != (SFPQdecodetag *)0x0) {
      *(int *)(pSVar3 + 0x54) = *(int *)(pSVar3 + 0x54) + 1;
    }
  }
  return 0;
}


