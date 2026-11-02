/* Module: vegas30.exe
   Function: FUN_004c3f50
   Address: 004c3f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3f50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 0xfe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x5d0) + 8);
  if ((iVar2 <= iVar1) && (iVar1 < 0x200)) {
    if (param_2 == 1) {
      iVar2 = 2;
    }
    FUN_004c3de0(param_1,0,iVar2);
  }
  return;
}


