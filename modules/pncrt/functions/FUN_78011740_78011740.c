/* Module: pncrt.dll
   Function: FUN_78011740
   Address: 78011740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_78011740(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint local_8;
  int local_4;
  
  local_8 = 0xffffffff;
  _lock(0x12);
  local_4 = 0;
  iVar2 = 0;
  piVar3 = &__pioinfo;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = malloc(0x480);
      if (puVar1 != (undefined4 *)0x0) {
        DAT_78042840 = DAT_78042840 + 0x20;
        (&__pioinfo)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar1 + 9;
          } while (puVar1 < (undefined4 *)((&__pioinfo)[local_4] + 0x480));
        }
        local_8 = local_4 << 5;
        FUN_78011b00(local_8);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            _lock(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            _unlock(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            local_8 = ((int)puVar1 - *piVar3) / 0x24 + iVar2;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (undefined4 *)(*piVar3 + 0x480));
    }
    if (local_8 != 0xffffffff) break;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
    iVar2 = iVar2 + 0x20;
  } while ((int)piVar3 < 0x78042840);
  _unlock(0x12);
  return local_8;
}


