/* Module: vegas30k.dll
   Function: FUN_01159110
   Address: 01159110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159110(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 == 0) || (0x100 < param_3)) {
    if (*(char *)(param_1 + 0x11e) != '\x03') {
      FUN_01155fb0(param_1,"Invalid number of colors in palette");
      return;
    }
    FUN_01155f80(param_1,"Invalid number of colors in palette");
  }
  *(short *)(param_1 + 0x110) = (short)uVar2;
  FUN_01158d00(param_1,&DAT_01206fd4,uVar2 * 3);
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      param_3._0_3_ = CONCAT12(*puVar1,*(undefined2 *)(puVar1 + -2));
      FUN_01158d50(param_1,&param_3,3);
      puVar1 = puVar1 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_01158d80(param_1);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
  return;
}


