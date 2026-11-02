/* Module: vegas30k.dll
   Function: FUN_0114fa90
   Address: 0114fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114fa90(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *_Dst;
  undefined4 *puVar4;
  
  if (param_2 <= param_5) {
    param_5 = param_2;
  }
  uVar1 = param_3 + param_4;
  if ((((param_4 != 0) && (param_2 != 0)) && (param_4 < param_2)) &&
     ((param_5 < param_3 || (uVar1 < param_5)))) {
    FUN_01002100();
    _Dst = (undefined4 *)(param_3 * 0x10 + param_1);
    puVar3 = _Dst;
    puVar4 = (undefined4 *)&stack0xffffffe8;
    for (iVar2 = (param_4 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (param_5 < param_3) {
      memmove((void *)((param_4 + param_5) * 0x10 + param_1),(void *)(param_5 * 0x10 + param_1),
              (param_5 * 0xfffffff + param_3) * 0x10);
    }
    else if (uVar1 < param_5) {
      memmove(_Dst,(void *)(uVar1 * 0x10 + param_1),(param_5 - uVar1) * 0x10);
      param_5 = (param_5 - uVar1) + param_3;
    }
    puVar3 = (undefined4 *)&stack0xffffffe8;
    puVar4 = (undefined4 *)(param_5 * 0x10 + param_1);
    for (iVar2 = (param_4 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}


