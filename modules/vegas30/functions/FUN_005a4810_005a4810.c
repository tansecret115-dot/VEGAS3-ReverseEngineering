/* Module: vegas30.exe
   Function: FUN_005a4810
   Address: 005a4810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a4810(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_138;
  int local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uchar local_10c [268];
  
  uVar4 = DAT_0064b138;
  local_120 = DAT_0064b138;
  iVar3 = FUN_004e9f70(DAT_0064b138,0x229,0);
  if ((-1 < iVar3) && (iVar3 = FUN_004eb0f0(uVar4,0x25,param_1), -1 < iVar3)) {
    if (param_3 != 0) {
      FUN_005b83b0(uVar4,1);
    }
    local_12c = param_1;
    local_124 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x138);
    local_130 = 6;
    if (puVar1 == (undefined4 *)0x0) {
      local_128 = 0;
    }
    else {
      local_128 = *puVar1;
    }
    if (param_2 == (int *)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = *param_2;
    }
    local_134 = 0;
    if (0 < local_138) {
      do {
        iVar2 = *(int *)(*(int *)(param_2[2] + local_134 * 4) + 0x20c);
        if (iVar2 != 0) {
          local_11c = *(undefined4 *)(iVar2 + 0x10c);
          local_118 = *(undefined4 *)(iVar2 + 0x110);
          local_114 = *(undefined4 *)(iVar2 + 0x114);
          local_110 = *(undefined4 *)(iVar2 + 0x118);
          _mbscpy(local_10c,(uchar *)(iVar2 + 8));
          iVar3 = FUN_005a45f0(&local_11c,(int *)(param_1 + 0x138),param_1,6,0xffffffff,0x7fffffff,1
                               ,0);
        }
        local_134 = local_134 + 1;
        uVar4 = local_120;
      } while (local_134 < local_138);
    }
    if (param_3 != 0) {
      FUN_005b84d0(uVar4,1);
    }
    if (-1 < iVar3) {
      FUN_004eb2b0(uVar4);
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(uVar4,0);
    if (-1 < iVar3) {
      FUN_0044e590(&local_130,0,0);
    }
  }
  return iVar3;
}


