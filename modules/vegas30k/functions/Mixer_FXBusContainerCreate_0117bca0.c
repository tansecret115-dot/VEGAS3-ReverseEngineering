/* Module: vegas30k.dll
   Function: Mixer_FXBusContainerCreate
   Address: 0117bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_FXBusContainerCreate(struct IStream *,int,unsigned long) */

long Mixer_FXBusContainerCreate(IStream *param_1,int param_2,ulong param_3)

{
  HRESULT HVar1;
  HGLOBAL pvVar2;
  uchar *pv;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  uint unaff_EDI;
  undefined4 *puVar6;
  int *piStack_130;
  SIZE_T local_12c;
  ULONG local_128;
  ISFMixerIn *pIStack_124;
  _tfxsend local_120;
  undefined4 local_11f;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  local_120 = (_tfxsend)0x0;
  puVar6 = &local_11f;
                    /* 0x17bca0  159  ?Mixer_FXBusContainerCreate@@YGJPAUIStream@@HK@Z */
  for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_128 = 0;
  local_12c = 0;
  HVar1 = (*param_1->lpVtbl->Read)(param_1,&local_12c,4,&local_128);
  pcVar5 = GlobalHandle_exref;
  if (-1 < HVar1) {
    if (local_128 == 4) {
      pvVar2 = GlobalAlloc(0x42,local_12c);
      pv = GlobalLock(pvVar2);
      if (pv == (uchar *)0x0) {
        HVar1 = -0x7ff8fff2;
      }
      else {
        HVar1 = (*param_1->lpVtbl->Read)(param_1,pv,local_12c,&local_128);
        if (-1 < HVar1) {
          if (local_12c == local_128) {
            Mixer_ReadFXString(pv,&local_120);
            uVar3 = Mixer_NumBusTypePorts(4);
            while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
              Mixer_GetDevice(&pIStack_124,4,uVar3);
              (**(code **)(*(int *)pIStack_124 + 0x8c))(pIStack_124,0x32,&piStack_130);
              if (param_3 <= unaff_EDI) {
                unaff_EDI = unaff_EDI + 1;
                (**(code **)(*piStack_130 + 0x90))(piStack_130,0x32,&stack0xfffffec4);
              }
              (**(code **)(*piStack_130 + 8))(piStack_130);
            }
            Mixer_SetFXSendCfg(&local_120,param_3,0);
          }
          else {
            HVar1 = -0x7ffb1ff8;
          }
        }
      }
      pcVar5 = GlobalHandle_exref;
      if (pv != (uchar *)0x0) {
        pvVar2 = GlobalHandle(pv);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pv);
        GlobalFree(pvVar2);
      }
    }
    else {
      HVar1 = -0x7ffb1ff8;
    }
  }
  if (iStack_18 != 0) {
    pvVar2 = (HGLOBAL)(*pcVar5)(iStack_18);
    GlobalUnlock(pvVar2);
    pvVar2 = (HGLOBAL)(*pcVar5)(uStack_1c);
    GlobalFree(pvVar2);
  }
  if ((iStack_c != 0) && (iStack_10 != 0)) {
    pvVar2 = (HGLOBAL)(*pcVar5)(iStack_10);
    GlobalUnlock(pvVar2);
    pvVar2 = (HGLOBAL)(*pcVar5)(uStack_14);
    GlobalFree(pvVar2);
  }
  return HVar1;
}


