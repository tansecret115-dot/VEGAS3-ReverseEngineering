/* Module: rmto3260.dll
   Function: FUN_662c22a0
   Address: 662c22a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c22a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 != 0) && (*(int **)(param_1 + 0x50) != (int *)0x0)) {
    iVar1 = FUN_662f0810(*(int **)(param_1 + 0x50),&DAT_6630a020);
  }
  return iVar1;
}


