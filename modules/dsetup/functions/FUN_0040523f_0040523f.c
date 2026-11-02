/* Module: dsetup.dll
   Function: FUN_0040523f
   Address: 0040523f
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_0040523f(int param_1,int param_2)

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
  puStack_c = &DAT_004016a8;
  puStack_10 = &LAB_0040514c;
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
      if (DAT_0040b048 == 3) {
        if (puVar2 <= DAT_0040b040) {
          FUN_00404fde(9);
          local_8 = 0;
          local_24 = FUN_00404470(puVar2);
          local_8 = 0xffffffff;
          FUN_004052d8();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_0040532c;
LAB_0040531b:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_00405327:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_0040b048 != 2) || (DAT_0040a354 < puVar3)) goto LAB_00405327;
        FUN_00404fde(9);
        local_8 = 1;
        local_24 = FUN_00404c1d((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_00405361();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_0040531b;
      }
LAB_0040532c:
      local_24 = HeapAlloc(DAT_0040b044,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_0040ac60 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_00405224(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}


