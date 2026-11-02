/* Module: vegas30.exe
   Function: FUN_004cc160
   Address: 004cc160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004cc160(int param_1,LONG param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HMENU hMenu;
  int local_148;
  tagPOINT local_144;
  LONG local_13c;
  LONG local_138;
  tagPOINT local_134;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [32];
  undefined1 local_104 [260];
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xce4) + 0x10);
  if (((uVar1 & 0x80000) != 0) && ((uVar1 & 0x10000) == 0)) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xce4) + 0x69c) + 0x54);
    iVar3 = FUN_005382e0(1);
    iVar4 = FUN_005be610(1,local_124);
    local_134.x = param_2;
    local_134.y = param_3;
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),&local_134,1);
    iVar3 = (local_134.y - *(int *)(iVar2 + 0x118)) / iVar3;
    if ((-1 < iVar3) && (iVar3 < iVar4)) {
      FUN_005bea00(iVar3,local_124,local_104,0x104,&local_148);
      hMenu = (HMENU)FUN_004047d0(0x332,3);
      SetMenuDefaultItem(hMenu,0xc87a,0);
      local_12c = 0xc879;
      local_128 = 0;
      _SfCullMenu_16(hMenu,&local_12c,2,1);
      iVar4 = FUN_00404830(*(undefined4 *)(param_1 + 4),hMenu,&param_2,2);
      if (iVar4 == 0xc879) {
        FUN_005c03a0(iVar3,local_124,(local_148 != 0) + 0x239);
        FUN_005c0400();
        FUN_005beb90(iVar3,local_124,local_148 == 0);
        DAT_0064767c = DAT_0064767c | 0x800;
        FUN_005c0420(1);
        DAT_0064767c = DAT_0064767c | 0x40000;
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(iVar2 + 0x114),0);
      }
      else if (iVar4 == 0xc87a) {
        local_144.x = *(LONG *)(iVar2 + 0x114);
        local_144.y = *(LONG *)(iVar2 + 0x120);
        local_13c = local_144.x;
        local_138 = local_144.y;
        MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_144,2);
        FUN_005c00a0(iVar3,local_124,local_144.x,local_144.y,local_13c,local_138);
        return 0;
      }
    }
  }
  return 0;
}


