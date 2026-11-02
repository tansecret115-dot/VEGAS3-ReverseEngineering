/* Module: sfmarket2.dll
   Function: FUN_0042e280
   Address: 0042e280
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_0042e280(LPVOID *param_1)

{
  HRESULT HVar1;
  int *unaff_ESI;
  int *piVar2;
  
  *param_1 = (LPVOID)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_00495f18,(LPUNKNOWN)0x0,1,(IID *)&DAT_00495f28,param_1);
  if (-1 < HVar1) {
    HVar1 = (**(code **)(*(int *)*param_1 + 0xd0))
                      (*param_1,&DAT_0049c838,L"version=\"1.0\" encoding=\"UTF-8\"");
    if (-1 < HVar1) {
      piVar2 = (int *)0x0;
      HVar1 = FUN_0042e1f0(*param_1,unaff_ESI,(undefined4 *)&stack0xffffffec);
      if (-1 < HVar1) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      if (-1 < HVar1) {
        return HVar1;
      }
    }
    (**(code **)(*(int *)*param_1 + 8))(*param_1);
    *param_1 = (LPVOID)0x0;
  }
  return HVar1;
}


