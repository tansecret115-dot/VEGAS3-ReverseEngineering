/* Module: rnco3260.dll
   Function: FUN_63760ed0
   Address: 63760ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63760ed0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  uint in_stack_00000034;
  uint in_stack_00000038;
  
  iVar1 = *in_stack_00000024;
  iVar2 = in_stack_00000024[1];
  FUN_63763718(in_stack_00000034,in_stack_00000038,in_stack_00000028,in_stack_0000002c);
  if (DAT_63796aa0 != 0) {
    FUN_637632d4(iVar1,iVar2,param_1);
    return 0;
  }
  FUN_63763213(0,iVar1,iVar2,0,(int)param_1,param_4);
  return 0;
}


