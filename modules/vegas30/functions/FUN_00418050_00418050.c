/* Module: vegas30.exe
   Function: FUN_00418050
   Address: 00418050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00418050(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 2) {
    return DAT_006487dc;
  }
  if (iVar1 == 3) {
    return DAT_006491f4;
  }
  if (iVar1 == 4) {
    return DAT_006491f8;
  }
  return -(uint)(iVar1 != 5);
}


