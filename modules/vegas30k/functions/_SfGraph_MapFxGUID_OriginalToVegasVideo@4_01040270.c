/* Module: vegas30k.dll
   Function: _SfGraph_MapFxGUID_OriginalToVegasVideo@4
   Address: 01040270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGraph_MapFxGUID_OriginalToVegasVideo_4(int *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  short sStack_a;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x40270  1001  _SfGraph_MapFxGUID_OriginalToVegasVideo@4 */
  iVar4 = 0;
  piVar5 = &DAT_012055d8;
  do {
    iVar2 = 4;
    bVar10 = true;
    piVar7 = param_1;
    piVar8 = piVar5;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar10 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (bVar10) {
      iVar2 = iVar4 * 0x20;
      uVar9 = 0xaa000000;
      uVar6 = 0xbaa26b00;
      *param_1 = (&DAT_012055e8)[iVar4 * 8];
      param_1[1] = *(int *)(iVar2 + 0x12055ec);
      param_1[2] = *(int *)(iVar2 + 0x12055f0);
      param_1[3] = *(int *)(iVar2 + 0x12055f4);
      local_8 = *(undefined4 *)(iVar2 + 0x12055f0);
      bVar3 = 0;
      local_4 = *(undefined4 *)(iVar2 + 0x12055f4);
      if (((short)*(undefined4 *)(iVar2 + 0x12055ec) != 0xf56) ||
         (sStack_a = (short)((uint)*(undefined4 *)(iVar2 + 0x12055ec) >> 0x10), sStack_a != 0x11d2))
      goto LAB_01040342;
      iVar4 = 0;
      break;
    }
    piVar5 = piVar5 + 8;
    iVar4 = iVar4 + 1;
    if ((int *)0x1205917 < piVar5) {
      return 0x80004002;
    }
  } while( true );
  while (iVar4 = iVar4 + 1, iVar4 < 8) {
    cVar1 = *(char *)((int)&local_8 + iVar4);
    if (cVar1 != (&DAT_01205928)[iVar4]) {
      bVar3 = bVar3 | 1;
    }
    if (cVar1 != (&DAT_01205920)[iVar4]) {
      bVar3 = bVar3 | 2;
    }
    if (cVar1 != (&DAT_01205918)[iVar4]) {
      bVar3 = bVar3 | 4;
    }
    if (bVar3 == 7) goto LAB_01040342;
  }
  uVar9 = 0xa0000000;
  uVar6 = 0x5b7269c9;
LAB_01040342:
  if (((param_1[3] & 0x7abe8f00U) == 0x7abe8f00) || ((param_1[3] & 0xb6de8f00U) == 0xb6de8f00)) {
    param_1[2] = param_1[2] & 0xffff;
    param_1[3] = 0;
    param_1[2] = param_1[2] | uVar9;
    param_1[3] = param_1[3] | uVar6;
  }
  return 0;
}


