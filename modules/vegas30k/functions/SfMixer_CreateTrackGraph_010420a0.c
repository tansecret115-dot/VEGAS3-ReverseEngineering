/* Module: vegas30k.dll
   Function: SfMixer_CreateTrackGraph
   Address: 010420a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMixer_CreateTrackGraph(struct ISfTrkGraph * *) */

long SfMixer_CreateTrackGraph(ISfTrkGraph **param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  
                    /* 0x420a0  422  ?SfMixer_CreateTrackGraph@@YGJPAPAUISfTrkGraph@@@Z */
  iVar3 = -0x7ff8fff2;
  pvVar1 = GlobalAlloc(0x40,0xb0);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (undefined4 *)FUN_01040ce0();
    if (pMem != (undefined4 *)0x0) {
      iVar3 = (**(code **)*pMem)(pMem,&DAT_011d9d70,param_1);
      if (iVar3 < 0) {
        FUN_01040d60();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        return iVar3;
      }
    }
  }
  return iVar3;
}


