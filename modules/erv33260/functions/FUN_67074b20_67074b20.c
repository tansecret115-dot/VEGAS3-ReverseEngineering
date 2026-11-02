/* Module: erv33260.dll
   Function: FUN_67074b20
   Address: 67074b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67074b20(void *this,int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == param_2) {
    uVar3 = ((param_4 >> 1) + param_4) * param_1;
  }
  else {
    uVar3 = (param_2 + param_1) * param_4;
  }
  if (*(uint *)((int)this + 0x54) < uVar3) {
    FUN_67072140(*(void **)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
  }
  if (*(int *)((int)this + 0x50) == 0) {
    iVar1 = FUN_67072130(uVar3 + 0x28);
    *(int *)((int)this + 0x50) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    puVar4 = (undefined4 *)(iVar1 + 7U & 0xfffffff8);
    *(undefined4 **)((int)this + 0x58) = puVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x58);
    iVar1 = *(int *)((int)this + 0x58) + param_4 * param_1;
    *(uint *)((int)this + 0x54) = uVar3;
    *(int *)((int)this + 0x60) = iVar1;
    if (param_1 == param_2) {
      *(uint *)((int)this + 100) = ((param_3 >> 1) + 7 & 0xfffffff8) + iVar1;
      return 1;
    }
    *(uint *)((int)this + 100) = (param_4 >> 1) * param_2 + iVar1;
  }
  return 1;
}


