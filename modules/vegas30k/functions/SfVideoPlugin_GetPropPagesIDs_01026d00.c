/* Module: vegas30k.dll
   Function: SfVideoPlugin_GetPropPagesIDs
   Address: 01026d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVideoPlugin_GetPropPagesIDs(struct tagCAUUID *,struct IUnknown *) */

long SfVideoPlugin_GetPropPagesIDs(tagCAUUID *param_1,IUnknown *param_2)

{
  HRESULT HVar1;
  int *unaff_ESI;
  int *piVar2;
  IUnknown **ppvObject;
  
                    /* 0x26d00  522
                       ?SfVideoPlugin_GetPropPagesIDs@@YGJPAUtagCAUUID@@PAUIUnknown@@@Z */
  if (param_2 == (IUnknown *)0x0) {
    return -0x7fffbffd;
  }
  ppvObject = &param_2;
  piVar2 = (int *)&DAT_011f0e90;
  HVar1 = (*param_2->lpVtbl->QueryInterface)(param_2,(IID *)&DAT_011f0e90,ppvObject);
  if (-1 < HVar1) {
    HVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,ppvObject);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return HVar1;
}


