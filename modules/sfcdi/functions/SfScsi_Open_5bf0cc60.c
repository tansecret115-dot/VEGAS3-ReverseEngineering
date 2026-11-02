/* Module: sfcdi.dll
   Function: SfScsi_Open
   Address: 5bf0cc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct HSFSCSIPORT__ * __stdcall SfScsi_Open(unsigned int,unsigned int,unsigned int,unsigned long
   *) */

HSFSCSIPORT__ * SfScsi_Open(uint param_1,uint param_2,uint param_3,ulong *param_4)

{
  uint uVar1;
  HGLOBAL pvVar2;
  HSFSCSIPORT__ *pMem;
  ulong uVar3;
  
                    /* 0xcc60  120  ?SfScsi_Open@@YGPAUHSFSCSIPORT__@@IIIPAK@Z */
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0xffffffff;
  }
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 <= param_1) {
    return (HSFSCSIPORT__ *)0x0;
  }
  pvVar2 = GlobalAlloc(0x42,0x8c);
  pMem = GlobalLock(pvVar2);
  if (pMem == (HSFSCSIPORT__ *)0x0) {
    return (HSFSCSIPORT__ *)0x0;
  }
  *(uint *)(pMem + 0x10) = param_3;
  uVar3 = FUN_5bf0bff0((uint *)pMem,param_1,param_2);
  if ((int)uVar3 < 0) {
    if (param_4 != (ulong *)0x0) {
      *param_4 = uVar3;
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    return (HSFSCSIPORT__ *)0x0;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  return pMem;
}


