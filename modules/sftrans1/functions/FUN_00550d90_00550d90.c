/* Module: sftrans1.dll
   Function: FUN_00550d90
   Address: 00550d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00550d90(ushort *param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x90e) != 0) {
    while( true ) {
      if (0 < *(int *)(param_1 + 0x914)) {
        iVar7 = *(int *)(param_1 + 0x914) + -1;
        *(int *)(param_1 + 0x914) = iVar7;
        *(undefined4 *)(param_1 + 0x956) = *(undefined4 *)(param_1 + iVar7 * 2 + 0x916);
        *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_1 + iVar7 * 2 + 0x928);
        *(undefined4 *)(param_1 + 0x95a) = *(undefined4 *)(param_1 + iVar7 * 2 + 0x93a);
        return 1;
      }
      iVar7 = *(int *)(param_1 + 0x950);
      if (iVar7 < 0) break;
      if (iVar7 == 0) {
        if (*(int *)(param_1 + 0x95c) != 0) {
          iVar7 = 0;
          do {
            iVar3 = (*(int *)(param_1 + 0x952) >> 0xe) + iVar7;
            FUN_00550f80(iVar3,*(int *)(param_1 + 0x954) >> 0xe,iVar3 + 1,
                         *(int *)(param_1 + 0x954) >> 0xe);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
        }
        *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + -1;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x952);
        uVar1 = *(uint *)(param_1 + 0x954);
        uVar4 = *(int *)(param_1 + 0x910) + uVar6;
        uVar8 = *(int *)(param_1 + 0x912) + uVar1;
        *(uint *)(param_1 + 0x952) = uVar4;
        *(int *)(param_1 + 0x950) = iVar7 + -1;
        *(uint *)(param_1 + 0x954) = uVar8;
        if ((((uVar4 ^ uVar6) & 0xffffc000) != 0) || (((uVar8 ^ uVar1) & 0xffffc000) != 0)) {
          FUN_00550f80((int)uVar6 >> 0xe,(int)uVar1 >> 0xe,(int)uVar4 >> 0xe,(int)uVar8 >> 0xe);
        }
        iVar7 = 9;
        puVar2 = param_1 + ((int)((*(uint *)(param_1 + 0x954) & 0x3fff) << 4) >> 0xe) * 0x10 +
                           ((int)((*(uint *)(param_1 + 0x952) & 0x3fff) << 4) >> 0xe) + 9;
        puVar5 = param_1;
        do {
          uVar6 = (uint)*puVar5 + (uint)*puVar2;
          if (0xfffe < uVar6) {
            uVar6 = 0xffff;
          }
          *puVar5 = (ushort)uVar6;
          puVar2 = puVar2 + 0x100;
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x950);
  if (iVar7 < 2) {
    if (iVar7 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x952) = *(undefined4 *)(param_1 + 0x95e);
    *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_1 + 0x960);
  }
  else {
    *(int *)(param_1 + 0x952) = *(int *)(param_1 + 0x952) + *(int *)(param_1 + 0x94c);
    *(int *)(param_1 + 0x954) = *(int *)(param_1 + 0x954) + *(int *)(param_1 + 0x94e);
  }
  *(int *)(param_1 + 0x956) = *(int *)(param_1 + 0x952) >> 0xe;
  *(int *)(param_1 + 0x958) = *(int *)(param_1 + 0x954) >> 0xe;
  *(int *)(param_1 + 0x950) = iVar7 + -1;
  return 1;
}


