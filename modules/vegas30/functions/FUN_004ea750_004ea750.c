/* Module: vegas30.exe
   Function: FUN_004ea750
   Address: 004ea750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea750(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_20 [4];
  uint local_10;
  undefined4 local_c;
  
  iVar4 = -0x7fffbffb;
  iVar2 = FUN_005b8630(param_1);
  if (*(char *)(iVar2 + 0x1d0) == '\x01') {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + 0x18);
    uVar3 = FUN_005c9450(param_1,param_2);
    uVar5 = param_3 << 0x18 | uVar1;
    if ((param_4 == 0) &&
       (iVar4 = FUN_005b46a0(*(undefined4 *)(iVar2 + 0x3c0),uVar5,uVar3), iVar4 != 0)) {
      return 0;
    }
    iVar4 = FUN_005b46f0(iVar2 + 0x3c0,uVar5,uVar3);
    if (-1 < iVar4) {
      puVar6 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      if (param_3 == 2) {
        local_20[0] = 0x76656b74;
      }
      else if (param_3 == 0x2a) {
        local_20[0] = 0x78667665;
      }
      else {
        if (param_3 != 0x2b) {
          FUN_004ea010(iVar2,0x80004005);
          return -0x7fffbffb;
        }
        local_20[0] = 0x6d767665;
      }
      local_10 = uVar1;
      local_c = uVar3;
      iVar4 = FUN_005b5820(local_20);
      if (-1 < iVar4) {
        return iVar4;
      }
    }
  }
  FUN_004ea010(iVar2,iVar4);
  return iVar4;
}


