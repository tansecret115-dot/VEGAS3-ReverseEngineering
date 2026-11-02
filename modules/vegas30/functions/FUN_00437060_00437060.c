/* Module: vegas30.exe
   Function: FUN_00437060
   Address: 00437060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00437060(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  *(uint *)(param_1 + 4 + iVar1 * 4) =
       *(uint *)(param_1 + 4 + iVar1 * 4) | 1 << ((byte)param_2 & 0x1f);
  return;
}


