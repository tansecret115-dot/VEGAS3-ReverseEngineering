/* Module: pncrt.dll
   Function: FUN_7802fe40
   Address: 7802fe40
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_7802fe40(undefined4 *param_1,char *param_2,uint param_3)

{
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_7802fa20(*param_1,param_1[1],&local_28,local_18);
  FUN_78018100(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_7802feb0(param_2,param_3,&local_28,'\0');
  return param_2;
}


