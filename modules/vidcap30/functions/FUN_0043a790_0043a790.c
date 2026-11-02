/* Module: vidcap30.exe
   Function: FUN_0043a790
   Address: 0043a790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a790(undefined4 param_1,HMENU param_2)

{
  HMENU hMenu;
  
  hMenu = param_2;
  _SfGetSubmenuByID_12(param_2,0x9d21,&param_2);
  CheckMenuItem(hMenu,0x9d1f,(-(uint)(DAT_005bb54c != 1) & 0xfffffff8) + 8);
  CheckMenuItem(hMenu,0x9d20,-(uint)(DAT_005bb530 != 0) & 8);
  EnableMenuItem(hMenu,0x43e,(uint)(DAT_005bba94 != 0));
  EnableMenuItem(hMenu,(UINT)param_2,0x400);
  return;
}


