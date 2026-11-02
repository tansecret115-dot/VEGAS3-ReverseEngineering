/* Module: sfxpfx1.dll
   Function: FUN_5c9764ad
   Address: 5c9764ad
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_5c9764ad(LPUNKNOWN param_1,IID *param_2,void **param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;
  
  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = CoCreateInstance((IID *)&DAT_5c9921e0,param_1,1,(IID *)&DAT_5c993be8,&param_4);
  if (-1 < HVar2) {
    HVar2 = (**(code **)*param_4)(param_4,&DAT_5c9921d0,&param_1);
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


