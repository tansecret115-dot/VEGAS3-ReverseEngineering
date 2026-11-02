/* Module: vegas30.exe
   Function: FUN_005a4b60
   Address: 005a4b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a4b60(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000001c;
  int local_148;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  tagPOINT local_12c [2];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uchar local_10c [268];
  
  puVar2 = DAT_0064b138;
  local_148 = FUN_004e9f70(DAT_0064b138,0x229,0);
  if ((-1 < local_148) && (local_148 = FUN_004ea250(puVar2,param_2,0x29,0), -1 < local_148)) {
    if (in_stack_0000001c != 0) {
      FUN_005b83b0(puVar2,1);
    }
    local_138 = 0;
    if (*(undefined4 **)(param_2 + 0x78) != (undefined4 *)0x0) {
      local_138 = **(undefined4 **)(param_2 + 0x78);
    }
    iVar4 = 0;
    local_13c = param_2;
    local_134 = 0;
    iVar3 = *param_3;
    local_140 = 2;
    local_130 = iVar3;
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(*(int *)(param_3[2] + iVar4 * 4) + 0x20c);
        if ((iVar1 != 0) && (*(int *)(param_2 + 4) == 3)) {
          local_11c = *(undefined4 *)(iVar1 + 0x10c);
          local_118 = *(undefined4 *)(iVar1 + 0x110);
          local_114 = *(undefined4 *)(iVar1 + 0x114);
          local_110 = *(undefined4 *)(iVar1 + 0x118);
          _mbscpy(local_10c,(uchar *)(iVar1 + 8));
          local_148 = FUN_005a45f0(&local_11c,param_2 + 0x78,param_2,2,0xffffffff,0x7fffffff,1,0);
          iVar3 = local_130;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (-1 < local_148) {
      FUN_004eb2b0(puVar2);
      *(uint *)*puVar2 = *(uint *)*puVar2 | 8;
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(puVar2,0);
    if (in_stack_0000001c != 0) {
      FUN_005b84d0(puVar2,1);
    }
    if (-1 < local_148) {
      iVar3 = FUN_004c3510(param_2,0,local_12c);
      if (iVar3 != 0) {
        MapWindowPoints(*(HWND *)(DAT_00647630 + 4),(HWND)0x0,local_12c,2);
      }
      FUN_0044e590(&local_140,0,-(uint)(iVar3 != 0) & (uint)local_12c);
    }
  }
  return local_148;
}


