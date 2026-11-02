/* Module: vegas30.exe
   Function: FUN_00607f50
   Address: 00607f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00607f50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 == 0x3ff)) {
    iVar1 = -1;
  }
  return iVar1;
}


