/* Module: sfppack3.dll
   Function: FUN_5cc72e36
   Address: 5cc72e36
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc72e36(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(param_1[-4] + 0x20))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    CoInitialize((LPVOID)0x0);
    uVar2 = CoCreateInstance((IID *)&DAT_5cc8ee88,(LPUNKNOWN)0x0,1,(IID *)&DAT_5cc8ee98,&param_1);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_5cc75081(puVar1,param_1,0);
      (**(code **)(*param_1 + 8))(param_1);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar2 = -(uint)(uVar2 != 0x80070002) & uVar2;
  }
  return uVar2;
}


