/* Module: vegas30k.dll
   Function: FUN_01012010
   Address: 01012010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01012010(tagDIR_ENTRY *param_1)

{
  tagSFVCD_INFO *_Dst;
  tagSFVCD_INFO tVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  tagSFVCD_INFO *ptVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  tagSFVCD_INFO *ptVar13;
  code *pcVar14;
  
  ptVar5 = sfvcdGetVCD_INFO(param_1);
  if (ptVar5 != (tagSFVCD_INFO *)0x0) {
    _Dst = ptVar5 + 0x48;
    ptVar13 = _Dst;
    for (iVar10 = 0x200; pcVar14 = memmove_exref, iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)ptVar13 = 0;
      ptVar13 = ptVar13 + 4;
    }
    memmove(_Dst,"VIDEO_CD",9);
    *(undefined2 *)(ptVar5 + 0x50) = *(undefined2 *)(ptVar5 + 4);
    memmove(ptVar5 + 0x52,ptVar5 + 6,0x10);
    *(undefined2 *)(ptVar5 + 0x62) = *(undefined2 *)(ptVar5 + 0x16);
    *(undefined2 *)(ptVar5 + 100) = *(undefined2 *)(ptVar5 + 0x18);
    tVar1 = (tagSFVCD_INFO)(((byte)ptVar5[0x1a] ^ (byte)ptVar5[0x73]) & 1 ^ (byte)ptVar5[0x73]);
    ptVar5[0x73] = tVar1;
    bVar8 = ((byte)ptVar5[0x1c] & 1) << 3;
    ptVar5[0x73] = (tagSFVCD_INFO)(bVar8 | (byte)tVar1 & 0xf7);
    bVar2 = ((byte)ptVar5[0x20] & 1) << 4;
    ptVar5[0x73] = (tagSFVCD_INFO)(bVar2 | bVar8 | (byte)tVar1 & 0xe7);
    bVar9 = ((byte)ptVar5[0x24] & 1) << 5;
    ptVar5[0x73] = (tagSFVCD_INFO)(bVar9 | bVar2 | bVar8 | (byte)tVar1 & 199);
    bVar3 = ((byte)ptVar5[0x28] & 1) << 6;
    ptVar5[0x73] = (tagSFVCD_INFO)(bVar3 | bVar9 | bVar2 | bVar8 | (byte)tVar1 & 0x87);
    ptVar5[0x73] = (tagSFVCD_INFO)
                   ((char)ptVar5[0x2c] << 7 | bVar3 | bVar9 | bVar2 | bVar8 | (byte)tVar1 & 7);
    *(undefined4 *)(ptVar5 + 0x74) = *(undefined4 *)(ptVar5 + 0x34);
    memmove(ptVar5 + 0x78,ptVar5 + 0x38,3);
    ptVar5[0x7b] = ptVar5[0x3b];
    *(undefined2 *)(ptVar5 + 0x7c) = *(undefined2 *)(ptVar5 + 0x3c);
    uVar4 = 0;
    if (*(undefined4 **)(ptVar5 + 0x44) != (undefined4 *)0x0) {
      uVar4 = (undefined2)**(undefined4 **)(ptVar5 + 0x44);
    }
    *(undefined2 *)(ptVar5 + 0x7e) = uVar4;
    uVar12 = 0;
    ptVar5[0x73] = (tagSFVCD_INFO)(((byte)ptVar5[0x30] & 3) << 1 | (byte)ptVar5[0x73] & 0xf9);
    while( true ) {
      piVar6 = *(int **)(ptVar5 + 0x40);
      if (piVar6 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar6;
      }
      if (iVar10 <= (int)uVar12) break;
      if (piVar6 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar6;
      }
      if (((int)uVar12 < 0) || (iVar10 + -1 < (int)uVar12)) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(piVar6[1] * uVar12 + piVar6[2]);
      }
      if (*piVar6 != 0) {
        uVar11 = uVar12 & 0x80000007;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
        }
        _Dst[((int)(uVar12 + ((int)uVar12 >> 0x1f & 7U)) >> 3) + 0x1e] =
             (tagSFVCD_INFO)
             ((byte)_Dst[((int)(uVar12 + ((int)uVar12 >> 0x1f & 7U)) >> 3) + 0x1e] |
             '\x01' << ((byte)uVar11 & 0x1f));
        pcVar14 = memmove_exref;
      }
      uVar12 = uVar12 + 1;
    }
    iVar10 = 0;
    while( true ) {
      piVar6 = *(int **)(ptVar5 + 0x44);
      if (piVar6 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar6;
      }
      if (iVar7 <= iVar10) break;
      if (piVar6 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar6;
      }
      if ((iVar10 < 0) || (iVar7 + -1 < iVar10)) {
        (*pcVar14)(ptVar5 + iVar10 + 0x80,0,1);
        iVar10 = iVar10 + 1;
      }
      else {
        (*pcVar14)(ptVar5 + iVar10 + 0x80,piVar6[1] * iVar10 + piVar6[2],1);
        iVar10 = iVar10 + 1;
      }
    }
    FUN_01011460(_Dst);
    return (undefined1 *)0x0;
  }
  return &DAT_80070057;
}


