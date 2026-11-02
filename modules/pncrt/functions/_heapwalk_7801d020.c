/* Module: pncrt.dll
   Function: _heapwalk
   Address: 7801d020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _heapwalk(_HEAPINFO *_EntryInfo)

{
  undefined1 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  ulong *puVar5;
  int *piVar6;
  _PROCESS_HEAP_ENTRY local_44;
  int local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x1d020  277  _heapwalk */
  local_8 = 0xffffffff;
  puStack_c = &DAT_78037a10;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffac;
  local_24 = -2;
  local_44.wFlags = 0;
  local_44.iRegionIndex = '\0';
  local_44.lpData = _EntryInfo->_pentry;
  if (local_44.lpData != (int *)0x0) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffac;
    if (_EntryInfo->_useflag != 1) goto LAB_7801d0e8;
    if (DAT_780421e4 == (code *)0x0) {
      ExceptionList = &local_14;
      iVar4 = HeapValidate(DAT_78042734,0,local_44.lpData);
    }
    else {
      ExceptionList = &local_14;
      local_1c = &stack0xffffffac;
      iVar4 = (*DAT_780421e4)();
    }
    if (iVar4 == 0) {
      ExceptionList = local_14;
      return -4;
    }
    local_44.wFlags = 4;
    puVar1 = local_1c;
    goto LAB_7801d0e8;
  }
  ExceptionList = &local_14;
  local_1c = &stack0xffffffac;
  BVar2 = HeapWalk(DAT_78042734,&local_44);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 != 0x78) {
      ExceptionList = local_14;
      return -3;
    }
  }
  else {
    do {
      puVar1 = local_1c;
      if ((local_44.wFlags & 3) == 0) {
        _EntryInfo->_pentry = local_44.lpData;
        _EntryInfo->_size = local_44.cbData;
        if ((local_44.wFlags & 4) != 0) {
          _EntryInfo->_useflag = 1;
          ExceptionList = local_14;
          return local_24;
        }
        _EntryInfo->_useflag = 0;
        ExceptionList = local_14;
        return local_24;
      }
LAB_7801d0e8:
      local_1c = puVar1;
      local_8 = 0;
      local_20 = 0;
      BVar2 = HeapWalk(DAT_78042734,&local_44);
      if (BVar2 == 0) {
        local_20 = 1;
      }
      local_8 = 0xffffffff;
    } while (BVar2 != 0);
    DVar3 = GetLastError();
    if (DVar3 == 0x103) {
      ExceptionList = local_14;
      return -5;
    }
    if (DVar3 != 0x78) {
      ExceptionList = local_14;
      return -4;
    }
  }
  puVar5 = __doserrno();
  *puVar5 = 0x78;
  piVar6 = _errno();
  *piVar6 = 0x28;
  ExceptionList = local_14;
  return -5;
}


