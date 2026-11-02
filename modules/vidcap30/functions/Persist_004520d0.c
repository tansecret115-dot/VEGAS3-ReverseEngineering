/* Module: vidcap30.exe
   Function: Persist
   Address: 004520d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall _summarylisttag::Persist(struct IStream *,int) */

long _summarylisttag::Persist(IStream *param_1,int param_2)

{
  _func_5233 *lpString;
  int iVar1;
  long lVar2;
  int iVar3;
  int iStack_40;
  _func_5232 **pp_Stack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_14;
  IStreamVtbl *local_10;
  int local_c;
  int local_8;
  
                    /* 0x520d0  62  ?Persist@_summarylisttag@@QAGJPAUIStream@@H@Z */
  iVar1 = param_2;
  local_10 = param_1->lpVtbl;
  local_8 = 0;
  if (local_10 == (IStreamVtbl *)0x0) {
    return 0;
  }
  uStack_24 = 0;
  puStack_2c = &local_14;
  uStack_28 = 8;
  iStack_30 = param_2;
  local_14 = 8;
  uStack_34 = 0x452117;
  lVar2 = (**(code **)(*(int *)param_2 + 0x10))();
  if ((-1 < lVar2) && (param_2 = 0, param_1->lpVtbl != (IStreamVtbl *)0x0)) {
    while( true ) {
      uStack_34 = 0;
      uStack_38 = 4;
      pp_Stack_3c = &(param_1[1].lpVtbl)->QueryInterface + param_2 * 2;
      iStack_40 = iVar1;
      lVar2 = (**(code **)(*(int *)iVar1 + 0x10))();
      if (lVar2 < 0) break;
      lpString = (&(param_1[1].lpVtbl)->AddRef)[param_2 * 2];
      if (lpString == (_func_5233 *)0x0) {
        local_8 = 0;
        iVar3 = (**(code **)(*(int *)iVar1 + 0x10))(iVar1,&local_8,4,0);
      }
      else {
        iVar3 = lstrlenA((LPCSTR)lpString);
        local_c = (iVar3 + 1) * 2;
        local_8 = local_c;
        FUN_00579db0();
        MultiByteToWideChar(0,1,(LPCSTR)(&(param_1[1].lpVtbl)->AddRef)[param_2 * 2],-1,
                            (LPWSTR)&iStack_40,iVar3 + 1);
        *(undefined2 *)(&stack0xffffffbe + local_c) = 0;
        iVar3 = (**(code **)(*(int *)iVar1 + 0x10))(iVar1,&local_8,4,0);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (**(code **)(*(int *)iVar1 + 0x10))(iVar1,&iStack_40,local_8,0);
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      param_2 = param_2 + 1;
      if (param_1->lpVtbl <= (uint)param_2) {
        return iVar3;
      }
    }
  }
  return lVar2;
}


