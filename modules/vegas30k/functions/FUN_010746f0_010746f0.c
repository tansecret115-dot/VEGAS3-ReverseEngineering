/* Module: vegas30k.dll
   Function: FUN_010746f0
   Address: 010746f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_010746f0(int param_1,void *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *_Memory;
  
  if (((*(uint *)((int)param_2 + 0x218) & 0x80000000) != 0) &&
     (puVar2 = (undefined1 *)FUN_01074e50(param_1,param_2), _Memory = param_2, (int)puVar2 < 0)) {
LAB_0107480e:
    free(_Memory);
    *(undefined4 *)((int)param_2 + 0x34c) = 0;
    return puVar2;
  }
  _Memory = *(undefined4 **)((int)param_2 + 0x34c);
  if (_Memory == (undefined4 *)0x0) {
    _Memory = calloc(1,0x324);
    if (_Memory == (undefined4 *)0x0) {
      puVar2 = (undefined1 *)0x8007000e;
      goto LAB_0107480e;
    }
    *_Memory = param_2;
    *(undefined4 **)((int)param_2 + 0x34c) = _Memory;
  }
  if (*(int *)((int)param_2 + 0x21c) == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(_Memory + 0xe) = 1;
    *(undefined1 *)((int)_Memory + 0x5e) = 1;
  }
  if ((*(uint *)((int)param_2 + 8) & 0x10) == 0) {
    *(undefined2 *)(_Memory + 1) = 1;
    if (*(int *)((int)param_2 + 0x334) != 0) {
      puVar2 = &DAT_80070057;
      goto LAB_0107480e;
    }
    uVar1 = *(uint *)((int)param_2 + 0x330);
    _Memory[3] = uVar1;
    _Memory[5] = (uint)((uVar1 & 0x7ff) != 0) + (uVar1 >> 0xb);
  }
  else {
    FUN_010745d0(param_1,_Memory);
    if (*(int *)((int)param_2 + 0x21c) == 0) {
      _Memory[4] = 1;
    }
    else {
      _Memory[4] = *(int *)(*(int *)(*(int *)((int)param_2 + 0x21c) + 0x34c) + 0x10) + 1;
    }
    if (*(int *)(param_1 + 4) < (int)_Memory[4]) {
      *(undefined4 *)(param_1 + 4) = _Memory[4];
    }
    FUN_01072d80(param_1,param_2);
  }
  *(uint *)((int)param_2 + 0x218) = *(uint *)((int)param_2 + 0x218) | 0x80000000;
  return (undefined1 *)0x0;
}


