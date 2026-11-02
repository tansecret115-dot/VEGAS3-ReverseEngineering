/* Module: InstMsi-x86a.exe
   Function: FUN_010077e0
   Address: 010077e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_010077e0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            uint *param_7)

{
  uint uVar1;
  
  param_1[0xac1] = param_3;
  param_1[0xac3] = param_5;
  param_1[0xac2] = param_3 + param_4 + 4;
  FUN_01007ce0((int)param_1);
  uVar1 = FUN_010079c0(param_1,param_2);
  param_1[0xbb3] = param_1[0xbb3] + 1;
  if ((int)uVar1 < 0) {
    *param_7 = 0;
    return 1;
  }
  *param_7 = uVar1;
  param_1[0xac4] = param_1[0xac4] + uVar1;
  return 0;
}


