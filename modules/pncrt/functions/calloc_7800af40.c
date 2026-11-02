/* Module: pncrt.dll
   Function: calloc
   Address: 7800af40
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl calloc(size_t _Count,size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint dwBytes;
  void *pvVar5;
  int *piVar6;
  
                    /* 0xaf40  586  calloc */
  dwBytes = _Size * _Count;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    pvVar5 = (void *)0x0;
    if (DAT_780421dc != (code *)0x0) {
      pvVar5 = (void *)(*DAT_780421dc)(_Count,dwBytes);
    }
    if (pvVar5 != (void *)0x0) {
      return pvVar5;
    }
    pvVar2 = (LPVOID)0x0;
    if (dwBytes < 0xffffffe1) {
      piVar1 = (int *)0x0;
      if (DAT_7803f3ec < dwBytes) {
LAB_7800afce:
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
      }
      else {
        _lock(9);
        piVar1 = FUN_7800b3b0(dwBytes >> 4);
        _unlock(9);
        if (piVar1 != (int *)0x0) {
          piVar6 = piVar1;
          for (uVar4 = dwBytes >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          for (uVar4 = dwBytes & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)piVar6 = 0;
            piVar6 = (int *)((int)piVar6 + 1);
          }
          goto LAB_7800afce;
        }
      }
      pvVar2 = HeapAlloc(DAT_78042734,8,dwBytes);
    }
    if ((pvVar2 != (LPVOID)0x0) || (DAT_780421d0 == 0)) {
      return pvVar2;
    }
    iVar3 = _callnewh(dwBytes);
    if (iVar3 == 0) {
      return (void *)0x0;
    }
  } while( true );
}


