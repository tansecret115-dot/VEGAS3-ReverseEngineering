/* Module: rmme3260.dll
   Function: FUN_662340c0
   Address: 662340c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_662340c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_2)(param_2,&DAT_6626ac38,param_1 + 0x10);
  return -(uint)(iVar1 != 0) & 0x80070057;
}


