/* Module: vegas30k.dll
   Function: SfCdiInitFileStream
   Address: 01084760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiInitFileStream(void *,char *,unsigned __int64,unsigned __int64,unsigned long)
    */

long SfCdiInitFileStream(void *param_1,char *param_2,__uint64 param_3,__uint64 param_4,ulong param_5
                        )

{
  uint uVar1;
  __uint64 _Var2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  HANDLE hFile;
  DWORD DVar6;
  BOOL BVar7;
  void *pvVar8;
  uint uVar9;
  undefined1 *puVar10;
  DWORD local_8;
  undefined4 *local_4;
  
                    /* 0x84760  308  ?SfCdiInitFileStream@@YGJPAXPAD_K2K@Z */
  pvVar3 = param_1;
  if (param_1 == (void *)0xffffffff) {
    puVar10 = &DAT_80070057;
  }
  else {
    local_4 = param_1;
    if ((*(uint *)((int)param_1 + 4) & 1) == 0) {
      hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      *(HANDLE *)pvVar3 = hFile;
      if (hFile != (HANDLE)0xffffffff) {
        *(__uint64 *)((int)pvVar3 + 0x20) = param_3;
        SetFilePointer(hFile,(LONG)(char *)param_3,(PLONG)0x0,0);
        if (param_4 == 0xffffffffffffffff) {
          DVar6 = GetFileSize(*(HANDLE *)pvVar3,(LPDWORD)&param_2);
          *(DWORD *)((int)pvVar3 + 0x28) = DVar6;
          *(undefined4 *)((int)pvVar3 + 0x38) = 0;
          *(char **)((int)pvVar3 + 0x2c) = param_2;
          *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
          return 0;
        }
        *(undefined4 *)((int)pvVar3 + 0x28) = (undefined4)param_4;
        *(undefined4 *)((int)pvVar3 + 0x38) = 0;
        *(void **)((int)pvVar3 + 0x2c) = param_4._4_4_;
        *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
        return 0;
      }
    }
    else {
      param_1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x60000080,(HANDLE)0x0
                           );
      iVar5 = param_3._4_4_;
      pcVar4 = (char *)param_3;
      *(void **)pvVar3 = param_1;
      if (param_1 != (HANDLE)0xffffffff) {
        if (param_3 == 0) {
          *(undefined4 *)((int)pvVar3 + 0x20) = 0;
          param_2 = (char *)0x0;
          *(undefined4 *)((int)pvVar3 + 0x24) = 0;
          _Var2 = param_4;
        }
        else {
          *(__uint64 *)((int)pvVar3 + 0x20) = param_3;
          param_2 = (char *)__aullrem(param_3,*(undefined4 *)((int)pvVar3 + 8),0);
          _Var2 = param_4;
          if (param_2 != (char *)0x0) {
            *(int *)((int)pvVar3 + 0x20) = (int)pcVar4 - (int)param_2;
            *(uint *)((int)pvVar3 + 0x24) = iVar5 - (uint)(pcVar4 < param_2);
          }
        }
        param_4._4_4_ = (void *)(_Var2 >> 0x20);
        param_4._0_4_ = (undefined4)_Var2;
        *(undefined4 *)((int)pvVar3 + 0x18) = 0;
        *(ulong *)((int)pvVar3 + 0x10) = param_5;
        *(char **)((int)pvVar3 + 0x30) = param_2 + *(int *)((int)pvVar3 + 0x40);
        *(undefined4 *)((int)pvVar3 + 0x38) = 0;
        *(undefined4 *)((int)pvVar3 + 0x34) = 0;
        *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
        if (_Var2 == 0xffffffffffffffff) {
          param_4 = _Var2;
          DVar6 = GetFileSize(param_1,(LPDWORD)&param_1);
          *(DWORD *)((int)pvVar3 + 0x28) = DVar6;
          pvVar8 = param_1;
          _Var2 = param_4;
        }
        else {
          *(undefined4 *)((int)pvVar3 + 0x28) = (undefined4)param_4;
          pvVar8 = param_4._4_4_;
        }
        uVar9 = 0;
        *(void **)((int)pvVar3 + 0x2c) = pvVar8;
        if (*(int *)((int)pvVar3 + 0x10) != 0) {
          do {
            param_4 = _Var2;
            ResetEvent(*(HANDLE *)((int)pvVar3 + uVar9 * 0x1c + 0x58));
            *(undefined4 *)((int)pvVar3 + uVar9 * 0x1c + 0x50) = *(undefined4 *)((int)pvVar3 + 0x20)
            ;
            *(undefined4 *)((int)pvVar3 + (uVar9 + 3) * 0x1c) = *(undefined4 *)((int)pvVar3 + 0x24);
            BVar7 = ReadFile(*(HANDLE *)pvVar3,*(LPVOID *)((int)pvVar3 + uVar9 * 0x1c + 0x40),
                             *(DWORD *)((int)pvVar3 + 0xc),(LPDWORD)0x0,
                             (LPOVERLAPPED)((int)pvVar3 + uVar9 * 0x1c + 0x48));
            if (BVar7 == 0) {
              DVar6 = GetLastError();
              if ((DVar6 != 0x3e5) && (DVar6 != 0x26)) {
                puVar10 = (undefined1 *)0x8004e008;
                goto LAB_010849c6;
              }
            }
            _Var2 = param_4;
            if (uVar9 == 0) {
              WaitForSingleObject(*(HANDLE *)((int)pvVar3 + 0x58),0xffffffff);
              GetOverlappedResult(*(HANDLE *)pvVar3,(LPOVERLAPPED)((int)pvVar3 + 0x48),&local_8,0);
              *(DWORD *)((int)pvVar3 + 0x44) = local_8 - (int)param_2;
              *(DWORD *)((int)pvVar3 + 0x18) = local_8 - (int)param_2;
              *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
              _Var2 = param_4;
            }
            uVar1 = *(uint *)((int)pvVar3 + 0x20);
            *(uint *)((int)pvVar3 + 0x20) = uVar1 + *(uint *)((int)pvVar3 + 0xc);
            uVar9 = uVar9 + 1;
            *(uint *)((int)pvVar3 + 0x24) =
                 *(int *)((int)pvVar3 + 0x24) + (uint)CARRY4(uVar1,*(uint *)((int)pvVar3 + 0xc));
          } while (uVar9 < *(uint *)((int)pvVar3 + 0x10));
        }
        return 0;
      }
    }
    puVar10 = (undefined1 *)0x8004e006;
  }
LAB_010849c6:
  if ((HANDLE)*local_4 != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)*local_4);
  }
  return (long)puVar10;
}


