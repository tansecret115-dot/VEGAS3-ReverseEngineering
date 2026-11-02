/* Module: vegas30.exe
   Function: FUN_005a46a0
   Address: 005a46a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a46a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uchar local_10c [268];
  
  uVar2 = DAT_0064b138;
  iVar5 = 0;
  uVar3 = FUN_005ba4b0(DAT_0064b138,0);
  local_130 = uVar3;
  iVar4 = FUN_004e9f70(uVar2,0x229,0);
  if ((-1 < iVar4) && (iVar4 = FUN_004eaad0(uVar2,0,0x24,0), -1 < iVar4)) {
    local_128 = uVar2;
    local_124 = 0;
    local_12c = 4;
    local_120 = 0;
    FUN_005b83b0(uVar2,1);
    local_134 = FUN_005ba950(uVar2,uVar3,0);
    if (param_1 == (int *)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = *param_1;
    }
    if (0 < local_138) {
      do {
        iVar1 = *(int *)(*(int *)(param_1[2] + iVar5 * 4) + 0x20c);
        if (iVar1 != 0) {
          local_11c = *(undefined4 *)(iVar1 + 0x10c);
          local_118 = *(undefined4 *)(iVar1 + 0x110);
          local_114 = *(undefined4 *)(iVar1 + 0x114);
          local_110 = *(undefined4 *)(iVar1 + 0x118);
          _mbscpy(local_10c,(uchar *)(iVar1 + 8));
          iVar4 = FUN_005a45f0(&local_11c,&local_134,uVar2,4,0xffffffff,0x7fffffff,1,0);
        }
        iVar5 = iVar5 + 1;
        uVar3 = local_130;
      } while (iVar5 < local_138);
    }
    FUN_005ba960(uVar2,uVar3,local_134,0);
    FUN_005b84d0(uVar2,1);
    if (-1 < iVar4) {
      FUN_004eb2b0(uVar2);
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(uVar2,0);
    if (-1 < iVar4) {
      FUN_0044e590(&local_12c,0,0);
    }
  }
  return iVar4;
}


