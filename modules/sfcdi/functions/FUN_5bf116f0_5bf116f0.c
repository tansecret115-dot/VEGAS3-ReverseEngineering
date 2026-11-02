/* Module: sfcdi.dll
   Function: FUN_5bf116f0
   Address: 5bf116f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf116f0(int param_1,uchar *param_2)

{
  CHAR local_2a0 [79];
  undefined1 local_251;
  CHAR local_250 [79];
  undefined1 local_201;
  uchar local_200 [512];
  
  lstrcpynA(local_2a0,(LPCSTR)(param_1 + 0x514),0x50);
  local_251 = 0;
  FUN_5bf116c0(local_2a0);
  lstrcpynA(local_250,(LPCSTR)(param_1 + 0x618),0x50);
  local_201 = 0;
  FUN_5bf116c0(local_250);
  FUN_5bf25750(local_200,(BYTE *)"cddb+read+%s+%08x");
  FUN_5bf25750(param_2,(BYTE *)(s_TITLPERFWRITCOMPARNGMSSGISRChttp_5bf64610 + 0x1c));
  return 0;
}


