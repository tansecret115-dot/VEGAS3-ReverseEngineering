/* Module: vegas30.exe
   Function: FUN_005d97e0
   Address: 005d97e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d97e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_3 = param_2 + param_3;
  iVar1 = FUN_005d97c0(param_1);
  if (param_3 <= iVar1) {
    while (param_3 = param_3 + -1, param_2 <= param_3) {
      puVar2 = (undefined4 *)FUN_005d9990(param_1,param_3);
      if ((puVar2 != (undefined4 *)0x0) && (*(int *)*puVar2 == 1)) {
        FUN_005d9a60(param_1,param_3);
      }
    }
    return 0;
  }
  return 0x80070057;
}


