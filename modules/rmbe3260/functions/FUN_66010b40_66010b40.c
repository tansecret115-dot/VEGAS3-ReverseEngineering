/* Module: rmbe3260.dll
   Function: FUN_66010b40
   Address: 66010b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66010b40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  FUN_6605c7f0(param_1 + 1,10);
  FUN_6605ef20(param_1 + 8,10);
  *param_1 = &PTR_FUN_66064a8c;
  puVar1 = operator_new(0x104);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_66010760(puVar1);
  }
  (**(code **)*piVar2)(piVar2,PTR_s_sipr_sipr2_sipr0_sipr1_sipr3_coo_6606c9b8);
  FUN_66010d70(param_1,piVar2);
  puVar1 = operator_new(0x104);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_66010760(puVar1);
  }
  (**(code **)*piVar2)(piVar2,PTR_s_dnet_dnet8_dnet9_dnet0_dnet1_dne_6606c9bc);
  FUN_66010d70(param_1,piVar2);
  puVar1 = operator_new(0x104);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_66010760(puVar1);
  }
  (**(code **)*piVar2)(piVar2,PTR_s_mp3c_cook8_cook0_cook1_cook2_coo_6606c9c0);
  FUN_66010d70(param_1,piVar2);
  FUN_66010c20(PTR_s_cook__0_cook8__1_cook0__2_cook1__6606c9c4);
  FUN_66010c20(PTR_s_atrc__0_cook23__1_cook24__2_cook_6606c9c8);
  return param_1;
}


