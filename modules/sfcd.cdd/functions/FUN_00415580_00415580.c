/* Module: sfcd.cdd
   Function: FUN_00415580
   Address: 00415580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415580(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  HGLOBAL hMem;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  uVar5 = FUN_0041f470(param_1);
  *param_2 = uVar5 + 2;
  hMem = GlobalAlloc(0x42,(uVar5 + 2) * 0x20);
  puVar6 = GlobalLock(hMem);
  param_2[1] = (int)puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  FUN_004154e0(puVar6,param_1);
  puVar6 = puVar6 + 8;
  uVar10 = 0;
  if (uVar5 != 0) {
    do {
      puVar7 = (undefined1 *)FUN_0041f490(param_1,uVar10);
      uVar1 = *(undefined4 *)(puVar7 + 0x18);
      uVar2 = *(undefined4 *)(puVar7 + 0x14);
      uVar3 = *(undefined4 *)(puVar7 + 0x10);
      if (uVar10 == uVar5 - 1) {
        sVar4 = 0x96;
      }
      else {
        iVar8 = FUN_0041f490(param_1,uVar10 + 1);
        uVar9 = *(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10);
        if (uVar9 < 0x96) {
          sVar4 = 0x96 - (short)uVar9;
        }
        else {
          sVar4 = 0;
        }
      }
      FUN_00415400(puVar6,puVar7,(short)uVar2 - (short)uVar3,uVar1,sVar4);
      puVar6 = puVar6 + 8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  FUN_00415550(puVar6);
  return 0;
}


