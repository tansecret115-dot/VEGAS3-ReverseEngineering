/* Module: vegas30k.dll
   Function: Mixer_BusFXPersist
   Address: 0117b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusFXPersist(struct IStream *,int,struct ISFGraphFilter *) */

long Mixer_BusFXPersist(IStream *param_1,int param_2,ISFGraphFilter *param_3)

{
  int iVar1;
  HRESULT HVar2;
  int *unaff_EDI;
  IID local_1c;
  IStream *pIStack_8;
  int iStack_4;
  
                    /* 0x17b9c0  150  ?Mixer_BusFXPersist@@YGJPAUIStream@@HPAUISFGraphFilter@@@Z */
  local_1c.Data1 = 0;
  local_1c.Data2 = 0;
  local_1c.Data3 = 0;
  local_1c.Data4[0] = '\0';
  local_1c.Data4[1] = '\0';
  local_1c.Data4[2] = '\0';
  local_1c.Data4[3] = '\0';
  iVar1 = (**(code **)(*(int *)param_3 + 0x50))(param_3);
  local_1c.Data1 = (ulong)(iVar1 == 0);
  (**(code **)(*(int *)param_3 + 0x40))(param_3,&local_1c.Data2);
  HVar2 = (*pIStack_8->lpVtbl->Write)(pIStack_8,&stack0xffffffdc,8,(ULONG *)0x0);
  if ((-1 < HVar2) && (iStack_4 != 0)) {
    HVar2 = (**(code **)(*(int *)param_3 + 0x10))(param_3,&DAT_011f0ee0,&stack0xffffffd8);
    if (-1 < HVar2) {
      HVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,&local_1c);
      if (HVar2 == 0) {
        HVar2 = WriteClassStm(pIStack_8,&local_1c);
        if (HVar2 == 0) {
          HVar2 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,pIStack_8,1);
        }
      }
    }
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return HVar2;
}


