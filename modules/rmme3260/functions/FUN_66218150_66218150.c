/* Module: rmme3260.dll
   Function: FUN_66218150
   Address: 66218150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66218150(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)((int)this + 0x3e);
  if (uVar2 <= param_2) {
    puVar3 = *(undefined4 **)((int)this + 0x42);
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    *param_3 = *(undefined4 *)((int)this + 0x3e);
    return 0;
  }
  *param_3 = 0;
  return 0x8004000d;
}


