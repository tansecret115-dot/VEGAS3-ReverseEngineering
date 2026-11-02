/* Module: sfmarket2.dll
   Function: FUN_004814d0
   Address: 004814d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004814d0(int *param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 == 0) || (0x100 < param_3)) {
    if (*(char *)((int)param_1 + 0x11e) != '\x03') {
      FUN_0047e370((int)param_1,"Invalid number of colors in palette");
      return;
    }
    FUN_0047e340(param_1,"Invalid number of colors in palette");
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  FUN_004810c0(param_1,(byte *)&DAT_004a86a0,uVar2 * 3);
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      param_3._0_3_ = CONCAT12(*puVar1,*(undefined2 *)(puVar1 + -2));
      FUN_00481110(param_1,(byte *)&param_3,3);
      puVar1 = puVar1 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_00481140(param_1);
  param_1[0x18] = param_1[0x18] | 2;
  return;
}


