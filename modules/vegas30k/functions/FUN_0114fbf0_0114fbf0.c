/* Module: vegas30k.dll
   Function: FUN_0114fbf0
   Address: 0114fbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114fbf0(uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = _mbschr(param_1,10);
    iVar2 = iVar2 + 1;
    param_1 = puVar1 + 1;
  } while (puVar1 != (uchar *)0x0);
  return iVar2;
}


