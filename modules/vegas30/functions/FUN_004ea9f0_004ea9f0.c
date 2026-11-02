/* Module: vegas30.exe
   Function: FUN_004ea9f0
   Address: 004ea9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea9f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_20 [4];
  uint local_10;
  undefined4 local_c;
  
  iVar3 = -0x7fffbffb;
  iVar2 = FUN_005b8630(param_1);
  if (*(char *)(iVar2 + 0x1d0) == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar4 = param_4 << 0x18 | uVar1;
    iVar3 = FUN_005b46a0(*(undefined4 *)(iVar2 + 0x3cc),uVar4,param_3);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = FUN_005b46f0(iVar2 + 0x3cc,uVar4,param_3);
    if (-1 < iVar3) {
      puVar5 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (param_4 != 0x22) {
        FUN_004ea010(iVar2,0x80004005);
        return -0x7fffbffb;
      }
      local_20[0] = 0x78666b74;
      local_c = param_3;
      local_10 = uVar1;
      iVar3 = FUN_005b5820(local_20);
      if (-1 < iVar3) {
        return iVar3;
      }
    }
  }
  FUN_004ea010(iVar2,iVar3);
  return iVar3;
}


