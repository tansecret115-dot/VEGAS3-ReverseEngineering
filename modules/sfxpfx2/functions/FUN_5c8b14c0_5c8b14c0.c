/* Module: sfxpfx2.dll
   Function: FUN_5c8b14c0
   Address: 5c8b14c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8b14c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5c8b1510(param_2);
  return *(int *)(param_1 + 0x28) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) /
              (longlong)*(int *)(param_1 + 0x2c));
}


