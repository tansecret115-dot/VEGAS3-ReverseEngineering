/* Module: pncrt.dll
   Function: FUN_7802fcc0
   Address: 7802fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __cdecl FUN_7802fcc0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int local_28 [4];
  char local_18 [24];
  
  FUN_7802fa20(*param_1,param_1[1],local_28,local_18);
  FUN_78018100(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_7802fd40(param_2,param_3,param_4,local_28,'\0');
  return param_2;
}


