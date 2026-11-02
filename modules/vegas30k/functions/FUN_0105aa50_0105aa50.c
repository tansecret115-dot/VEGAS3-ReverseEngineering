/* Module: vegas30k.dll
   Function: FUN_0105aa50
   Address: 0105aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0105aa50(undefined4 *param_1,uchar *param_2)

{
  short *_Memory;
  uint uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_FUN_011e1cc0;
  _mbscpy((uchar *)(param_1 + 1),param_2);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4f] = 0;
  _Memory = (short *)_SfGetFileWfx_12(param_2,param_1 + 0x48,param_1 + 0x4a);
  if (_Memory != (short *)0x0) {
    if ((*_Memory == 3) || (*_Memory == 1)) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = (ushort)_Memory[8] + 0x12;
      if (0x11 < uVar1) {
        uVar1 = 0x12;
      }
    }
    psVar3 = _Memory;
    puVar4 = param_1 + 0x42;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)puVar4 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined2 *)(param_1 + 0x46) = 0;
    free(_Memory);
  }
  return param_1;
}


