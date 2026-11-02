/* Module: wavplug.dll
   Function: FUN_5f3854a0
   Address: 5f3854a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3854a0(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_5f3855f0(param_1);
  *param_2 = (int)puVar1;
  iVar2 = FUN_5f3855a0(param_1);
  if ((-1 < iVar2) && (*(int *)(*param_2 + 0x428) != 0)) {
    *(undefined4 *)(*(int *)(*param_2 + 0x428) + 4) = 0;
  }
  return;
}


