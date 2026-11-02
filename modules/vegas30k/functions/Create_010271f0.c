/* Module: vegas30k.dll
   Function: Create
   Address: 010271f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* public: static long __stdcall tSFVIDEOFILTERCACHE::Create(struct IStream *,int,struct tSFLIST *
   *,struct tSFGUIDTRANSLATIONTABLE *,int,struct _GUID *) */

long tSFVIDEOFILTERCACHE::Create
               (IStream *param_1,int param_2,tSFLIST **param_3,tSFGUIDTRANSLATIONTABLE *param_4,
               int param_5,_GUID *param_6)

{
  IStreamVtbl *pIVar1;
  undefined4 uVar2;
  IStream *This;
  tSFLIST **pptVar3;
  _GUID *p_Var4;
  int *pMem;
  HRESULT HVar5;
  tSFLIST **_Memory;
  int iVar6;
  HGLOBAL pvVar7;
  tSFLIST *ptVar8;
  int iVar9;
  ULARGE_INTEGER *unaff_EDI;
  _GUID **pp_Var10;
  _GUID *local_60;
  LPSTREAM local_5c;
  int *local_58;
  int *local_54;
  _GUID *ap_Stack_50 [5];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  _GUID *local_34;
  tSFLIST *ptStack_30;
  tSFLIST *ptStack_2c;
  tSFLIST *ptStack_28;
  tSFLIST *ptStack_24;
  _GUID *p_Stack_20;
  int iStack_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  p_Var4 = param_6;
                    /* 0x271f0  29
                       ?Create@tSFVIDEOFILTERCACHE@@SGJPAUIStream@@HPAPAUtSFLIST@@PAUtSFGUIDTRANSLATIONTABLE@@HPAU_GUID@@@Z
                        */
  This = param_1;
  local_58 = (int *)0x0;
  local_54 = (int *)0x0;
  local_5c = (IStream *)0x0;
  local_60 = (_GUID *)0x0;
  if (param_6 != (_GUID *)0x0) {
    param_6->Data1 = 0;
    param_6->Data2 = 0;
    param_6->Data3 = 0;
    param_6->Data4[0] = '\0';
    param_6->Data4[1] = '\0';
    param_6->Data4[2] = '\0';
    param_6->Data4[3] = '\0';
    param_6->Data4[4] = '\0';
    param_6->Data4[5] = '\0';
    param_6->Data4[6] = '\0';
    param_6->Data4[7] = '\0';
  }
  pIVar1 = param_1->lpVtbl;
  pp_Var10 = &local_34;
  for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pp_Var10 = (_GUID *)0x0;
    pp_Var10 = pp_Var10 + 1;
  }
  HVar5 = (*pIVar1->Read)(param_1,&local_60,4,(ULONG *)&param_6);
  if ((HVar5 < 0) || (param_6 != (_GUID *)&DAT_00000004)) {
    return -0x7ffb1ff8;
  }
  local_34 = local_60;
  local_60 = (_GUID *)(local_60[-1].Data4 + 4);
  iVar9 = (*This->lpVtbl->Read)(This,&ptStack_30,(ULONG)local_60,(ULONG *)&param_6);
  if (iVar9 < 0) {
    return -0x7ffb1ff8;
  }
  if (local_60 != param_6) {
    return -0x7ffb1ff8;
  }
  if (*param_3 == (tSFLIST *)0x0) {
    iVar9 = _SfVideoPlugin_CreateCacheList_4(param_3);
  }
  _Memory = param_3;
  if (-1 < iVar9) {
    _Memory = calloc(1,0x80);
    if (_Memory == (tSFLIST **)0x0) {
      iVar9 = -0x7ff8fff2;
      goto LAB_0102752b;
    }
    FUN_01023e90(param_4,param_5,&ptStack_30);
    *_Memory = ptStack_30;
    _Memory[1] = ptStack_2c;
    _Memory[2] = ptStack_28;
    _Memory[3] = ptStack_24;
    if (p_Var4 != (_GUID *)0x0) {
      p_Var4->Data1 = (ulong)ptStack_30;
      *(tSFLIST **)&p_Var4->Data2 = ptStack_2c;
      *(tSFLIST **)p_Var4->Data4 = ptStack_28;
      *(tSFLIST **)(p_Var4->Data4 + 4) = ptStack_24;
    }
    iVar9 = _SfVideoFilterCache_Init_24(_Memory,&ptStack_30,uStack_c,0,uStack_8,uStack_4);
    if (-1 < iVar9) {
      if (((int)p_Stack_20 < 1) ||
         (iVar6 = (*(code *)**(undefined4 **)_Memory[4])(_Memory[4],&DAT_011f0eb0,&local_58),
         iVar6 < 0)) {
LAB_01027413:
        if ((_Memory[5] != (tSFLIST *)0x0) && (iVar6 = 0, 0 < iStack_1c)) {
          do {
            pIVar1 = This->lpVtbl;
            pp_Var10 = ap_Stack_50;
            for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pp_Var10 = (_GUID *)0x0;
              pp_Var10 = pp_Var10 + 1;
            }
            HVar5 = (*pIVar1->Read)(This,&local_60,4,(ULONG *)&param_6);
            if ((HVar5 < 0) || (param_6 != (_GUID *)&DAT_00000004)) goto LAB_0102750c;
            ap_Stack_50[0] = local_60;
            local_60 = (_GUID *)(local_60[-1].Data4 + 4);
            iVar9 = (*This->lpVtbl->Read)(This,ap_Stack_50 + 1,(ULONG)local_60,(ULONG *)&param_6);
            if ((iVar9 < 0) || (local_60 != param_6)) goto LAB_0102750c;
            _SfVideoKeyframe_Insert_36
                      (_Memory,ap_Stack_50[1],ap_Stack_50[2],ap_Stack_50[3],uStack_3c,This,0,
                       uStack_38,&param_1);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack_1c);
        }
        pptVar3 = param_3;
        if (-1 < iVar9) {
          uVar2 = *(undefined4 *)*param_3;
          ptVar8 = (tSFLIST *)_SfVideoFilterCache_CreateNewCookie_4(*param_3);
          _Memory[0x1c] = ptVar8;
          param_3 = _Memory;
          _SfList_InsertList_16(*pptVar3,uVar2,&param_3,1);
          goto LAB_0102752b;
        }
      }
      else {
        pvVar7 = GlobalAlloc(2,(SIZE_T)p_Stack_20);
        local_54 = GlobalLock(pvVar7);
        if (local_54 == (int *)0x0) {
          iVar9 = -0x7ff8fff2;
        }
        else {
          iVar9 = (*This->lpVtbl->Read)(This,local_54,(ULONG)p_Stack_20,(ULONG *)&param_6);
          if (-1 < iVar9) {
            if (p_Stack_20 == param_6) {
              HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_5c);
              if ((-1 < HVar5) &&
                 (HVar5 = (*local_5c->lpVtbl->Write)
                                    (local_5c,local_54,(ULONG)p_Stack_20,(ULONG *)0x0), -1 < HVar5))
              {
                (*local_5c->lpVtbl->Seek)(local_5c,(LARGE_INTEGER)0x0,0,unaff_EDI);
                (**(code **)(*local_54 + 0x14))(local_54,local_58);
              }
              goto LAB_01027413;
            }
LAB_0102750c:
            iVar9 = -0x7ffb1ff8;
          }
        }
      }
    }
  }
  if (_Memory != (tSFLIST **)0x0) {
    _SfVideoFilterCache_UnInit_4(_Memory);
    free(_Memory);
  }
LAB_0102752b:
  if (local_5c != (IStream *)0x0) {
    (*local_5c->lpVtbl->Release)(local_5c);
  }
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 8))(local_58);
  }
  pMem = local_54;
  if (local_54 != (int *)0x0) {
    pvVar7 = GlobalHandle(local_54);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(pMem);
    GlobalFree(pvVar7);
  }
  return iVar9;
}


