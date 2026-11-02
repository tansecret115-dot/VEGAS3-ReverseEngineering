/* Module: vegas30.exe
   Function: FUN_0047a280
   Address: 0047a280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047a280(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_4 <= param_2) {
    iVar1 = param_4;
  }
  *param_1 = iVar1;
  if (param_2 <= param_4) {
    param_2 = param_4;
  }
  param_1[2] = param_2;
  iVar2 = param_3;
  if (param_5 <= param_3) {
    iVar2 = param_5;
  }
  param_1[1] = iVar2;
  if (param_3 <= param_5) {
    param_3 = param_5;
  }
  param_1[3] = param_3;
  if ((iVar1 != param_2) && (param_3 != iVar2)) {
    return 1;
  }
  return 0;
}


