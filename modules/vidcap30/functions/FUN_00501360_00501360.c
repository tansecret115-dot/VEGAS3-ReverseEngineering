/* Module: vidcap30.exe
   Function: FUN_00501360
   Address: 00501360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501360(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 0x40) != 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    iVar3 = _HotCheckNTSCYUV_4(puVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 2;
    }
    iVar3 = _HotCheckPALYUV_4(puVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 1;
    }
    if (*(uint *)(param_1 + 0x1f8) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x1fc);
      *puVar2 = *puVar1;
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x164);
      if ((*(uint *)(param_1 + 0x1f8) | 1) != 0) {
        _HotCheckPALYUVReturn_4(puVar2);
      }
      if ((*(uint *)(param_1 + 0x1f8) | 2) != 0) {
        _HotCheckNTSCYUVReturn_4(puVar2);
      }
    }
    return 1;
  }
  return 0;
}


