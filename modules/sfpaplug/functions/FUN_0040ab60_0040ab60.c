/* Module: sfpaplug.dll
   Function: FUN_0040ab60
   Address: 0040ab60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ab60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0040b6a0(param_1);
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_0040b650(param_1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


