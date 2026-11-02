/* Module: vidcap30.exe
   Function: FUN_00433d10
   Address: 00433d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00433d10(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  HMENU hMenu;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  local_20 = 0;
  local_24 = 0;
  local_18 = 0x9d53;
  local_14 = 0x9cd0;
  local_10 = 0x9d52;
  local_c = 0x9d8f;
  local_8 = 0x9ccd;
  local_4 = 0;
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(*(HWND *)(param_1 + 0x184),(LPPOINT)&param_3);
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 1)) {
    return 1;
  }
  hMenu = (HMENU)FUN_00404200(0x18e,0);
  if (hMenu == (HMENU)0x0) {
    return 0x8004e003;
  }
  iVar1 = *(int *)param_2[2];
  if (iVar1 != 0) {
    local_20 = *(uint *)(iVar1 + 0x210) & 0x10;
    uVar4 = ~*(uint *)(iVar1 + 0x210);
    uVar6 = uVar4 >> 0x14 & 1;
    local_24 = FUN_00433c10(*(undefined4 *)(param_1 + 0x184),iVar1);
    if (((uVar4 >> 0x13 & 1) != 0) && (DAT_005bba94 == 0)) {
      bVar3 = true;
      goto LAB_00433e16;
    }
  }
  bVar3 = false;
LAB_00433e16:
  if ((uVar6 == 0) || (DAT_005bba94 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  _SfCullMenu_16(hMenu,&local_18,6,1);
  FUN_00433c70(*(undefined4 *)(param_1 + 0x184),hMenu);
  EnableMenuItem(hMenu,0x9cc5,(uint)!bVar2);
  EnableMenuItem(hMenu,0x9cc4,(uint)!bVar3);
  EnableMenuItem(hMenu,0x9cc3,(uint)(local_24 == 0));
  EnableMenuItem(hMenu,0x9d54,(uint)(local_20 == 0));
  uVar5 = FUN_00404270(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
  FUN_00432b60(param_1,uVar5,0x461,*(undefined4 *)(param_1 + 0x184));
  return 0;
}


