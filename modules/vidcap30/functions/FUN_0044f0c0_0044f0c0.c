/* Module: vidcap30.exe
   Function: FUN_0044f0c0
   Address: 0044f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f0c0(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [265];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (uint *)FUN_0042e4f0(DAT_005bb838);
  puVar6 = local_438;
  for (iVar4 = 0x10e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10 = 1;
  local_14 = 1;
  local_4 = 3;
  local_c = 0x19;
  local_8 = 0x19;
  _SfLoadString_16(DAT_005ba2a0,0xc50d,local_438,0x10a);
  puVar6 = local_438;
  uVar3 = FUN_0044c610(param_1);
  iVar4 = FUN_0044eee0(&local_440,uVar3,puVar6);
  uVar1 = *puVar2;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (iVar4 < 0) {
        return;
      }
      iVar4 = FUN_0044f450(local_43c,local_440,*(undefined4 *)(puVar2[2] + uVar5 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}


