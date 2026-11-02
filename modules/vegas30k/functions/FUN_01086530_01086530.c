/* Module: vegas30k.dll
   Function: FUN_01086530
   Address: 01086530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01086530(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  iVar2 = *(int *)(iVar1 + 0x150);
  if (param_1 == 0) {
    puVar3 = &DAT_80070057;
  }
  else {
    puVar3 = (undefined1 *)FUN_010863d0(param_1,param_2);
    if (-1 < (int)puVar3) {
      puVar3 = (undefined1 *)FUN_0108b470(iVar2);
      if (-1 < (int)puVar3) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(param_2 + 0x330) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(param_2 + 0x334) = 0;
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(uint *)(iVar1 + 0x20) =
             (uint)((*(uint *)(iVar2 + 0xc) & 0x7ff) != 0) + (*(uint *)(iVar2 + 0xc) >> 0xb);
        *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) =
             (uint)((*(uint *)(iVar2 + 0xc) & 0x7ff) != 0) + (*(uint *)(iVar2 + 0xc) >> 0xb);
        return puVar3;
      }
    }
  }
  return puVar3;
}


