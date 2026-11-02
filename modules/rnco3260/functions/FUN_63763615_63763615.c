/* Module: rnco3260.dll
   Function: FUN_63763615
   Address: 63763615
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63763615(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  
  DAT_6379a424 = param_6;
  puVar8 = (undefined1 *)(param_2 + _DAT_6379a428);
  puVar5 = (undefined1 *)(param_3 + _DAT_6379a42c);
  if (0 < (int)DAT_6379a414) {
    DAT_6379a418 = DAT_6379a414;
    uVar7 = DAT_6379a410 >> 3;
    uVar3 = uVar7;
    puVar10 = param_5;
    puVar9 = puVar8;
    puVar6 = puVar5;
    if (uVar7 != 0) {
      while( true ) {
        do {
          DAT_6379a41c = uVar3;
          uVar3 = (CONCAT11(puVar5[0x16a],puVar5[0x168]) & 0xfcfc) >> 2;
          iVar4 = (CONCAT31((int3)((uint)(CONCAT31((int3)((uint)(CONCAT31((int3)((uint)(CONCAT31((
                                                  int3)(((uint)(byte)puVar8[7] << 5) >> 8),puVar8[6]
                                                  ) << 5) >> 8),puVar8[5]) << 5) >> 8),puVar8[4]) <<
                                         5) >> 8),puVar5[2]) & 0xffffffc) << 4;
          iVar1 = (CONCAT31((int3)((uint)(CONCAT31((int3)((uint)(CONCAT31((int3)((uint)(CONCAT31((
                                                  int3)(((uint)(byte)puVar8[3] << 5) >> 8),puVar8[2]
                                                  ) << 5) >> 8),puVar8[1]) << 5) >> 8),*puVar8) << 5
                                         ) >> 8),*puVar5) & 0xffffffc) << 4;
          puVar8 = puVar8 + 8;
          *param_5 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 | (byte)uVar3);
          param_5[1] = CONCAT31((int3)((uint)iVar4 >> 8),(byte)iVar4 | (byte)(uVar3 >> 8));
          param_5 = param_5 + 2;
          uVar7 = uVar7 - 1;
          puVar5 = puVar5 + 4;
          uVar3 = DAT_6379a41c;
        } while (uVar7 != 0);
        puVar8 = puVar9 + 0x2d0;
        param_5 = (undefined4 *)((int)puVar10 + DAT_6379a424);
        uVar2 = DAT_6379a418 - 1;
        if (uVar2 == 0) break;
        puVar5 = puVar6;
        uVar7 = DAT_6379a41c;
        DAT_6379a418 = uVar2;
        puVar10 = param_5;
        puVar9 = puVar8;
        if ((uVar2 & 1) == 0) {
          puVar5 = puVar6 + 0x2d0;
          puVar6 = puVar5;
        }
      }
    }
  }
  return;
}


