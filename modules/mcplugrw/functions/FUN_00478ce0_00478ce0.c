/* Module: mcplugrw.dll
   Function: FUN_00478ce0
   Address: 00478ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478ce0(int *param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 == 0) || (0x100 < param_3)) {
    if (*(char *)((int)param_1 + 0x11e) != '\x03') {
      FUN_00475b80((int)param_1,"Invalid number of colors in palette");
      return;
    }
    FUN_00475b50(param_1,"Invalid number of colors in palette");
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  FUN_004788d0(param_1,(byte *)&DAT_004a6e24,uVar2 * 3);
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      param_3._0_3_ = CONCAT12(*puVar1,*(undefined2 *)(puVar1 + -2));
      FUN_00478920(param_1,(byte *)&param_3,3);
      puVar1 = puVar1 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_00478950(param_1);
  param_1[0x18] = param_1[0x18] | 2;
  return;
}


