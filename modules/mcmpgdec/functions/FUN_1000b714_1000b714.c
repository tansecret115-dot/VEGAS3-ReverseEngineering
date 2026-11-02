/* Module: mcmpgdec.dll
   Function: FUN_1000b714
   Address: 1000b714
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1000b714(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1000a380(param_1);
  if ((param_4 == 0) || (uVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10003a04((int *)(param_1 + 0x66c),param_4);
  }
  FUN_1000b810(param_2,(byte)param_4,uVar1,uVar2,param_8);
  if (param_6 != 0) {
    uVar3 = FUN_1000a750(param_1);
    *param_3 = uVar3;
  }
  uVar1 = FUN_1000a380(param_1);
  if ((param_5 == 0) || (uVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10003a04((int *)(param_1 + 0x66c),param_5);
  }
  if (param_7 != 0) {
    param_2[1] = param_2[1] >> 1;
  }
  FUN_1000b810(param_2 + 1,(byte)param_5,uVar1,uVar2,param_8);
  if (param_7 != 0) {
    param_2[1] = param_2[1] * 2;
  }
  if (param_6 != 0) {
    uVar3 = FUN_1000a750(param_1);
    param_3[1] = uVar3;
  }
  return;
}


