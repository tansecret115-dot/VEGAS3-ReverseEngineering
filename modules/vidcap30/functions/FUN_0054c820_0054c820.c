/* Module: vidcap30.exe
   Function: FUN_0054c820
   Address: 0054c820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c820(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 == 0) || (0x100 < param_3)) {
    if (*(char *)(param_1 + 0x11e) != '\x03') {
      FUN_00549570(param_1,"Invalid number of colors in palette");
      return;
    }
    FUN_00549540(param_1,"Invalid number of colors in palette");
  }
  *(short *)(param_1 + 0x110) = (short)uVar2;
  FUN_0054c410(param_1,&DAT_005b89c4,uVar2 * 3);
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      param_3._0_3_ = CONCAT12(*puVar1,*(undefined2 *)(puVar1 + -2));
      FUN_0054c460(param_1,&param_3,3);
      puVar1 = puVar1 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_0054c490(param_1);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
  return;
}


