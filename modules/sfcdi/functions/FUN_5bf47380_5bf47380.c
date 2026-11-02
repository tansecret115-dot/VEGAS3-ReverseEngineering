/* Module: sfcdi.dll
   Function: FUN_5bf47380
   Address: 5bf47380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf47380(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  uVar2 = *(uint *)(iVar1 + 0x150);
  if (param_1 == 0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    iVar3 = FUN_5bf47220(param_1,param_2);
    if (-1 < iVar3) {
      iVar3 = FUN_5bf4e850(uVar2);
      if (-1 < iVar3) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(uVar2 + 8);
        *(undefined4 *)(param_2 + 0x330) = *(undefined4 *)(uVar2 + 0xc);
        *(undefined4 *)(param_2 + 0x334) = 0;
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(uVar2 + 0xc);
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(uint *)(iVar1 + 0x20) =
             (uint)((*(uint *)(uVar2 + 0xc) & 0x7ff) != 0) + (*(uint *)(uVar2 + 0xc) >> 0xb);
        *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) = *(undefined4 *)(uVar2 + 0xc);
        *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) =
             (uint)((*(uint *)(uVar2 + 0xc) & 0x7ff) != 0) + (*(uint *)(uVar2 + 0xc) >> 0xb);
        return iVar3;
      }
    }
  }
  return iVar3;
}


