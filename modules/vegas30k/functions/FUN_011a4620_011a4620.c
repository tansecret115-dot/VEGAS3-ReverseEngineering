/* Module: vegas30k.dll
   Function: FUN_011a4620
   Address: 011a4620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a4620(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_3;
  iVar2 = _SfList_CreateExZ_32(param_3,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < iVar2) {
    _Memory = calloc(1,0xc);
    if (_Memory == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    *_Memory = 1;
    _Memory[1] = DAT_011eae68;
    puVar3 = calloc(1,DAT_011eae68 * 4);
    _Memory[2] = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      free(_Memory);
      return -0x7ff8fff2;
    }
    uVar4 = *(uint *)(param_1 + 8) & 0xf0000;
    if (uVar4 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      if (_Memory[1] != 0) {
        do {
          if (param_2 <= uVar4) {
            uVar4 = 0;
          }
          uVar5 = uVar5 + 1;
          *(uint *)(_Memory[2] + -4 + uVar5 * 4) = uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar5 < (uint)_Memory[1]);
      }
    }
    else if (uVar4 == 0x10000) {
      *puVar3 = 0;
      uVar4 = 1;
      if (1 < (uint)_Memory[1]) {
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)(_Memory[2] + -4 + uVar4 * 4) = 0x80000000;
        } while (uVar4 < (uint)_Memory[1]);
      }
    }
    param_3 = _Memory;
    iVar2 = _SfList_InsertList_16(*puVar1,0xffffffff,&param_3,1);
  }
  return iVar2;
}


