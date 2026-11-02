/* Module: rn5a3260.dll
   Function: FUN_628a1f20
   Address: 628a1f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a1f20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_628a6a88;
    piVar1[1] = 0;
    FUN_628a4fa0(piVar1 + 2,10);
    FUN_628a4fa0(piVar1 + 9,10);
    FUN_628a4fa0(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_628a6a48;
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    FUN_628a1ee0((int *)*param_2,s_PluginType_628a70f0,s_Authenticator_628a70fc);
    FUN_628a1ee0((int *)*param_2,s_PluginID_628a70d8,s_rn_auth_rn5_628a70e4);
    FUN_628a1ee0((int *)*param_2,s_AuthenticationProtocolID_628a70bc,&DAT_628a70a4);
    return 0;
  }
  return 0x8007000e;
}


