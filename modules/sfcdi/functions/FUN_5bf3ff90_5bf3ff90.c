/* Module: sfcdi.dll
   Function: FUN_5bf3ff90
   Address: 5bf3ff90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3ff90(int param_1)

{
  undefined4 *_Dst;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  code *pcVar15;
  
  iVar6 = FUN_5bf3f280(param_1);
  if (iVar6 != 0) {
    _Dst = (undefined4 *)(iVar6 + 0x48);
    puVar14 = _Dst;
    for (iVar11 = 0x200; pcVar15 = memmove_exref, iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    memmove(_Dst,"VIDEO_CD",9);
    *(undefined2 *)(iVar6 + 0x50) = *(undefined2 *)(iVar6 + 4);
    memmove((void *)(iVar6 + 0x52),(void *)(iVar6 + 6),0x10);
    *(undefined2 *)(iVar6 + 0x62) = *(undefined2 *)(iVar6 + 0x16);
    *(undefined2 *)(iVar6 + 100) = *(undefined2 *)(iVar6 + 0x18);
    bVar2 = (*(byte *)(iVar6 + 0x1a) ^ *(byte *)(iVar6 + 0x73)) & 1 ^ *(byte *)(iVar6 + 0x73);
    *(byte *)(iVar6 + 0x73) = bVar2;
    bVar9 = (*(byte *)(iVar6 + 0x1c) & 1) << 3;
    *(byte *)(iVar6 + 0x73) = bVar9 | bVar2 & 0xf7;
    bVar3 = (*(byte *)(iVar6 + 0x20) & 1) << 4;
    *(byte *)(iVar6 + 0x73) = bVar3 | bVar9 | bVar2 & 0xe7;
    bVar10 = (*(byte *)(iVar6 + 0x24) & 1) << 5;
    *(byte *)(iVar6 + 0x73) = bVar10 | bVar3 | bVar9 | bVar2 & 199;
    bVar4 = (*(byte *)(iVar6 + 0x28) & 1) << 6;
    *(byte *)(iVar6 + 0x73) = bVar4 | bVar10 | bVar3 | bVar9 | bVar2 & 0x87;
    *(byte *)(iVar6 + 0x73) =
         *(char *)(iVar6 + 0x2c) << 7 | bVar4 | bVar10 | bVar3 | bVar9 | bVar2 & 7;
    *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)(iVar6 + 0x34);
    memmove((void *)(iVar6 + 0x78),(void *)(iVar6 + 0x38),3);
    *(undefined1 *)(iVar6 + 0x7b) = *(undefined1 *)(iVar6 + 0x3b);
    *(undefined2 *)(iVar6 + 0x7c) = *(undefined2 *)(iVar6 + 0x3c);
    uVar5 = 0;
    if (*(undefined4 **)(iVar6 + 0x44) != (undefined4 *)0x0) {
      uVar5 = (undefined2)**(undefined4 **)(iVar6 + 0x44);
    }
    *(undefined2 *)(iVar6 + 0x7e) = uVar5;
    uVar13 = 0;
    *(byte *)(iVar6 + 0x73) = (*(byte *)(iVar6 + 0x30) & 3) << 1 | *(byte *)(iVar6 + 0x73) & 0xf9;
    while( true ) {
      piVar7 = *(int **)(iVar6 + 0x40);
      if (piVar7 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar7;
      }
      if (iVar11 <= (int)uVar13) break;
      if (piVar7 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar7;
      }
      if (((int)uVar13 < 0) || (iVar11 + -1 < (int)uVar13)) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(piVar7[1] * uVar13 + piVar7[2]);
      }
      if (*piVar7 != 0) {
        uVar12 = uVar13 & 0x80000007;
        pbVar1 = (byte *)(((int)(uVar13 + ((int)uVar13 >> 0x1f & 7U)) >> 3) + 0x1e + (int)_Dst);
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar12 & 0x1f);
        pcVar15 = memmove_exref;
      }
      uVar13 = uVar13 + 1;
    }
    iVar11 = 0;
    while( true ) {
      piVar7 = *(int **)(iVar6 + 0x44);
      if (piVar7 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar7;
      }
      if (iVar8 <= iVar11) break;
      if (piVar7 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar7;
      }
      if ((iVar11 < 0) || (iVar8 + -1 < iVar11)) {
        (*pcVar15)(iVar6 + 0x80 + iVar11,0,1);
        iVar11 = iVar11 + 1;
      }
      else {
        (*pcVar15)(iVar6 + 0x80 + iVar11,piVar7[1] * iVar11 + piVar7[2],1);
        iVar11 = iVar11 + 1;
      }
    }
    FUN_5bf3f3e0((int)_Dst);
    return 0;
  }
  return 0x80070057;
}


