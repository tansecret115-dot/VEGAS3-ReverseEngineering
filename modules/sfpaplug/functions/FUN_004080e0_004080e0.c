/* Module: sfpaplug.dll
   Function: FUN_004080e0
   Address: 004080e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004080e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = FUN_00407ff0(param_1);
  while ((uVar1 == 0 &&
         (iVar2 = iVar2 + 1, *(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + -1))) {
    uVar1 = FUN_00407ff0(param_1);
  }
  uVar1 = FUN_00408040(param_1,param_2);
  return uVar1 + (iVar2 << ((byte)param_2 & 0x1f));
}


