/* Module: encn3260.dll
   Function: FUN_664b0200
   Address: 664b0200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b0200(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
  }
  FUN_664bb3e0((int *)(param_1 + 0x48));
  return;
}


