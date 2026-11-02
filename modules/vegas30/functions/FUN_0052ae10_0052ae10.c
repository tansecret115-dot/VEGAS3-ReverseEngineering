/* Module: vegas30.exe
   Function: FUN_0052ae10
   Address: 0052ae10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0052ae10(undefined4 param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  int local_124;
  CHAR local_120 [259];
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  piVar2 = &local_124;
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (param_6 < 0) {
    param_6 = 0;
  }
  local_1c = param_3;
  local_18 = param_4;
  local_14 = param_5;
  local_124 = param_6;
  lstrcpynA(local_120,param_2,0x104);
  local_1d = 0;
  local_c = param_7;
  local_4 = param_9;
  local_10 = 1;
  iVar1 = FUN_00412220(param_1,0x309,0,&PTR_LAB_00644af8,local_120,param_8,param_6,0,0x140,
                       &local_124);
  return iVar1 == 2;
}


