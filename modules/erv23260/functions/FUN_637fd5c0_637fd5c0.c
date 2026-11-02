/* Module: erv23260.dll
   Function: FUN_637fd5c0
   Address: 637fd5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __fastcall FUN_637fd5c0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 7) {
    bVar1 = **(byte **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(byte **)(param_1 + 4) = *(byte **)(param_1 + 4) + 1;
    return bVar1 & 1;
  }
  bVar1 = **(byte **)(param_1 + 4);
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  return bVar1 >> (7U - (char)iVar2 & 0x1f) & 1;
}


