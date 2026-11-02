/* Module: rmme3260.dll
   Function: FUN_6624c670
   Address: 6624c670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624c670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_662352f0(param_1[0x10]);
  if (iVar1 == 0) {
    return 0x80040009;
  }
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,iVar1,param_3,param_4);
  return uVar2;
}


