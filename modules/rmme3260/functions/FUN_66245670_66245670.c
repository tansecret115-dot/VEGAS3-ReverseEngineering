/* Module: rmme3260.dll
   Function: FUN_66245670
   Address: 66245670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66245670(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
  }
  FUN_66250210((int *)(param_1 + 0x48));
  return;
}


