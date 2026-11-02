/* Module: sfpaplug.dll
   Function: FUN_00408040
   Address: 00408040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00408040(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 8 - *(int *)(param_1 + 0x50);
  if (iVar2 <= param_2) {
    do {
      uVar1 = *(uint *)(&DAT_00458074 + iVar2 * 4);
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar3 = uVar3 << ((byte)iVar2 & 0x1f) | uVar1 & *(uint *)(param_1 + 0x54);
      if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + -1) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
      param_2 = param_2 - iVar2;
      iVar2 = 8;
      *(uint *)(param_1 + 0x54) =
           (uint)*(byte *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40));
    } while (7 < param_2);
  }
  if (0 < param_2) {
    do {
      uVar1 = FUN_00407ff0(param_1);
      if ((int)uVar1 < 0) {
        return 0xffffffff;
      }
      uVar3 = uVar3 * 2 | uVar1 & 1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
  }
  return uVar3;
}


