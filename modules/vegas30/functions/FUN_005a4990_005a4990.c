/* Module: vegas30.exe
   Function: FUN_005a4990
   Address: 005a4990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a4990(int param_1,int param_2,int *param_3)

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
  tagPOINT local_12c;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uchar local_10c [268];
  
  puVar2 = DAT_0064b138;
  local_148 = FUN_004e9f70(DAT_0064b138,0x229,0);
  if ((-1 < local_148) && (local_148 = FUN_004ea750(puVar2,param_2,0x2a,0), -1 < local_148)) {
    if (in_stack_0000001c != 0) {
      FUN_005b83b0(puVar2,1);
    }
    local_138 = 0;
    if (*(undefined4 **)(param_2 + 0x140) != (undefined4 *)0x0) {
      local_138 = **(undefined4 **)(param_2 + 0x140);
    }
    iVar4 = 0;
    local_13c = param_2;
    local_140 = 1;
    local_134 = 0;
    iVar3 = *param_3;
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
          local_148 = FUN_005a45f0(&local_11c,param_2 + 0x140,param_2,1,
                                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),1
                                   ,0);
          iVar3 = local_130;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (-1 < local_148) {
      FUN_004eb2b0(puVar2);
      *(uint *)*puVar2 = *(uint *)*puVar2 | 0x100;
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(puVar2,0);
    if (in_stack_0000001c != 0) {
      FUN_005b84d0(puVar2,1);
    }
    if (-1 < local_148) {
      iVar3 = *(int *)(param_2 + 0x218);
      local_12c.x = *(int *)(iVar3 + 0x40) + -10;
      local_12c.y = *(int *)(iVar3 + 0x44) + -10;
      local_124 = *(int *)(iVar3 + 0x40) + 10;
      local_120 = *(int *)(iVar3 + 0x44) + 10;
      MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_12c,2);
      FUN_0044e590(&local_140,0,&local_12c);
    }
    local_148 = 0;
  }
  return local_148;
}


