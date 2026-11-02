/* Module: vegas30.exe
   Function: FUN_00570780
   Address: 00570780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00570780(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,uint param_6
            ,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_6 = *(uint *)(param_1 + 0x20) | param_6;
  if ((*(uint *)(param_2 + 600) == param_4) && (param_6 == *(uint *)(param_1 + 0x2a4))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((param_6 == *(uint *)(param_2 + 0x80)) &&
     (*(uint *)(param_2 + 0x90) == ((param_4 & 0xff) << 8 | param_6))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_00468c00(param_3,param_5,2,1,param_7,param_8,param_9,0,1,uVar1,uVar2,param_10,0);
  return;
}


