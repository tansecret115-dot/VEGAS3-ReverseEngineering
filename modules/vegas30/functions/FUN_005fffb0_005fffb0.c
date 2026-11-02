/* Module: vegas30.exe
   Function: FUN_005fffb0
   Address: 005fffb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fffb0(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 7;
  }
  iVar1 = FUN_006000f0(param_1);
  if (iVar1 < 0) {
    *param_2 = 1;
    *param_1 = param_3;
    uVar2 = FUN_006000d0(param_3);
    return uVar2;
  }
  if (*param_1 == -1) {
    *param_2 = 0;
    return 0;
  }
  if (*param_1 == 0) {
    *param_2 = 1;
    uVar2 = FUN_006000d0(param_3);
    return uVar2;
  }
  *param_2 = 0;
  return 0;
}


