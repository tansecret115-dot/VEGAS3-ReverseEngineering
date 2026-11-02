/* Module: sfpaplug.dll
   Function: FUN_0040b550
   Address: 0040b550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b550(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0040b6a0(param_1);
  *param_2 = (int)puVar1;
  iVar2 = FUN_0040b650(param_1);
  if ((-1 < iVar2) && (*(int *)(*param_2 + 0x428) != 0)) {
    *(undefined4 *)(*(int *)(*param_2 + 0x428) + 4) = 0;
  }
  return;
}


