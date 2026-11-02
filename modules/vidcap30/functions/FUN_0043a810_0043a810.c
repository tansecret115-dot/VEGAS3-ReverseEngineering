/* Module: vidcap30.exe
   Function: FUN_0043a810
   Address: 0043a810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a810(int param_1,HMENU param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0x9d77;
  local_18 = 0x9d78;
  local_14 = 0x9d79;
  local_10 = 0x9d7a;
  local_c = 0x9d7b;
  local_8 = 0x9d7d;
  local_4 = 0x9d7c;
  _SfCullMenu_16(param_2,&local_1c,7,1);
  SetMenuDefaultItem(param_2,0x9d64,0);
  EnableMenuItem(param_2,0x9d64,(uint)(DAT_005bba94 != 0));
  iVar2 = 0;
  piVar1 = &DAT_0058ada0;
  do {
    if (*piVar1 == DAT_005bb810) {
      CheckMenuRadioItem(param_2,0x9d77,0x9d7d,(&DAT_0058ada4)[iVar2 * 2],0);
      break;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < "Preview Window");
  if (param_3 == 0x40000) {
    ModifyMenuA(param_2,0x9d64,~*(uint *)(param_1 + 0x1aec) >> 10 & 1,0x9d64,
                "&Go To Timecode...\tCtrl+G");
  }
  else if (param_3 == 0x200000) {
    DeleteMenu(param_2,0x9d64,0);
    _SfCleanMenu_12(param_2,0,0xffffffff);
    return;
  }
  _SfCleanMenu_12(param_2,0,0xffffffff);
  return;
}


