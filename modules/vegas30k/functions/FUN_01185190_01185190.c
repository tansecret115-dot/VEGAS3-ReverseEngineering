/* Module: vegas30k.dll
   Function: FUN_01185190
   Address: 01185190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall
FUN_01185190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = -2;
  if (*(int *)(param_1 + 0x6ac) != 0) {
    iVar1 = FUN_01195a90(param_1,param_2,param_3,param_4,param_5,param_6);
    iVar2 = iVar1 >> 0x1f;
  }
  return CONCAT44(iVar2,iVar1);
}


