/* Module: vegas30.exe
   Function: FUN_005a3990
   Address: 005a3990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3990(int param_1,int param_2,int param_3,byte *param_4,int param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  tagPOINT local_13c;
  int local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c [276];
  int local_8;
  
  puVar1 = DAT_0064b138;
  iVar2 = 0;
  if (param_5 != 0) {
    FUN_005b83b0(DAT_0064b138,1);
  }
  local_12c = 0;
  local_128 = param_2;
  local_124 = 0;
  local_120 = 0;
  if ((((param_4 == (byte *)0x0) || ((*param_4 & 1) == 0)) || (*(int *)(param_2 + 4) != 3)) ||
     (_FXPackage_GetPackageInfo_20
                (*(undefined4 *)(param_4 + 0x10c),*(undefined4 *)(param_4 + 0x110),
                 *(undefined4 *)(param_4 + 0x114),*(undefined4 *)(param_4 + 0x118),local_11c),
     local_8 != 6)) goto LAB_005a3b7a;
  piVar3 = (int *)(param_2 + 0x200);
  if (param_3 != 1) {
    piVar3 = (int *)(param_2 + 0x204);
  }
  if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
    FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
  }
  FUN_004e9f70(puVar1,0x227,0);
  FUN_004ea750(puVar1,param_2,2,0);
  if (*piVar3 != 0) {
    _SfVideoPlugin_DestroyCacheList_4(*piVar3);
    *piVar3 = 0;
  }
  if (param_3 == 1) {
    local_13c.y = *(int *)(*(int *)(param_2 + 0x218) + 0x5c);
    local_13c.x = *(int *)(*(int *)(param_2 + 0x218) + 0x58);
    local_130 = local_13c.y + 10;
    local_13c.y = local_13c.y + -10;
    local_134 = local_13c.x + 10;
    local_13c.x = local_13c.x + -10;
    iVar2 = FUN_005a45f0(local_11c,piVar3,param_2,7,*(undefined4 *)(param_2 + 0x78),
                         *(undefined4 *)(param_2 + 0x7c),1,0);
    local_12c = 7;
LAB_005a3b2e:
    if (-1 < iVar2) goto LAB_005a3b39;
  }
  else {
    if (param_3 == 2) {
      local_13c.y = *(int *)(*(int *)(param_2 + 0x218) + 100);
      local_13c.x = *(int *)(*(int *)(param_2 + 0x218) + 0x60);
      local_130 = local_13c.y + 10;
      local_13c.y = local_13c.y + -10;
      local_134 = local_13c.x + 10;
      local_13c.x = local_13c.x + -10;
      iVar2 = FUN_005a45f0(local_11c,piVar3,param_2,8,*(undefined4 *)(param_2 + 0x80),
                           *(undefined4 *)(param_2 + 0x84),1,0);
      local_12c = 8;
      goto LAB_005a3b2e;
    }
LAB_005a3b39:
    FUN_005a3510(puVar1,param_2,param_3);
    iVar2 = FUN_005a32f0(puVar1,param_6);
    if (-1 < iVar2) {
      FUN_004eb2b0(puVar1);
    }
  }
  FUN_004ea040(puVar1,0);
  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x100;
  DAT_0064767c = DAT_0064767c | 0x400;
LAB_005a3b7a:
  if (param_5 != 0) {
    FUN_005b84d0(puVar1,1);
  }
  if (-1 < iVar2) {
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_13c,2);
    FUN_0044e590(&local_12c,0,&local_13c);
  }
  return iVar2;
}


