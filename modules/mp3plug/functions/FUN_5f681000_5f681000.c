/* Module: mp3plug.dll
   Function: FUN_5f681000
   Address: 5f681000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f681000(HMODULE param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_5f74d2e8;
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_5f74d2e8 = param_1;
  _DAT_5f74d2d0 = &DAT_5f73c070;
  _DAT_5f74d3c0 = &DAT_5f74d260;
  DAT_5f74d260 = 0x84;
  _DAT_5f74d2c4 = 0x300;
  DAT_5f74d270 = (int *)0x0;
  _DAT_5f74d268 = param_1;
  _DAT_5f74d26c = param_1;
  _DAT_5f74d264 = param_1;
  _DAT_5f74d274 = 0;
  DAT_5f74d278 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d27c);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d294);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f74d2ac);
  _DAT_5f74d2c8 = 0;
  DAT_5f74d2cc = 1;
  DAT_5f74d2d4 = 0;
  _DAT_5f74d2dc = 0;
  DAT_5f74d2d8 = 0;
  DAT_5f74d2e0 = 0;
  if (DAT_5f74d270 != (int *)0x0) {
    iVar1 = *DAT_5f74d270;
    piVar2 = DAT_5f74d270;
    while (iVar1 != 0) {
      (*(code *)piVar2[8])(1);
      if (DAT_5f74d260 == 100) {
        piVar2 = piVar2 + 7;
      }
      else {
        piVar2 = piVar2 + 9;
      }
      iVar1 = *piVar2;
    }
  }
  FUN_5f69fd40(param_1);
  iVar1 = FUN_5f69e5a0(&DAT_5f74d2f4,param_1,0,0);
  DAT_5f74d2f8 = 0;
  DAT_5f74d2fc = 0;
  DAT_5f74d300 = 0;
  DAT_5f74d308 = 0;
  DAT_5f74d32c = 0;
  DAT_5f74d334 = 0;
  DAT_5f74d33c = 0;
  DAT_5f74d344 = 0;
  DAT_5f74d330 = 0xffffff9c;
  DAT_5f74d338 = 0xffffff38;
  DAT_5f74d340 = 0xfffffed4;
  return -1 < iVar1;
}


