/* Module: vegas30k.dll
   Function: FUN_011561f0
   Address: 011561f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011561f0(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_011561c0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  }
  if (param_2 != 0) {
    FUN_011561c0(param_1,*(undefined4 *)(param_1 + 0xa4),param_2);
  }
  iVar3 = FUN_01156290(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x114) & 0x20;
  if (((bVar2 == 0) || ((*(uint *)(param_1 + 100) & 0x200) != 0)) &&
     ((bVar2 != 0 || ((*(uint *)(param_1 + 100) & 0x400) == 0)))) {
    FUN_01155fe0(param_1,"CRC error");
    return 1;
  }
  FUN_011560b0(param_1,"CRC error");
  return 1;
}


