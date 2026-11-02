/* Module: sfcdi.dll
   Function: FUN_5bf3d640
   Address: 5bf3d640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3d640(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  uVar1 = 0;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  return uVar1;
}


