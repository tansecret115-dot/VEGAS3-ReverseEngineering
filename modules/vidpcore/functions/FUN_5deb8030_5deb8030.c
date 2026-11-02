/* Module: vidpcore.dll
   Function: FUN_5deb8030
   Address: 5deb8030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deb8030(undefined4 *param_1,undefined4 param_2,int param_3,SIZE_T param_4)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  puVar1 = calloc(1,0x144);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (param_4 == 0) {
    param_4 = 0x2000;
  }
  else if (param_4 < 0x801) {
    param_4 = 0x800;
  }
  puVar1[0x49] = param_4;
  puVar1[0x4a] = 0x400;
  puVar1[0x4b] = 0;
  hMem = GlobalAlloc(0x40,param_4);
  pvVar2 = GlobalLock(hMem);
  puVar1[0x4c] = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    FUN_5deb7fb0(puVar1);
    return 0x8007000e;
  }
  if (param_3 != 0) {
    puVar1[0x4f] = param_3;
  }
  puVar1[0x50] = 0;
  *puVar1 = param_2;
  uVar3 = FUN_5deb7f50(param_2);
  puVar1[0x4e] = uVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x43));
  puVar1[0x42] = 1;
  *param_1 = puVar1;
  return 0;
}


