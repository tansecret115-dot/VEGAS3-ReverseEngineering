/* Module: vegas30.exe
   Function: FUN_005a2ed0
   Address: 005a2ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005a2ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [40];
  
  iVar1 = FUN_005a2800(param_2,param_3,param_4,param_5,param_6,0,&param_6,local_28);
  if (iVar1 != 0) {
    uVar2 = FUN_005a2f40(param_2,param_1,param_6,iVar1 == 2,param_7,local_28);
    return uVar2;
  }
  return 0;
}


