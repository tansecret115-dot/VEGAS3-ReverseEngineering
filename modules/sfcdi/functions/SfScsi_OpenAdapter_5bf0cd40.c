/* Module: sfcdi.dll
   Function: SfScsi_OpenAdapter
   Address: 5bf0cd40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct HSFSCSIADAPTER__ * __stdcall SfScsi_OpenAdapter(unsigned int,unsigned int,unsigned long *)
    */

HSFSCSIADAPTER__ * SfScsi_OpenAdapter(uint param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  HGLOBAL pvVar2;
  HSFSCSIADAPTER__ *pMem;
  ulong uVar3;
  
                    /* 0xcd40  121  ?SfScsi_OpenAdapter@@YGPAUHSFSCSIADAPTER__@@IIPAK@Z */
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0xffffffff;
  }
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 <= param_1) {
    return (HSFSCSIADAPTER__ *)0x0;
  }
  pvVar2 = GlobalAlloc(0x42,0x8c);
  pMem = GlobalLock(pvVar2);
  if (pMem == (HSFSCSIADAPTER__ *)0x0) {
    return (HSFSCSIADAPTER__ *)0x0;
  }
  *(uint *)(pMem + 0x10) = param_2;
  uVar3 = FUN_5bf0bff0((uint *)pMem,param_1,0xffffffff);
  if ((int)uVar3 < 0) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar3;
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    return (HSFSCSIADAPTER__ *)0x0;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  return pMem;
}


