/* Module: vegas30k.dll
   Function: Mixer_FXBusContainerPersist
   Address: 0117bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_FXBusContainerPersist(struct IStream *,int,unsigned long) */

long Mixer_FXBusContainerPersist(IStream *param_1,int param_2,ulong param_3)

{
  uchar *pv;
  HGLOBAL pvVar1;
  int iVar2;
  HRESULT HVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong local_124;
  _tfxsend local_120;
  undefined4 local_11f;
  LPCVOID pvStack_1c;
  LPCVOID local_18;
  LPCVOID pvStack_14;
  LPCVOID local_10;
  int local_c;
  
  local_120 = (_tfxsend)0x0;
  puVar6 = &local_11f;
                    /* 0x17bb90  160  ?Mixer_FXBusContainerPersist@@YGJPAUIStream@@HK@Z */
  for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_124 = 0;
  Mixer_GetFXSendCfg(&local_120,param_3);
  pv = Mixer_MakeFXString(&local_120,&local_124);
  if (pv == (uchar *)0x0) {
    HVar3 = -0x7ff8fff2;
    pcVar4 = GlobalUnlock_exref;
    pcVar5 = GlobalFree_exref;
  }
  else {
    HVar3 = (*param_1->lpVtbl->Write)(param_1,&local_124,4,(ULONG *)0x0);
    if (-1 < HVar3) {
      HVar3 = (*param_1->lpVtbl->Write)(param_1,pv,local_124,(ULONG *)0x0);
    }
    pvVar1 = GlobalHandle(pv);
    pcVar4 = GlobalUnlock_exref;
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pv);
    pcVar5 = GlobalFree_exref;
    GlobalFree(pvVar1);
  }
  if (local_18 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(local_18);
    (*pcVar4)(pvVar1);
    pvVar1 = GlobalHandle(pvStack_1c);
    (*pcVar5)(pvVar1);
  }
  if ((local_10 != (LPCVOID)0x0) && (local_c != 0)) {
    pvVar1 = GlobalHandle(local_10);
    (*pcVar4)(pvVar1);
    pvVar1 = GlobalHandle(pvStack_14);
    (*pcVar5)(pvVar1);
  }
  return HVar3;
}


