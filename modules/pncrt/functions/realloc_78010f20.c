/* Module: pncrt.dll
   Function: realloc
   Address: 78010f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_8;
  int local_4;
  
                    /* 0x10f20  689  realloc */
  if (_Memory == (void *)0x0) {
    pvVar1 = malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    free(_Memory);
    return (void *)0x0;
  }
  uVar4 = _NewSize;
  if (_NewSize < 0xffffffe1) {
    if (_NewSize == 0) {
      _NewSize = 0x10;
      uVar4 = _NewSize;
    }
    else {
      _NewSize = _NewSize + 0xf & 0xfffffff0;
      uVar4 = _NewSize;
    }
  }
  do {
    piVar6 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      _lock(9);
      pbVar2 = (byte *)FUN_7800b2f0(_Memory,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        _unlock(9);
        if (DAT_780421e0 != (code *)0x0) {
          piVar6 = (int *)(*DAT_780421e0)(_Memory,uVar4);
        }
        if (piVar6 != (int *)0x0) {
          return piVar6;
        }
        piVar6 = HeapReAlloc(DAT_78042734,0,_Memory,uVar4);
      }
      else {
        if (uVar4 < DAT_7803f3ec) {
          iVar3 = FUN_7800b770(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar6 = _Memory;
          if (iVar3 != 0) goto LAB_78011025;
          piVar6 = FUN_7800b3b0(uVar4 >> 4);
          if (piVar6 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar7 = _Memory;
            piVar8 = piVar6;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar8 = (char)*piVar7;
              piVar7 = (int *)((int)piVar7 + 1);
              piVar8 = (int *)((int)piVar8 + 1);
            }
            FUN_7800b350(local_4,(int)local_8,pbVar2);
            uVar4 = _NewSize;
            goto LAB_78011025;
          }
LAB_78011029:
          piVar6 = HeapAlloc(DAT_78042734,0,uVar4);
          if (piVar6 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar7 = _Memory;
            piVar8 = piVar6;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar8 = (char)*piVar7;
              piVar7 = (int *)((int)piVar7 + 1);
              piVar8 = (int *)((int)piVar8 + 1);
            }
            FUN_7800b350(local_4,(int)local_8,pbVar2);
            uVar4 = _NewSize;
          }
        }
        else {
LAB_78011025:
          if (piVar6 == (int *)0x0) goto LAB_78011029;
        }
        _unlock(9);
      }
    }
    if ((piVar6 != (int *)0x0) || (DAT_780421d0 == 0)) {
      return piVar6;
    }
    iVar3 = _callnewh(uVar4);
    if (iVar3 == 0) {
      return (void *)0x0;
    }
  } while( true );
}


