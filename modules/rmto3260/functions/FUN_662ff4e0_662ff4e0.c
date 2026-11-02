/* Module: rmto3260.dll
   Function: FUN_662ff4e0
   Address: 662ff4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662ff4e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(ushort *)((int)this + 0xc);
  puVar3 = param_2;
  for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  FUN_662fdc80(param_2,(uint)*(ushort *)((int)this + 0x18));
  return 0;
}


