/* Module: pngu3266.dll
   Function: FUN_6061f820
   Address: 6061f820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f820(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (0 < (int)param_2)) {
    if (*(int *)((int)this + 0x1004c) != 1) {
      iVar4 = *(int *)((int)this + 0x10034);
      uVar2 = param_2;
      if (*(int *)((int)this + 0x10030) < (int)(param_2 + iVar4)) {
        uVar2 = *(int *)((int)this + 0x10030) - iVar4;
      }
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x1002c) + iVar4);
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      iVar4 = *(int *)((int)this + 0x10034) + param_2;
      *(int *)((int)this + 0x10034) = iVar4;
      *(uint *)((int)this + 0x10040) = *(int *)((int)this + 0x10040) + param_2;
      *(undefined4 *)((int)this + 0x10048) = 0;
      if (*(int *)((int)this + 0x10030) <= iVar4) {
        *(undefined4 *)((int)this + 0x1004c) = 1;
      }
      return 0;
    }
    return 0;
  }
  return 0x80070057;
}


