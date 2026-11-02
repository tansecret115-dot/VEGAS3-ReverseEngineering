/* Module: rmbe3260.dll
   Function: FUN_6602dae0
   Address: 6602dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6602dae0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_66067980;
  puVar1 = FUN_6602dab0();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = &DAT_6602e046;
    puVar1 = FUN_6602dab0();
    FUN_66052ff0(puVar1,puVar2);
  }
  PNGuiInitialize(0);
  FUN_6602e060((char *)0x0);
  FUN_6602e1a0(DAT_66074fe8,0x5dd);
  FUN_6602e1e0(0x5dd);
  FUN_6605b3c0(s_RealProducerSDKLogging_6606df50,s_realpsdk_log_6606df68);
  return param_1;
}


