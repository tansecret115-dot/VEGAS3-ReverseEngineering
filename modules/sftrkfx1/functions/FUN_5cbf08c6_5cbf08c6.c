/* Module: sftrkfx1.dll
   Function: FUN_5cbf08c6
   Address: 5cbf08c6
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbf08c6(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(param_1[-4] + 0x20))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    CoInitialize((LPVOID)0x0);
    uVar2 = CoCreateInstance((IID *)&DAT_5cc0ac90,(LPUNKNOWN)0x0,1,(IID *)&DAT_5cc0aca0,&param_1);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_5cbf2b11(puVar1,param_1,0);
      (**(code **)(*param_1 + 8))(param_1);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar2 = -(uint)(uVar2 != 0x80070002) & uVar2;
  }
  return uVar2;
}


