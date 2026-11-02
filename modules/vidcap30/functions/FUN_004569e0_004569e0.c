/* Module: vidcap30.exe
   Function: FUN_004569e0
   Address: 004569e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004569e0(undefined4 param_1,LPSTR param_2,int param_3)

{
  CHAR local_208 [259];
  undefined1 local_105;
  CHAR local_104 [259];
  undefined1 local_1;
  
  lstrcpynA(local_104,param_2,0x104);
  local_1 = 0;
  lstrcpynA(local_208,param_2,0x104);
  local_105 = 0;
  _SfDialogBoxParam_20(DAT_005ba2a0,0x1f0,param_1,FUN_00456a70,local_208);
  lstrcpynA(param_2,local_104,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


