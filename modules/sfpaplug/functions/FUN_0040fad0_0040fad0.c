/* Module: sfpaplug.dll
   Function: FUN_0040fad0
   Address: 0040fad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040fad0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00410440(param_1);
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_004103f0(param_1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


