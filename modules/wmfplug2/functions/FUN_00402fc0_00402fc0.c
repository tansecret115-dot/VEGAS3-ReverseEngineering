/* Module: wmfplug2.dll
   Function: FUN_00402fc0
   Address: 00402fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00402fc0(int param_1)

{
  LPCWSTR lpWideCharStr;
  int *piVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uStack_120;
  DWORD local_11c;
  undefined1 local_118 [8];
  undefined1 auStack_110 [12];
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    lpWideCharStr = (LPCWSTR)(param_1 + 0x34);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x104) {
      local_104[0] = '\0';
    }
    local_1 = 0;
    hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      ((LPFILETIME)(param_1 + 0x10))->dwLowDateTime = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,(LPFILETIME)(param_1 + 0x10));
      DVar2 = GetFileSize(hFile,&local_11c);
      *(DWORD *)(param_1 + 0x28) = DVar2;
      *(DWORD *)(param_1 + 0x2c) = local_11c;
      CloseHandle(hFile);
      piVar4 = *(int **)(param_1 + 0x240);
      puVar5 = local_118;
      iVar3 = (**(code **)(*piVar4 + 0x38))();
      if (iVar3 < 0) {
        return iVar3;
      }
      piVar1 = (int *)(param_1 + 0x244);
      *(undefined4 *)(param_1 + 0x18) = uStack_120;
      if ((*piVar1 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x240))
                            (*(undefined4 **)(param_1 + 0x240),&DAT_0047b600,piVar1), iVar3 < 0)) {
        return iVar3;
      }
      local_11c = 8;
      iVar3 = (**(code **)(*(int *)*piVar1 + 0x14))
                        ((int *)*piVar1,&stack0xfffffed8,L"Duration",auStack_110,local_118,
                         &local_11c);
      *(int **)(param_1 + 0x20) = piVar4;
      *(undefined1 **)(param_1 + 0x24) = puVar5;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return iVar3;
    }
  }
  return -0x7ffb1ff9;
}


