/* Module: g2plug.dll
   Function: FUN_5f814ce0
   Address: 5f814ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_5f814ce0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  HRESULT HVar2;
  LPVOID pvVar3;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *puStack_20;
  IStream *pIStack_1c;
  IStream local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  pIStack_1c = &local_c;
  *param_3 = 0;
  puStack_20 = &DAT_5f869c80;
  local_c.lpVtbl = (IStreamVtbl *)0x0;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&pIStack_1c);
    if (-1 < HVar2) {
      HVar2 = (**(code **)(*unaff_EDI + 0x1c))(unaff_EDI,uStack_4,pIStack_1c);
      if ((-1 < HVar2) &&
         (HVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0,0,2,&puStack_20), -1 < HVar2)) {
        pvVar3 = CoTaskMemAlloc((SIZE_T)puStack_20);
        *param_3 = pvVar3;
        if (pvVar3 != (LPVOID)0x0) {
          HVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0,0,0,0);
          if ((HVar2 < 0) ||
             (HVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,*param_3,puStack_20,0), HVar2 < 0))
          {
            CoTaskMemFree((LPVOID)*param_3);
            *param_3 = 0;
          }
          else {
            *puStack_8 = puStack_20;
          }
        }
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return HVar2;
  }
  return iVar1;
}


