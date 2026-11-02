/* Module: vidcap30.exe
   Function: FUN_00405740
   Address: 00405740
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00405740(LPDROPSOURCE param_1,int *param_2,IDropSourceVtbl *param_3,
                    IDropSourceVtbl *param_4)

{
  LPDROPSOURCE pDropSource;
  _func_6237 *pMem;
  HGLOBAL pvVar1;
  IDropSourceVtbl *pIVar2;
  HRESULT HVar3;
  
  pDropSource = param_1;
  param_1[5].lpVtbl = param_4;
  if ((param_2 == (int *)0x0) || (*param_2 < 1)) {
    return -0x7fff0001;
  }
  param_1 = (LPDROPSOURCE)0x0;
  pMem = (_func_6237 *)FUN_00405260(param_2,&param_1);
  if ((pMem != (_func_6237 *)0x0) && (param_1 != (LPDROPSOURCE)0x0)) {
    pvVar1 = GlobalAlloc(0x40,0x10);
    pIVar2 = GlobalLock(pvVar1);
    if (pIVar2 == (IDropSourceVtbl *)0x0) {
      pIVar2 = (IDropSourceVtbl *)0x0;
    }
    else {
      pIVar2->QueryInterface = (_func_6235 *)&PTR_LAB_00586cec;
      pIVar2->AddRef = (_func_6236 *)0x1;
      pIVar2->Release = pMem;
      pIVar2->QueryContinueDrag = (_func_6238 *)param_1;
    }
    pDropSource[3].lpVtbl = pIVar2;
    if (pIVar2 != (IDropSourceVtbl *)0x0) {
      pDropSource[6].lpVtbl = param_3;
      HVar3 = DoDragDrop((LPDATAOBJECT)pIVar2,pDropSource,0x80000003,(LPDWORD)&param_4);
      if ((HVar3 != 0x40100) && (HVar3 != 0x40101)) {
        HVar3 = 0;
      }
      pIVar2 = pDropSource[3].lpVtbl;
      if (pIVar2 != (IDropSourceVtbl *)0x0) {
        (**(code **)(pIVar2->QueryInterface + 8))(pIVar2);
      }
      pDropSource[3].lpVtbl = (IDropSourceVtbl *)0x0;
      pDropSource[6].lpVtbl = (IDropSourceVtbl *)0x0;
      return HVar3;
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return -0x7ff8fff2;
}


