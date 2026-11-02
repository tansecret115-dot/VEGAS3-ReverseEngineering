/* Module: vegas30k.dll
   Function: Persist
   Address: 01026f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall tSFVIDEOFILTERCACHE::Persist(struct IStream *,int) */

long tSFVIDEOFILTERCACHE::Persist(IStream *param_1,int param_2)

{
  IStreamVtbl *pIVar1;
  int iVar2;
  HRESULT HVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  int *unaff_EBP;
  SIZE_T dwBytes;
  _func_5234 *p_Var6;
  ULARGE_INTEGER *unaff_EDI;
  IStreamVtbl **ppIVar7;
  undefined4 *puVar8;
  int *local_a4;
  LPSTREAM local_a0;
  int *local_9c;
  IStreamVtbl *local_98 [4];
  IStreamVtbl *pIStack_88;
  SIZE_T SStack_84;
  _func_5232 *p_Stack_80;
  IStreamVtbl *pIStack_7c;
  IStreamVtbl *pIStack_78;
  IStreamVtbl *pIStack_74;
  IStreamVtbl *pIStack_70;
  IStreamVtbl *pIStack_6c;
  IStreamVtbl *pIStack_68;
  undefined4 auStack_64 [4];
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  SIZE_T SStack_40;
  
                    /* 0x26f80  257  ?Persist@tSFVIDEOFILTERCACHE@@QAGJPAUIStream@@H@Z */
  dwBytes = 0;
  pIVar1 = param_1[4].lpVtbl;
  local_a0 = (IStream *)0x0;
  local_9c = (int *)0x0;
  if (pIVar1 != (IStreamVtbl *)0x0) {
    local_a4 = (int *)0x0;
    iVar2 = (**(code **)pIVar1->QueryInterface)(pIVar1,&DAT_011f0eb0,&local_a4);
    if (-1 < iVar2) {
      HVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_a0);
      if (-1 < HVar3) {
        (**(code **)(*local_a4 + 0x18))(local_a4,local_a0,1);
        iVar2 = (**(code **)(*unaff_EBP + 0x30))(unaff_EBP,&uStack_54,1);
        if (-1 < iVar2) {
          dwBytes = SStack_40;
        }
      }
      (**(code **)(*local_a4 + 8))(local_a4);
      if (dwBytes != 0) {
        pvVar4 = GlobalAlloc(2,dwBytes);
        piVar5 = GlobalLock(pvVar4);
        local_9c = piVar5;
        if (piVar5 == (int *)0x0) {
          iVar2 = -0x7ff8fff2;
          goto LAB_010271a3;
        }
        (*local_a0->lpVtbl->Seek)(local_a0,(LARGE_INTEGER)0x0,0,unaff_EDI);
        (**(code **)(*local_9c + 0xc))(local_9c,piVar5,dwBytes,0);
      }
    }
  }
  ppIVar7 = local_98;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppIVar7 = (IStreamVtbl *)0x0;
    ppIVar7 = ppIVar7 + 1;
  }
  local_98[0] = (IStreamVtbl *)0x34;
  local_98[1] = param_1->lpVtbl;
  local_98[2] = param_1[1].lpVtbl;
  local_98[3] = param_1[2].lpVtbl;
  pIStack_88 = param_1[3].lpVtbl;
  if (param_1[0x18].lpVtbl == (IStreamVtbl *)0x0) {
    p_Stack_80 = (_func_5232 *)0x0;
  }
  else {
    p_Stack_80 = (param_1[0x18].lpVtbl)->QueryInterface;
  }
  pIStack_78 = param_1[0x1a].lpVtbl;
  pIStack_7c = param_1[0x19].lpVtbl;
  pIStack_74 = param_1[0x1b].lpVtbl;
  pIStack_6c = param_1[0x1e].lpVtbl;
  pIStack_70 = param_1[0x1d].lpVtbl;
  pIStack_68 = param_1[0x1f].lpVtbl;
  SStack_84 = dwBytes;
  iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,local_98,0x34,0);
  if ((-1 < iVar2) && (0 < (int)SStack_84)) {
    iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,local_9c,SStack_84,0);
  }
  local_a4 = (int *)0x0;
  if (0 < (int)p_Stack_80) {
    do {
      if (iVar2 < 0) break;
      p_Var6 = (param_1[0x18].lpVtbl)->Release + (int)(param_1[0x18].lpVtbl)->AddRef * (int)local_a4
      ;
      puVar8 = auStack_64;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      auStack_64[0] = 0x1c;
      auStack_64[1] = *(undefined4 *)p_Var6;
      auStack_64[2] = *(undefined4 *)(p_Var6 + 4);
      auStack_64[3] = *(undefined4 *)(p_Var6 + 0x18);
      uStack_54 = *(undefined4 *)(p_Var6 + 0x1c);
      uStack_50 = *(uint *)(p_Var6 + 0x20) & 0xfffffff9;
      uStack_4c = *(undefined4 *)(p_Var6 + 0x10);
      iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,auStack_64,0x1c,0);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*(int *)param_2 + 0x10))
                          (param_2,*(undefined4 *)(p_Var6 + 0x14),uStack_4c,0);
      }
      local_a4 = (int *)((int)local_a4 + 1);
    } while ((int)local_a4 < (int)p_Stack_80);
  }
LAB_010271a3:
  if (local_a0 != (IStream *)0x0) {
    (*local_a0->lpVtbl->Release)(local_a0);
  }
  if (local_9c != (int *)0x0) {
    pvVar4 = GlobalHandle(local_9c);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(local_9c);
    GlobalFree(pvVar4);
  }
  return iVar2;
}


