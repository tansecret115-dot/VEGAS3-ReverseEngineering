/* Module: vegas30k.dll
   Function: FUN_01100030
   Address: 01100030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01100030(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_010fffe0(param_1);
  if (*param_1 == 0xc) {
    return iVar1 * 3;
  }
  return iVar1 << 2;
}


