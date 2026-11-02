/* Module: sfxpfx1.dll
   Function: FUN_5c97c42f
   Address: 5c97c42f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97c42f(int param_1)

{
  LPCVOID pvVar1;
  LPCVOID pvVar2;
  
  pvVar2 = *(LPCVOID *)(param_1 + 8);
  while (pvVar2 != (LPCVOID)0x0) {
    pvVar1 = *(LPCVOID *)((int)pvVar2 + 4);
    FUN_5c942920(pvVar2);
    pvVar2 = pvVar1;
  }
  return;
}


