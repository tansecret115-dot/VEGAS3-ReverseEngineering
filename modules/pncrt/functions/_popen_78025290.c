/* Module: pncrt.dll
   Function: _popen
   Address: 78025290
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _popen(char *_Command,char *_Mode)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  FILE *pFVar4;
  uint uVar5;
  int iVar6;
  HANDLE hSourceProcessHandle;
  BOOL BVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  uint local_30;
  uint local_2c;
  HANDLE local_28;
  HANDLE local_24;
  intptr_t local_20;
  int *local_1c;
  FILE *local_18;
  undefined4 local_14;
  uint local_10 [4];
  
                    /* 0x25290  411  _popen */
  uVar5 = 0;
  if (((_Command != (char *)0x0) && (_Mode != (char *)0x0)) && ((*_Mode == 'w' || (*_Mode == 'r'))))
  {
    if (_Mode[1] == 't') {
      uVar5 = 0x4000;
    }
    else if (_Mode[1] == 'b') {
      uVar5 = 0x8000;
    }
    iVar6 = _pipe((int *)local_10,0x400,uVar5 | 0x80);
    if (iVar6 != -1) {
      bVar11 = *_Mode != 'w';
      local_2c = (uint)bVar11;
      local_30 = (uint)!bVar11;
      uVar5 = (uint)bVar11;
      local_10[3] = 1;
      local_10[2] = 1;
      hSourceProcessHandle = GetCurrentProcess();
      FUN_78011b00(uVar5);
      iVar6 = uVar5 * 0x24;
      if ((*(HANDLE *)(iVar6 + __pioinfo) != (HANDLE)0xffffffff) &&
         (BVar7 = DuplicateHandle(hSourceProcessHandle,*(HANDLE *)(iVar6 + __pioinfo),
                                  hSourceProcessHandle,&local_24,0,0,2), BVar7 != 0)) {
        uVar2 = *(undefined1 *)(iVar6 + 4 + __pioinfo);
        BVar7 = DuplicateHandle(hSourceProcessHandle,
                                *(HANDLE *)
                                 ((&__pioinfo)[(int)local_10[local_2c] >> 5] +
                                 (local_10[local_2c] & 0x1f) * 0x24),hSourceProcessHandle,&local_28,
                                0,1,2);
        if (BVar7 != 0) {
          CloseHandle(*(HANDLE *)(iVar6 + __pioinfo));
          FUN_78011960(uVar5);
          FUN_780118b0(uVar5,local_28);
          *(undefined1 *)(iVar6 + 4 + __pioinfo) =
               *(undefined1 *)
                ((&__pioinfo)[(int)local_10[local_2c] >> 5] + 4 + (local_10[local_2c] & 0x1f) * 0x24
                );
          _close(local_10[local_2c]);
          local_10[local_2c + 2] = 0;
          local_18 = _fdopen(local_10[local_30],_Mode);
          if (local_18 != (FILE *)0x0) {
            _lock(0x10);
            local_1c = FUN_78026430(0);
            if (local_1c != (int *)0x0) {
              puVar1 = (undefined4 *)
                       ((&__pioinfo)[(int)local_10[local_30] >> 5] +
                       (local_10[local_30] & 0x1f) * 0x24);
              local_14 = *puVar1;
              *puVar1 = 0xffffffff;
              uVar8 = local_10[local_30] & 0x1f;
              uVar3 = *(undefined1 *)((&__pioinfo)[(int)local_10[local_30] >> 5] + 4 + uVar8 * 0x24)
              ;
              *(undefined1 *)((&__pioinfo)[(int)local_10[local_30] >> 5] + 4 + uVar8 * 0x24) = 0;
              pcVar9 = getenv("COMSPEC");
              if ((pcVar9 == (char *)0x0) ||
                 ((local_20 = _spawnl(1,pcVar9,pcVar9,&DAT_78037a00,_Command,0), local_20 == -1 &&
                  ((piVar10 = _errno(), *piVar10 == 2 || (piVar10 = _errno(), *piVar10 == 0xd))))))
              {
                pcVar9 = "command.com";
                if ((_osver & 0x8000) == 0) {
                  pcVar9 = "cmd.exe";
                }
                local_20 = _spawnlp(1,pcVar9,pcVar9,&DAT_78037a00,_Command,0);
              }
              *(undefined4 *)
               ((&__pioinfo)[(int)local_10[local_30] >> 5] + (local_10[local_30] & 0x1f) * 0x24) =
                   local_14;
              *(undefined1 *)
               ((&__pioinfo)[(int)local_10[local_30] >> 5] + 4 + (local_10[local_30] & 0x1f) * 0x24)
                   = uVar3;
              if (local_20 != -1) {
                DuplicateHandle(hSourceProcessHandle,local_24,hSourceProcessHandle,&local_28,0,1,3);
                CloseHandle(*(HANDLE *)(iVar6 + __pioinfo));
                FUN_78011960(uVar5);
                FUN_780118b0(uVar5,local_28);
                *(undefined1 *)(iVar6 + 4 + __pioinfo) = uVar2;
                FUN_78011b70(uVar5);
                pFVar4 = local_18;
                local_1c[1] = local_20;
                *local_1c = (int)local_18;
                _unlock(0x10);
                return pFVar4;
              }
              *local_1c = 0;
            }
            fclose(local_18);
            local_10[local_30 + 2] = 0;
            _unlock(0x10);
          }
          DuplicateHandle(hSourceProcessHandle,local_24,hSourceProcessHandle,&local_28,0,1,2);
          CloseHandle(*(HANDLE *)(iVar6 + __pioinfo));
          FUN_78011960(uVar5);
          FUN_780118b0(uVar5,local_28);
          *(undefined1 *)(iVar6 + 4 + __pioinfo) = uVar2;
          FUN_78011b70(uVar5);
        }
        CloseHandle(local_24);
      }
      if (local_10[local_2c + 2] != 0) {
        _close(local_10[local_2c]);
      }
      if (local_10[local_30 + 2] != 0) {
        _close(local_10[local_30]);
      }
    }
  }
  return (FILE *)0x0;
}


