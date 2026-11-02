/* Module: rmto3260.dll
   Function: FUN_662ff140
   Address: 662ff140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662ff140(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    do {
      uVar3 = (uint)*(ushort *)((int)this + 0x16);
      puVar4 = (undefined4 *)(uVar1 * uVar3 + param_1);
      puVar5 = (undefined4 *)(*(ushort *)(*(int *)((int)this + 0x18) + uVar1 * 2) * uVar3 + param_2)
      ;
      for (uVar2 = (uint)(*(ushort *)((int)this + 0x16) >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = uVar1 + 1;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    } while (uVar1 < *(uint *)((int)this + 0x1c));
  }
  return 0;
}


