/* Module: vidcap30.exe
   Function: FUN_0043aa80
   Address: 0043aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043aa80(int param_1,HMENU param_2)

{
  UINT UVar1;
  uint uVar2;
  
  uVar2 = ~*(uint *)(param_1 + 0x1ae8) & 1;
  CheckMenuRadioItem(param_2,0x9d44,0x9d46,DAT_005bb560 + 0x9d44,0);
  EnableMenuItem(param_2,0x9d43,(uint)(DAT_005bba94 != 0));
  if (((DAT_005bba94 == 0) && (uVar2 != 0)) && ((*(byte *)(param_1 + 0x1ac4) & 0x10) != 0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = 1;
  }
  EnableMenuItem(param_2,0x9d44,UVar1);
  if (((DAT_005bba94 == 0) && (uVar2 != 0)) && ((*(byte *)(param_1 + 0x1ac4) & 0x20) != 0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = 1;
  }
  EnableMenuItem(param_2,0x9d45,UVar1);
  if (((DAT_005bba94 == 0) && (uVar2 != 0)) && ((*(byte *)(param_1 + 0x1ac4) & 0x40) != 0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = 1;
  }
  EnableMenuItem(param_2,0x9d46,UVar1);
  CheckMenuItem(param_2,0x9d65,-(uint)(DAT_005bb564 != 0) & 8);
  if (((DAT_005bba94 == 0) && (uVar2 != 0)) && ((*(uint *)(param_1 + 0x1ac4) & 0x100) != 0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = 1;
  }
  EnableMenuItem(param_2,0x9d65,UVar1);
  CheckMenuItem(param_2,0x9d4e,-(uint)(DAT_005bb55c != 0) & 8);
  if (((DAT_005bba94 == 0) && (uVar2 != 0)) && ((*(byte *)(param_1 + 0x1ac4) & 0x80) != 0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = 1;
  }
  EnableMenuItem(param_2,0x9d4e,UVar1);
  EnableMenuItem(param_2,0x43e,(uint)(DAT_005bba94 != 0));
  return;
}


