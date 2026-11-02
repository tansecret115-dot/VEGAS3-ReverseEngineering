/* Module: vegas30k.dll
   Function: Create
   Address: 01178a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __stdcall _tmixerprops::Create(struct IStream *,int,struct _tmixerprops *) */

long _tmixerprops::Create(IStream *param_1,int param_2,_tmixerprops *param_3)

{
  LARGE_INTEGER dlibMove;
  long lVar1;
  HGLOBAL pvVar2;
  LPVOID pv;
  uchar *pv_00;
  int iVar3;
  ULARGE_INTEGER *unaff_ESI;
  ULARGE_INTEGER *unaff_EDI;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *in_stack_00000010;
  ulong uStack_180;
  SIZE_T SStack_17c;
  SIZE_T SStack_178;
  uint uStack_174;
  LPVOID pvStack_170;
  undefined4 auStack_16c [4];
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_148 [2];
  uint uStack_140;
  undefined4 auStack_138 [4];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int aiStack_11c [65];
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
                    /* 0x178a10  28  ?Create@_tmixerprops@@SGJPAUIStream@@HPAU1@@Z */
  lVar1 = (*param_1->lpVtbl->Seek)(param_1,(LARGE_INTEGER)0x100000000,(DWORD)local_148,unaff_ESI);
  if ((-1 < lVar1) &&
     (lVar1 = (*param_1->lpVtbl->Read)(param_1,local_148,4,&uStack_180), -1 < lVar1)) {
    puVar4 = auStack_16c;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (local_148[0] == 0x1000) {
      lVar1 = (*param_1->lpVtbl->Read)(param_1,auStack_16c,0x24,&uStack_180);
      if (lVar1 < 0) {
        return lVar1;
      }
      if (uStack_180 != 0x24) {
        return -0x7ffb1ff8;
      }
    }
    else {
      dlibMove.s.HighPart = 0;
      dlibMove.s.LowPart = uStack_140;
      (*param_1->lpVtbl->Seek)(param_1,dlibMove,0,unaff_EDI);
      puVar4 = auStack_138;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      lVar1 = (*param_1->lpVtbl->Read)(param_1,auStack_138,0x20,&SStack_17c);
      if (lVar1 < 0) {
        return lVar1;
      }
      if (SStack_17c != 0x20) {
        return -0x7ffb1ff8;
      }
      auStack_16c[1] = auStack_138[0];
      auStack_16c[2] = auStack_138[1];
      auStack_16c[3] = auStack_138[2];
      uStack_158 = auStack_138[3];
      uStack_154 = uStack_128;
      uStack_150 = uStack_124;
      uStack_14c = uStack_120;
      local_148[0] = aiStack_11c[0];
    }
    in_stack_00000010[1] = auStack_16c[1];
    in_stack_00000010[0x46] = uStack_158;
    *in_stack_00000010 = auStack_16c[0];
    in_stack_00000010[0x43] = auStack_16c[2];
    in_stack_00000010[0xc9] = uStack_150;
    in_stack_00000010[0x45] = uStack_15c;
    in_stack_00000010[0x44] = auStack_16c[3];
    in_stack_00000010[200] = uStack_154;
    in_stack_00000010[0xca] = uStack_14c;
    if ((param_3 != (_tmixerprops *)0x0) &&
       (lVar1 = (*param_1->lpVtbl->Read)(param_1,&SStack_17c,4,&uStack_180), -1 < lVar1)) {
      if (uStack_180 != 4) {
        return -0x7ffb1ff8;
      }
      pvVar2 = GlobalAlloc(0x42,SStack_17c);
      pv = GlobalLock(pvVar2);
      pvStack_170 = pv;
      if (pv == (LPVOID)0x0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = (*param_1->lpVtbl->Read)(param_1,pv,SStack_17c,&uStack_180);
        if (-1 < lVar1) {
          if (SStack_17c == uStack_180) {
            lVar1 = Mixer_LoadMixerCfg(pv,SStack_17c,0);
            if ((-1 < lVar1) && (uStack_174 = 0, in_stack_00000010[0x46] != 0)) {
              do {
                piVar5 = aiStack_11c;
                for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar5 = 0;
                  piVar5 = piVar5 + 1;
                }
                lVar1 = (*param_1->lpVtbl->Read)(param_1,&SStack_178,4,&uStack_180);
                pcVar6 = GlobalHandle_exref;
                if (-1 < lVar1) {
                  if (uStack_180 == 4) {
                    pvVar2 = GlobalAlloc(0x42,SStack_178);
                    pv_00 = GlobalLock(pvVar2);
                    if (pv_00 == (uchar *)0x0) {
                      lVar1 = -0x7ff8fff2;
                    }
                    else {
                      lVar1 = (*param_1->lpVtbl->Read)(param_1,pv_00,SStack_178,&uStack_180);
                      if (-1 < lVar1) {
                        if (SStack_178 == uStack_180) {
                          Mixer_ReadFXString(pv_00,(_tfxsend *)aiStack_11c);
                          Mixer_SetFXSendCfg((_tfxsend *)aiStack_11c,uStack_174,0);
                        }
                        else {
                          lVar1 = -0x7ffb1ff8;
                        }
                      }
                    }
                    pcVar6 = GlobalHandle_exref;
                    if (pv_00 != (uchar *)0x0) {
                      pvVar2 = GlobalHandle(pv_00);
                      GlobalUnlock(pvVar2);
                      pcVar6 = GlobalHandle_exref;
                      pvVar2 = GlobalHandle(pv_00);
                      GlobalFree(pvVar2);
                    }
                  }
                  else {
                    lVar1 = -0x7ffb1ff8;
                  }
                }
                if (iStack_14 != 0) {
                  pvVar2 = (HGLOBAL)(*pcVar6)(iStack_14);
                  GlobalUnlock(pvVar2);
                  pvVar2 = (HGLOBAL)(*pcVar6)(uStack_18);
                  GlobalFree(pvVar2);
                }
                if ((iStack_8 != 0) && (iStack_c != 0)) {
                  pvVar2 = (HGLOBAL)(*pcVar6)(iStack_c);
                  GlobalUnlock(pvVar2);
                  pvVar2 = (HGLOBAL)(*pcVar6)(uStack_10);
                  GlobalFree(pvVar2);
                }
                pv = pvStack_170;
              } while ((-1 < lVar1) &&
                      (uStack_174 = uStack_174 + 1, uStack_174 < (uint)in_stack_00000010[0x46]));
            }
          }
          else {
            lVar1 = -0x7ffb1ff8;
          }
        }
      }
      if (pv != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pv);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pv);
        GlobalFree(pvVar2);
      }
    }
  }
  return lVar1;
}


