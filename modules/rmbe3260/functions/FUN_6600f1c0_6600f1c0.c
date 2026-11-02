/* Module: rmbe3260.dll
   Function: FUN_6600f1c0
   Address: 6600f1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6600f1c0(undefined4 *param_1)

{
  LSTATUS LVar1;
  CHAR local_10c [256];
  LONG local_c;
  HKEY local_8;
  
  FUN_66015920(param_1);
  FUN_6605cda0(param_1 + 0x35);
  *param_1 = &PTR_FUN_66064990;
  FUN_6605b970(param_1 + 3,s_application_x_pn_realevent_6606c850);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealProducer_SpecialKey_6606c82c,0,0xf003f,
                        &local_8);
  if (LVar1 == 0) {
    local_c = 0xff;
    LVar1 = RegQueryValueA(local_8,s_EventLogging_6606c81c,local_10c,&local_c);
    if (LVar1 == 0) {
      DAT_66075068 = atol(local_10c);
    }
  }
  return param_1;
}


