/* Module: vegas30.exe
   Function: FUN_0058b4c0
   Address: 0058b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0058b512) */

undefined4 FUN_0058b4c0(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  longlong lVar2;
  LONG local_4;
  
  pvVar1 = CreateFileA((LPCSTR)(param_1 + 8),0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                       (HANDLE)0x0);
  *(HANDLE *)(param_1 + 0x124) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    lVar2 = FUN_0058a580(param_1);
    if (CONCAT44(DAT_006486b4,DAT_006486b0) < lVar2) {
      FUN_0058af60(param_1,param_2);
    }
    else {
      FUN_0058b230(param_1,param_2);
    }
    local_4 = (LONG)((ulonglong)(lVar2 + 0x200) >> 0x20);
    SetFilePointer(*(HANDLE *)(param_1 + 0x124),(LONG)(lVar2 + 0x200),&local_4,0);
    SetEndOfFile(*(HANDLE *)(param_1 + 0x124));
    CloseHandle(*(HANDLE *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    return 0;
  }
  return 0x8004e007;
}


