/* Module: vidcap30.exe
   Function: FUN_005497b0
   Address: 005497b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005497b0(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_00549780(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  }
  if (param_2 != 0) {
    FUN_00549780(param_1,*(undefined4 *)(param_1 + 0xa4),param_2);
  }
  iVar3 = FUN_00549850(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x114) & 0x20;
  if (((bVar2 == 0) || ((*(uint *)(param_1 + 100) & 0x200) != 0)) &&
     ((bVar2 != 0 || ((*(uint *)(param_1 + 100) & 0x400) == 0)))) {
    FUN_005495a0(param_1,"CRC error");
    return 1;
  }
  FUN_00549670(param_1,"CRC error");
  return 1;
}


