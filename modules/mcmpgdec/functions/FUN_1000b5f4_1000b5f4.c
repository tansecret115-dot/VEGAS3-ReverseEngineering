/* Module: mcmpgdec.dll
   Function: FUN_1000b5f4
   Address: 1000b5f4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1000b5f4(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  
  if (param_6 == 1) {
    if ((param_7 == 0) && (param_10 == 0)) {
      uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),1);
      *(uint *)(param_4 + param_5 * 4) = uVar1;
      *(uint *)(param_4 + 8 + param_5 * 4) = uVar1;
    }
    FUN_1000b714(param_1,(int *)(param_2 + param_5 * 8),param_3,param_8,param_9,param_10,param_11,0)
    ;
    *(undefined4 *)(param_2 + 0x10 + param_5 * 8) = *(undefined4 *)(param_2 + param_5 * 8);
    *(undefined4 *)(param_2 + 0x14 + param_5 * 8) = *(undefined4 *)(param_2 + 4 + param_5 * 8);
  }
  else {
    uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),1);
    *(uint *)(param_4 + param_5 * 4) = uVar1;
    FUN_1000b714(param_1,(int *)(param_5 * 8 + param_2),param_3,param_8,param_9,param_10,param_11,0)
    ;
    uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),1);
    *(uint *)(param_4 + 8 + param_5 * 4) = uVar1;
    FUN_1000b714(param_1,(int *)(param_2 + 0x10 + param_5 * 8),param_3,param_8,param_9,param_10,
                 param_11,0);
  }
  return;
}


