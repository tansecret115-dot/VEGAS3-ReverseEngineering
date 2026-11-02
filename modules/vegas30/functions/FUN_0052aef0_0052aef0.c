/* Module: vegas30.exe
   Function: FUN_0052aef0
   Address: 0052aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0052aef0(undefined4 param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 *param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_124;
  CHAR local_120 [259];
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_4;
  
  *param_9 = 0;
  piVar4 = &local_124;
  for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  if (param_6 < 0) {
    param_6 = 0;
  }
  local_1c = param_3;
  local_18 = param_4;
  local_14 = param_5;
  local_124 = param_6;
  lstrcpynA(local_120,param_2,0x104);
  uVar1 = 1;
  local_1d = 0;
  local_4 = 1;
  local_10 = param_7;
  if (param_7 != 0) {
    uVar1 = 9;
  }
  uVar2 = FUN_00411360(CONCAT11(3,uVar1),0,&PTR_LAB_00644af8,local_120,param_8,param_6,0,0x140,
                       &local_124);
  *param_9 = uVar2;
  return 0;
}


