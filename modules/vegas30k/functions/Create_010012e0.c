/* Module: vegas30k.dll
   Function: Create
   Address: 010012e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __stdcall _summarylisttag::Create(struct IStream *,int,struct _summarylisttag
   *) */

long _summarylisttag::Create(IStream *param_1,int param_2,_summarylisttag *param_3)

{
  int iVar1;
  LPCVOID pMem;
  LPSTR lpMultiByteStr;
  _summarylisttag *p_Var2;
  _summarylisttag *p_Var3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  HRESULT HVar6;
  short unaff_DI;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ULONG local_8;
  
                    /* 0x12e0  27  ?Create@_summarylisttag@@SGJPAUIStream@@HPAU1@@Z */
  p_Var2 = param_3;
  if (param_3 == (_summarylisttag *)0x0) {
    return -0x7ff8ffa9;
  }
  p_Var3 = (_summarylisttag *)(*param_1->lpVtbl->Read)(param_1,local_1c,8,&local_8);
  if (-1 < (int)p_Var3) {
    *(int *)param_3 = local_18;
    pvVar4 = GlobalAlloc(0x42,local_18 << 3);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)(param_3 + 4) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    local_10 = 0;
    if (*(int *)param_3 != 0) {
      do {
        iVar1 = local_10 * 8;
        HVar6 = (*param_1->lpVtbl->Read)(param_1,(void *)(*(int *)(p_Var2 + 4) + iVar1),4,&local_8);
        if (HVar6 < 0) {
          return HVar6;
        }
        param_3 = (_summarylisttag *)(*param_1->lpVtbl->Read)(param_1,&local_14,4,&local_8);
        if ((int)param_3 < 0) {
          return (long)param_3;
        }
        local_c = local_14 >> 1;
        if (local_c == 0) {
          *(undefined4 *)(*(int *)(p_Var2 + 4) + 4 + iVar1) = 0;
        }
        else {
          FUN_01002100();
          param_3 = (_summarylisttag *)
                    (*param_1->lpVtbl->Read)(param_1,&stack0xffffffd8,local_14,&local_8);
          if ((int)param_3 < 0) {
            return (long)param_3;
          }
          pMem = *(LPCVOID *)(*(int *)(p_Var2 + 4) + 4 + iVar1);
          if (pMem != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(*(LPCVOID *)(*(int *)(p_Var2 + 4) + 4 + iVar1));
            GlobalFree(pvVar4);
          }
          pvVar4 = GlobalAlloc(0x42,local_c);
          pvVar5 = GlobalLock(pvVar4);
          *(LPVOID *)(*(int *)(p_Var2 + 4) + 4 + iVar1) = pvVar5;
          lpMultiByteStr = *(LPSTR *)(*(int *)(p_Var2 + 4) + 4 + iVar1);
          if ((&stack0x00000000 == (undefined1 *)0x28) || (unaff_DI != 0)) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffffd8,-1,lpMultiByteStr,local_c,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
            lpMultiByteStr[local_c - 1] = '\0';
            goto LAB_0100147c;
          }
          lpMultiByteStr[local_c - 1] = '\0';
        }
LAB_0100147c:
        local_10 = local_10 + 1;
        p_Var3 = param_3;
      } while (local_10 < *(uint *)p_Var2);
    }
  }
  return (long)p_Var3;
}


