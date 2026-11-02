/* Module: vegas30k.dll
   Function: _SfGraph_MapFxGUID_VegasVideoToOriginal@4
   Address: 010403a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGraph_MapFxGUID_VegasVideoToOriginal_4(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_24;
  int local_20 [4];
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
                    /* 0x403a0  1002  _SfGraph_MapFxGUID_VegasVideoToOriginal@4 */
  uVar7 = 0xaa000000;
  local_24 = 0xbaa26b00;
  local_20[0] = *param_1;
  local_20[1] = param_1[1];
  local_20[2] = param_1[2];
  local_20[3] = param_1[3];
  local_10 = *param_1;
  local_c = param_1[1];
  local_8 = param_1[2];
  local_4 = param_1[3];
  bVar4 = 0;
  if (((short)local_c == 0xf56) &&
     (local_c._2_2_ = (short)((uint)local_c >> 0x10), local_c._2_2_ == 0x11d2)) {
    iVar2 = 0;
    do {
      cVar1 = *(char *)((int)&local_8 + iVar2);
      if (cVar1 != (&DAT_01205928)[iVar2]) {
        bVar4 = bVar4 | 1;
      }
      if (cVar1 != (&DAT_01205920)[iVar2]) {
        bVar4 = bVar4 | 2;
      }
      if (cVar1 != (&DAT_01205918)[iVar2]) {
        bVar4 = bVar4 | 4;
      }
      if (bVar4 == 7) goto LAB_01040443;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uVar7 = 0xa0000000;
    local_24 = 0x5b7269c9;
  }
LAB_01040443:
  if (((local_20[3] & 0x7abe8f00U) == 0x7abe8f00) || ((local_20[3] & 0xb6de8f00U) == 0xb6de8f00)) {
    local_20[2] = param_1[2] & 0xffffU | uVar7;
    local_20[3] = local_24;
  }
  iVar2 = 0;
  piVar5 = &DAT_012055e8;
  do {
    iVar3 = 4;
    bVar9 = true;
    piVar6 = local_20;
    piVar8 = piVar5;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar6 == *piVar8;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      iVar3 = iVar2 * 0x20;
      *param_1 = (&DAT_012055d8)[iVar2 * 8];
      param_1[1] = *(int *)(iVar3 + 0x12055dc);
      param_1[2] = *(int *)(iVar3 + 0x12055e0);
      param_1[3] = *(int *)(iVar3 + 0x12055e4);
      return 0;
    }
    piVar5 = piVar5 + 8;
    iVar2 = iVar2 + 1;
    if ((int *)0x1205927 < piVar5) {
      return 0x80004002;
    }
  } while( true );
}


