/* Module: basc3260.dll
   Function: FUN_627f1ed0
   Address: 627f1ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f1ed0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_627f5a88;
    piVar1[1] = 0;
    FUN_627f3e70(piVar1 + 2,10);
    FUN_627f3e70(piVar1 + 9,10);
    FUN_627f3e70(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_627f5a48;
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    FUN_627f1e90((int *)*param_2,s_PluginType_627f6108,s_Authenticator_627f6114);
    FUN_627f1e90((int *)*param_2,s_PluginID_627f60ec,s_rn_auth_basic_627f60f8);
    FUN_627f1e90((int *)*param_2,s_AuthenticationProtocolID_627f60d0,s_Basic_627f60b4);
    return 0;
  }
  return 0x8007000e;
}


