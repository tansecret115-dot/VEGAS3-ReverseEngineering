/* Module: sfpaplug.dll
   Function: FUN_0040ce70
   Address: 0040ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ce70(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x220) == 0) {
    iVar1 = FUN_0040cb10(param_1);
  }
  if ((*(int *)(param_1 + 0x220) != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 4);
    iVar1 = 0;
  }
  return iVar1;
}


