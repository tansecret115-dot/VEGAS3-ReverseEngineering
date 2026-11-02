/* Module: encn3260.dll
   Function: FUN_6649e3f0
   Address: 6649e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6649e3f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_2)(param_2,&DAT_664dcdd0,param_1 + 0x10);
  return -(uint)(iVar1 != 0) & 0x80070057;
}


