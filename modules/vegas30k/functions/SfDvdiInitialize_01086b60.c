/* Module: vegas30k.dll
   Function: SfDvdiInitialize
   Address: 01086b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiInitialize(void * *,struct tagDIR_TREE *) */

long SfDvdiInitialize(void **param_1,tagDIR_TREE *param_2)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  long lVar3;
  
                    /* 0x86b60  373  ?SfDvdiInitialize@@YGJPAPAXPAUtagDIR_TREE@@@Z */
  *param_1 = (void *)0x0;
  hMem = GlobalAlloc(0x42,0x54);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 == (LPVOID)0x0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = _SfList_CreateExZ_32((int)pvVar2 + 0x48,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    if (-1 < lVar3) {
      lVar3 = _SfList_CreateExZ_32((int)pvVar2 + 0x4c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      if (-1 < lVar3) {
        *(tagDIR_TREE **)((int)pvVar2 + 0x50) = param_2;
        iVar1 = *(int *)(param_2 + 0x4c);
        *(undefined4 *)(iVar1 + 0x858) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 3;
        *param_1 = pvVar2;
        return lVar3;
      }
    }
  }
  return lVar3;
}


