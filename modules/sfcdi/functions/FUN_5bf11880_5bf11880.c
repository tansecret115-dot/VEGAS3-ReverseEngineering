/* Module: sfcdi.dll
   Function: FUN_5bf11880
   Address: 5bf11880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf11880(int param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uchar local_4c8 [40];
  CHAR local_4a0 [79];
  undefined1 local_451;
  CHAR local_450 [79];
  undefined1 local_401;
  uchar local_400 [1024];
  
  lstrcpynA(local_450,(LPCSTR)(param_1 + 0x514),0x50);
  local_401 = 0;
  FUN_5bf116c0(local_450);
  lstrcpynA(local_4a0,(LPCSTR)(param_1 + 0x618),0x50);
  local_451 = 0;
  FUN_5bf116c0(local_4a0);
  uVar1 = FUN_5bf2bb90(param_3);
  FUN_5bf2bbb0(param_3,0);
  FUN_5bf25750(local_400,(BYTE *)"cddb+query+%08x+%d+");
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_5bf2bbb0(param_3,uVar2);
      FUN_5bf25750(local_4c8,"%d+");
      _mbscat(local_400,local_4c8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_5bf25750(local_4c8,"%d");
  _mbscat(local_400,local_4c8);
  FUN_5bf25750(param_2,(BYTE *)(s_TITLPERFWRITCOMPARNGMSSGISRChttp_5bf64610 + 0x1c));
  return 0;
}


