/* Module: sfxpfx2.dll
   Function: FUN_5c8c86c0
   Address: 5c8c86c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8c86c0(int *param_1)

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
    HVar2 = CoCreateInstance((IID *)&DAT_5c8e3448,(LPUNKNOWN)0x0,1,(IID *)&DAT_5c8e3458,&param_1);
    if (-1 < HVar2) {
      FUN_5c8ca971(puVar1,param_1,1);
      (**(code **)(*param_1 + 8))(param_1);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar3 = 0;
  }
  return uVar3;
}


