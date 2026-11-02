/* Module: pncrt.dll
   Function: FUN_7802f5c0
   Address: 7802f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7802f5c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)((int)param_2 + iVar1) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


