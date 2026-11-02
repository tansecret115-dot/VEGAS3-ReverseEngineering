/* Module: rnco3260.dll
   Function: FUN_63763213
   Address: 63763213
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63763213(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  DAT_6379a424 = param_6;
  puVar11 = (undefined1 *)(param_2 + _DAT_6379a428);
  if (0 < (int)DAT_6379a414) {
    DAT_6379a418 = DAT_6379a414;
    uVar10 = DAT_6379a410 >> 2;
    if (uVar10 != 0) {
      puVar13 = (undefined4 *)(param_5 + -8);
      puVar9 = (undefined1 *)(param_3 + _DAT_6379a42c);
      DAT_6379a41c = uVar10;
      puVar14 = puVar13;
      puVar12 = puVar11;
      puVar8 = (undefined1 *)(param_3 + _DAT_6379a42c);
      while( true ) {
        do {
          uVar2 = puVar11[3];
          uVar3 = puVar9[0x169];
          puVar1 = puVar11 + 1;
          uVar4 = *puVar11;
          uVar5 = puVar11[2];
          uVar6 = puVar9[1];
          puVar11 = puVar11 + 4;
          puVar13[2] = CONCAT22(CONCAT11(puVar9[0x168],*puVar1),CONCAT11(*puVar9,uVar4));
          puVar13[3] = CONCAT22(CONCAT11(uVar3,uVar2),CONCAT11(uVar6,uVar5));
          uVar10 = uVar10 - 1;
          puVar9 = puVar9 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar10 != 0);
        puVar11 = puVar12 + 0x2d0;
        puVar13 = (undefined4 *)((int)puVar14 + DAT_6379a424);
        uVar7 = DAT_6379a418 - 1;
        if (uVar7 == 0) break;
        puVar9 = puVar8;
        uVar10 = DAT_6379a41c;
        DAT_6379a418 = uVar7;
        puVar14 = puVar13;
        puVar12 = puVar11;
        if ((uVar7 & 1) == 0) {
          puVar9 = puVar8 + 0x2d0;
          puVar8 = puVar9;
        }
      }
    }
  }
  return;
}


