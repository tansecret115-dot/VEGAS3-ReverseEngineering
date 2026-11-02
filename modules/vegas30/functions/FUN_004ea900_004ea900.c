/* Module: vegas30.exe
   Function: FUN_004ea900
   Address: 004ea900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea900(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_20 [4];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) == '\x01') {
    uVar3 = param_5 << 0x18 | param_3;
    iVar2 = FUN_005b46a0(*(undefined4 *)(iVar1 + 0x3c8),uVar3,param_4);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_005b46f0(iVar1 + 0x3c8,uVar3,param_4);
    if (-1 < iVar2) {
      puVar4 = local_20;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (param_5 == 0x1b) {
        local_20[0] = 0x2066786d;
      }
      else {
        if (param_5 != 0x1c) {
          FUN_004ea010(iVar1,0x80004005);
          return -0x7fffbffb;
        }
        local_20[0] = 0x6c66786d;
      }
      local_10 = param_3;
      local_c = param_2;
      local_8 = param_4;
      iVar2 = FUN_005b5820(local_20);
      if (-1 < iVar2) {
        return iVar2;
      }
    }
  }
  FUN_004ea010(iVar1,iVar2);
  return iVar2;
}


