/* Module: vidcap30.exe
   Function: FUN_0044f380
   Address: 0044f380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f380(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [265];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = local_438;
  for (iVar2 = 0x10e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_c = 0x1a;
  local_8 = 0x1a;
  local_10 = 5;
  local_14 = 7;
  local_4 = 3;
  _SfLoadString_16(DAT_005ba2a0,0xc571,local_438,0x10a);
  puVar4 = local_438;
  uVar1 = FUN_0044c610(param_1);
  iVar2 = FUN_0044eee0(&local_440,uVar1,puVar4);
  if (DAT_005bba98 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *DAT_005bba98;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      if (iVar2 < 0) {
        return;
      }
      iVar2 = FUN_0044f500(local_43c,local_440,*(undefined4 *)(DAT_005bba98[2] + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return;
}


