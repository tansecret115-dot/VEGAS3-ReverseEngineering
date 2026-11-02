/* Module: vegas30.exe
   Function: Persist
   Address: 005234d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall _sfmarker::Persist(struct IStream *,int) */

long _sfmarker::Persist(IStream *param_1,int param_2)

{
  IStream *pIVar1;
  IStreamVtbl *pIVar2;
  long lVar3;
  int iVar4;
  IStreamVtbl **ppIVar5;
  IStreamVtbl *local_30 [4];
  IStreamVtbl *local_20;
  IStreamVtbl *local_1c;
  IStreamVtbl *local_18;
  uint local_14;
  int local_10;
  int local_c;
  IStreamVtbl *local_8;
  
                    /* 0x1234d0  14  ?Persist@_sfmarker@@QAGJPAUIStream@@H@Z */
  if (param_1[0xb].lpVtbl == (IStreamVtbl *)0x0) {
    pIVar2 = param_1[2].lpVtbl;
    ppIVar5 = local_30;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppIVar5 = (IStreamVtbl *)0x0;
      ppIVar5 = ppIVar5 + 1;
    }
    local_30[2] = param_1->lpVtbl;
    local_30[3] = param_1[1].lpVtbl;
    local_1c = param_1[3].lpVtbl;
    local_18 = param_1[4].lpVtbl;
    pIVar1 = param_1 + 0xc;
    local_14 = (uint)param_1[8].lpVtbl & 0xffff;
    local_30[0] = (IStreamVtbl *)0x28;
    local_20 = pIVar2;
    if (pIVar1 == (IStream *)0x0) {
      local_10 = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)pIVar1);
      local_10 = iVar4 * 2 + 2;
    }
    if (param_1[9].lpVtbl == (IStreamVtbl *)0x0) {
      local_c = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)param_1[9].lpVtbl);
      local_c = iVar4 * 2 + 2;
    }
    lVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2,local_30,0x28,0);
    if (-1 < lVar3) {
      if ((local_20 != (IStreamVtbl *)0x0) &&
         (lVar3 = FUN_00523690(param_2,pIVar1,local_20), lVar3 < 0)) {
        return lVar3;
      }
      if (local_1c != (IStreamVtbl *)0x0) {
        lVar3 = FUN_00523690(param_2,param_1[9].lpVtbl,local_1c);
        return lVar3;
      }
    }
  }
  else {
    pIVar2 = param_1->lpVtbl;
    ppIVar5 = local_30;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppIVar5 = (IStreamVtbl *)0x0;
      ppIVar5 = ppIVar5 + 1;
    }
    local_20 = param_1[2].lpVtbl;
    local_30[3] = param_1[1].lpVtbl;
    local_1c = param_1[3].lpVtbl;
    local_18 = param_1[4].lpVtbl;
    pIVar1 = param_1 + 0xc;
    local_14 = (uint)param_1[8].lpVtbl & 0xffff;
    local_30[0] = (IStreamVtbl *)0x30;
    local_30[2] = pIVar2;
    if (pIVar1 == (IStream *)0x0) {
      local_10 = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)pIVar1);
      local_10 = iVar4 * 2 + 2;
    }
    if (param_1[9].lpVtbl == (IStreamVtbl *)0x0) {
      local_c = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)param_1[9].lpVtbl);
      local_c = iVar4 * 2 + 2;
    }
    local_8 = param_1[0xb].lpVtbl;
    lVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2,local_30,0x30,0);
    if (-1 < lVar3) {
      if ((local_20 != (IStreamVtbl *)0x0) &&
         (lVar3 = FUN_00523690(param_2,pIVar1,local_20), lVar3 < 0)) {
        return lVar3;
      }
      if ((local_1c != (IStreamVtbl *)0x0) &&
         (lVar3 = FUN_00523690(param_2,param_1[9].lpVtbl,local_1c), lVar3 < 0)) {
        return lVar3;
      }
      if (param_1[0xb].lpVtbl == (IStreamVtbl *)0x676e6463) {
        lVar3 = FUN_0043e910(param_2,param_1);
      }
    }
  }
  return lVar3;
}


