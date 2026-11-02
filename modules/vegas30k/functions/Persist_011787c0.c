/* Module: vegas30k.dll
   Function: Persist
   Address: 011787c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall _tmixerprops::Persist(struct IStream *,int) */

long _tmixerprops::Persist(IStream *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uchar *pMem;
  HGLOBAL pvVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  LPCVOID unaff_EDI;
  _tfxsend *p_Var4;
  code *pcVar5;
  uint uVar6;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  long lStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  _tfxsend a_Stack_130 [264];
  LPCVOID pvStack_28;
  LPCVOID pvStack_20;
  int iStack_1c;
  undefined4 *puStack_c;
  int iStack_4;
  
                    /* 0x1787c0  256  ?Persist@_tmixerprops@@QAGJPAUIStream@@H@Z */
  local_154 = 0;
  local_148 = 0x1000;
  iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,&local_148,4,0);
  pcVar5 = GlobalFree_exref;
  if (-1 < iVar2) {
    lStack_140 = Mixer_NumBusTypePorts(4);
    puVar1 = puStack_c;
    uStack_150 = puStack_c[1];
    local_154 = *puStack_c;
    local_148 = puStack_c[0x44];
    uStack_14c = puStack_c[0x43];
    uStack_138 = puStack_c[0xc9];
    puStack_c[0x46] = lStack_140;
    uStack_13c = puStack_c[200];
    uStack_144 = puStack_c[0x45];
    uStack_134 = puStack_c[0xca];
    iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,&local_154,0x24,0);
    pcVar5 = GlobalFree_exref;
    if (((((-1 < iVar2) && (iStack_4 != 0)) &&
         (iVar2 = Mixer_SaveMixerCfg((void **)&stack0xfffffe98,(ulong *)&stack0xfffffe9c),
         pcVar5 = GlobalFree_exref, -1 < iVar2)) &&
        ((iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,&stack0xfffffe9c,4,0),
         pcVar5 = GlobalFree_exref, -1 < iVar2 &&
         (iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,unaff_EDI,unaff_ESI,0),
         pcVar5 = GlobalFree_exref, -1 < iVar2)))) && (uVar6 = 0, puVar1[0x46] != 0)) {
      do {
        p_Var4 = a_Stack_130;
        for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)p_Var4 = 0;
          p_Var4 = p_Var4 + 4;
        }
        Mixer_GetFXSendCfg(a_Stack_130,uVar6);
        pMem = Mixer_MakeFXString(a_Stack_130,(ulong *)&stack0xfffffea4);
        if (pMem == (uchar *)0x0) {
          iVar2 = -0x7ff8fff2;
          pcVar5 = GlobalFree_exref;
        }
        else {
          iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,&stack0xfffffea4,4,0);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2,pMem,unaff_EBX,0);
          }
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          pcVar5 = GlobalFree_exref;
          GlobalFree(pvVar3);
        }
        if (pvStack_28 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pvStack_28);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvStack_28);
          (*pcVar5)(pvVar3);
        }
        if ((pvStack_20 != (LPCVOID)0x0) && (iStack_1c != 0)) {
          pvVar3 = GlobalHandle(pvStack_20);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvStack_20);
          (*pcVar5)(pvVar3);
        }
      } while ((-1 < iVar2) &&
              (uVar6 = uVar6 + 1, pcVar5 = GlobalFree_exref, uVar6 < (uint)puStack_c[0x46]));
    }
  }
  if (unaff_EDI != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(unaff_EDI);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(unaff_EDI);
    (*pcVar5)(pvVar3);
  }
  return iVar2;
}


