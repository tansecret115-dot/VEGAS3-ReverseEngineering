/* Module: sctplug.dll
   Function: FUN_00408c20
   Address: 00408c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408c20(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_00408d70(param_1);
  *param_2 = (int)puVar1;
  iVar2 = FUN_00408d20(param_1);
  if ((-1 < iVar2) && (*(int *)(*param_2 + 0x428) != 0)) {
    *(undefined4 *)(*(int *)(*param_2 + 0x428) + 4) = 0;
  }
  return;
}


