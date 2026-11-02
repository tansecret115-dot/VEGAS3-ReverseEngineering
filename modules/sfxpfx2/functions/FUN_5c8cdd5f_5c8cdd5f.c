/* Module: sfxpfx2.dll
   Function: FUN_5c8cdd5f
   Address: 5c8cdd5f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8cdd5f(int param_1)

{
  LPCVOID pvVar1;
  LPCVOID pvVar2;
  
  pvVar2 = *(LPCVOID *)(param_1 + 8);
  while (pvVar2 != (LPCVOID)0x0) {
    pvVar1 = *(LPCVOID *)((int)pvVar2 + 4);
    FUN_5c892960(pvVar2);
    pvVar2 = pvVar1;
  }
  return;
}


