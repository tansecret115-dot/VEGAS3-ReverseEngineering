/* Module: mpegin.dll
   Function: FUN_1001341f
   Address: 1001341f
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_1001341f(int param_1,int param_2)

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
  puStack_c = &DAT_10016620;
  puStack_10 = &LAB_10011054;
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
      if (DAT_1001da94 == 3) {
        if (puVar2 <= DAT_1001da8c) {
          FUN_10010ee5(9);
          local_8 = 0;
          local_24 = FUN_10010377(puVar2);
          local_8 = 0xffffffff;
          FUN_100134b8();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1001350c;
LAB_100134fb:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10013507:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1001da94 != 2) || (DAT_1001b33c < puVar3)) goto LAB_10013507;
        FUN_10010ee5(9);
        local_8 = 1;
        local_24 = FUN_10010b24((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10013541();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100134fb;
      }
LAB_1001350c:
      local_24 = HeapAlloc(DAT_1001da90,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1001c400 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1001112c(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}


