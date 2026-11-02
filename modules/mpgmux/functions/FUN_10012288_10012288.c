/* Module: mpgmux.dll
   Function: FUN_10012288
   Address: 10012288
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_10012288(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10015658;
  puStack_10 = &LAB_1000e8fc;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_1001c684 == 3) {
        if (puVar2 <= DAT_1001c67c) {
          FUN_1000e78d(9);
          local_8 = 0;
          local_24 = FUN_1000dc1f(puVar2);
          local_8 = 0xffffffff;
          FUN_10012321();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10012375;
LAB_10012364:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10012370:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1001c684 != 2) || (DAT_10019b04 < puVar3)) goto LAB_10012370;
        FUN_1000e78d(9);
        local_8 = 1;
        local_24 = FUN_1000e3cc((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100123aa();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10012364;
      }
LAB_10012375:
      local_24 = HeapAlloc(DAT_1001c680,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1001aff8 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000e9d4(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}


