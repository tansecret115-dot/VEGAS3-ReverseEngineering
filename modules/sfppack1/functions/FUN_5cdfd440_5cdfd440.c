/* Module: sfppack1.dll
   Function: FUN_5cdfd440
   Address: 5cdfd440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfd440(int *param_1)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(**(code **)(param_1[-4] + 0x20))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 1;
  }
  else {
    CoInitialize((LPVOID)0x0);
    HVar2 = CoCreateInstance((IID *)&DAT_5ce1a9f8,(LPUNKNOWN)0x0,1,(IID *)&DAT_5ce1aa08,&param_1);
    if (-1 < HVar2) {
      FUN_5cdff6f1(puVar1,param_1,1);
      (**(code **)(*param_1 + 8))(param_1);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar3 = 0;
  }
  return uVar3;
}


