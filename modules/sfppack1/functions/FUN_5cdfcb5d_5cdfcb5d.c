/* Module: sfppack1.dll
   Function: FUN_5cdfcb5d
   Address: 5cdfcb5d
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_5cdfcb5d(LPUNKNOWN param_1,IID *param_2,void **param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;
  
  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = CoCreateInstance((IID *)&DAT_5ce1aa78,param_1,1,(IID *)&DAT_5ce1c480,&param_4);
  if (-1 < HVar2) {
    HVar2 = (**(code **)*param_4)(param_4,&DAT_5ce1aa68,&param_1);
    if (-1 < HVar2) {
      HVar2 = (*param_1->lpVtbl[1].QueryInterface)(param_1,param_2,param_3);
      (*param_1->lpVtbl->Release)(param_1);
      if (-1 < HVar2) {
        *piVar1 = (int)param_4;
        return 0;
      }
    }
    (**(code **)(*param_4 + 8))(param_4);
  }
  return HVar2;
}


