/* Module: stl2plg.dll
   Function: FUN_00401db0
   Address: 00401db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401db0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x88] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    param_1[0x88] = iVar2;
    if (iVar2 != 0) {
      FUN_004025a0();
    }
  }
  puVar1 = (undefined4 *)param_1[0x88];
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_00465228,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


