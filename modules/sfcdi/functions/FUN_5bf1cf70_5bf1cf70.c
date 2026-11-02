/* Module: sfcdi.dll
   Function: FUN_5bf1cf70
   Address: 5bf1cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1cf70(int param_1,uint param_2,char *param_3,uint param_4)

{
  BYTE local_104 [260];
  
  SfOpenFile_GetPathName(param_3,param_4,(char *)local_104,0x104);
  FUN_5bf21d50(param_1,param_2,local_104);
  return 0;
}


