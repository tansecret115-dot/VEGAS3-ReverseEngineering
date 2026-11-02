/* Module: vegas30k.dll
   Function: FUN_01194180
   Address: 01194180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_01194180(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0119bde0(0);
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffff3fff | 0x400;
    iVar1 = 0;
  }
  return iVar1;
}


