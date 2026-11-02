/* Module: vegas30k.dll
   Function: SfVideoPlugin_CreateTransform
   Address: 01025030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVideoPlugin_CreateTransform(struct IUnknown * *,struct IUnknown const *,struct
   _GUID const *) */

long SfVideoPlugin_CreateTransform(IUnknown **param_1,IUnknown *param_2,_GUID *param_3)

{
  IUnknown *pIVar1;
  ULONG UVar2;
  
                    /* 0x25030  521
                       ?SfVideoPlugin_CreateTransform@@YGJPAPAUIUnknown@@PBU1@PBU_GUID@@@Z */
  pIVar1 = param_2;
  if ((param_3 != (_GUID *)0x0) && (param_1 != (IUnknown **)0x0)) {
    *param_1 = (IUnknown *)0x0;
    if ((((param_2 == (IUnknown *)0x0) &&
         (UVar2 = _SfVideoPlugin_CreateInstance_4(&param_2), (int)UVar2 < 0)) ||
        (UVar2 = (*param_2->lpVtbl[1].Release)(param_2), pIVar1 == (IUnknown *)0x0)) &&
       (param_2 != (IUnknown *)0x0)) {
      (*param_2->lpVtbl->Release)(param_2);
    }
    return UVar2;
  }
  return -0x7fffbffd;
}


