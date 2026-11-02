/* Module: vegas30.exe
   Function: FUN_00525e10
   Address: 00525e10
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00525e10(int param_1,LPSTREAM *param_2,HGLOBAL *param_3)

{
  IStream *This;
  void *pv;
  ULONG cb;
  int iVar1;
  LPSTREAM *ppIVar2;
  HGLOBAL *ppvVar3;
  HRESULT HVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppIVar2 = param_2;
  iVar1 = param_1;
  HVar4 = -0x7ff8ffa9;
  if (*(int *)(*(int *)(param_1 + 0x84) + 4) != 0) {
    HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,param_2);
    This = *ppIVar2;
    if ((This != (IStream *)0x0) && (-1 < HVar4)) {
      local_c = 1;
      (*This->lpVtbl->Write)(This,&local_c,4,(ULONG *)0x0);
      param_2 = *(LPSTREAM **)(*(int *)(param_1 + 0x84) + 4);
      iVar5 = (*(*ppIVar2)->lpVtbl->Write)(*ppIVar2,&param_2,4,(ULONG *)0x0);
      param_1 = 0;
      if (0 < (int)param_2) {
        do {
          if (iVar5 < 0) break;
          pv = *(void **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x84) + 8) + 8) + param_1 * 4);
          (*(*ppIVar2)->lpVtbl->Write)(*ppIVar2,pv,0x10,(ULONG *)0x0);
          iVar5 = (*(*ppIVar2)->lpVtbl->Write)(*ppIVar2,(ULONG *)((int)pv + 0x114),4,(ULONG *)0x0);
          if ((-1 < iVar5) && (cb = *(ULONG *)((int)pv + 0x114), cb != 0)) {
            iVar5 = (*(*ppIVar2)->lpVtbl->Write)
                              (*ppIVar2,*(void **)((int)pv + 0x118),cb,(ULONG *)0x0);
          }
          param_1 = param_1 + 1;
        } while (param_1 < (int)param_2);
      }
      iVar1 = *(int *)(iVar1 + 0x84);
      uStack_8 = *(undefined4 *)(iVar1 + 0x10);
      uStack_4 = *(undefined4 *)(iVar1 + 0x14);
      HVar4 = (*(*ppIVar2)->lpVtbl->Write)(*ppIVar2,&uStack_8,8,(ULONG *)0x0);
      ppvVar3 = param_3;
      GetHGlobalFromStream(*ppIVar2,param_3);
      GlobalSize(*ppvVar3);
    }
  }
  return HVar4;
}


