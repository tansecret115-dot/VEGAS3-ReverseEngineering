/* Module: vegas30k.dll
   Function: FUN_01110860
   Address: 01110860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01110860(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_011108b0(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


