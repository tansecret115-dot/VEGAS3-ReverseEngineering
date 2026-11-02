/* Module: sfs4rw.dll
   Function: FUN_0043c7f0
   Address: 0043c7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0043c7f0(void *this,LONG param_1,LONG param_2,int *param_3)

{
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD local_80c;
  undefined4 local_808;
  LONG local_804;
  WCHAR local_800 [1024];
  
  local_804 = param_2;
  local_808 = 0;
  DVar2 = SetFilePointer(*(HANDLE *)((int)this + 8),param_1,&local_804,0);
  if (((DVar2 != 0xffffffff) &&
      (BVar3 = ReadFile(*(HANDLE *)((int)this + 8),param_3,0x54,&local_80c,(LPOVERLAPPED)0x0),
      BVar3 != 0)) && (*param_3 == 0xb014d55)) {
    local_808 = 1;
    if ((0 < param_3[0xd]) &&
       (BVar3 = ReadFile(*(HANDLE *)((int)this + 8),local_800,param_3[0xd] * 2,&local_80c,
                         (LPOVERLAPPED)0x0), BVar3 != 0)) {
      local_800[param_3[0xd]] = L'\0';
      piVar1 = param_3 + 0x15;
      if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_800,-1,(LPSTR)piVar1,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (piVar1 != (int *)0x0) {
        *(CHAR *)piVar1 = '\0';
      }
      *(undefined1 *)((int)param_3 + 0x157) = 0;
      *(undefined1 *)(param_3[0xd] + 0x54 + (int)param_3) = 0;
      if (0 < param_3[0xf]) {
        BVar3 = ReadFile(*(HANDLE *)((int)this + 8),local_800,param_3[0xf] * 2,&local_80c,
                         (LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          return local_808;
        }
        local_800[param_3[0xf]] = L'\0';
        piVar1 = param_3 + 0x56;
        if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
          WideCharToMultiByte(0,0,local_800,-1,(LPSTR)piVar1,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (piVar1 != (int *)0x0) {
          *(CHAR *)piVar1 = '\0';
        }
        *(undefined1 *)((int)param_3 + 0x25b) = 0;
        *(undefined1 *)((int)param_3 + param_3[0xf] + 0x158) = 0;
      }
      if ((0 < param_3[0xf]) &&
         (BVar3 = ReadFile(*(HANDLE *)((int)this + 8),local_800,param_3[0xe] << 1,&local_80c,
                           (LPOVERLAPPED)0x0), BVar3 != 0)) {
        local_800[param_3[0xe]] = L'\0';
        piVar1 = param_3 + 0x97;
        if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
          WideCharToMultiByte(0,0,local_800,-1,(LPSTR)piVar1,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (piVar1 != (int *)0x0) {
          *(CHAR *)piVar1 = '\0';
        }
        *(undefined1 *)((int)param_3 + 0x35f) = 0;
        *(undefined1 *)(param_3[0xe] + 0x25c + (int)param_3) = 0;
      }
    }
  }
  return local_808;
}


