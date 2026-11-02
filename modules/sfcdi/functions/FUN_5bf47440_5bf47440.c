/* Module: sfcdi.dll
   Function: FUN_5bf47440
   Address: 5bf47440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf47440(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  iVar1 = *(int *)(param_2 + 0x34c);
  puVar2 = *(undefined1 **)(iVar1 + 0x150);
  iVar4 = FUN_5bf47120((int)puVar2);
  if ((-1 < iVar4) && (iVar4 = FUN_5bf4b690(puVar2), -1 < iVar4)) {
    if ((*(int *)(puVar2 + 0xc) == 0) || (*(uint *)(*(int *)(puVar2 + 0xc) + 8) < 0x10)) {
      *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) | 8;
      param_2 = *(int *)(*(int *)(puVar2 + 0x14) + 0xc);
      FUN_5bf47000((undefined1 *)&param_2,1);
      *(uint *)(iVar3 + 0x340) =
           param_2 + ((uint)((*(uint *)(puVar2 + 0x18) & 0x7ff) != 0) +
                     (*(uint *)(puVar2 + 0x18) >> 0xb)) * -2 + 1;
    }
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(puVar2 + 0x14);
    *(undefined4 *)(iVar3 + 0x330) = *(undefined4 *)(puVar2 + 0x18);
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(uint *)(iVar1 + 0x20) =
         (uint)((*(uint *)(puVar2 + 0x18) & 0x7ff) != 0) + (*(uint *)(puVar2 + 0x18) >> 0xb);
    *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) = *(undefined4 *)(puVar2 + 0x18);
    *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) =
         (uint)((*(uint *)(puVar2 + 0x18) & 0x7ff) != 0) + (*(uint *)(puVar2 + 0x18) >> 0xb);
  }
  return iVar4;
}


