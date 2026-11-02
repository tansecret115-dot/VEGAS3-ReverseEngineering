/* Module: wmfplug2.dll
   Function: FUN_0043c9b0
   Address: 0043c9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0043c9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  int *piVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x46c);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)&PTR_LAB_004833bc;
    piVar1[2] = (int)&PTR_LAB_00483384;
    piVar1[3] = (int)&PTR_LAB_0048336c;
    piVar1[4] = (int)&PTR_LAB_00483354;
    piVar1[5] = (int)&PTR_LAB_0047b8dc;
    piVar1[6] = (int)&PTR_LAB_00483338;
    piVar1[7] = (int)&PTR_LAB_00483328;
    piVar1[8] = (int)&PTR_LAB_00483314;
    piVar1[0xd] = -1;
    piVar1[0xe] = -1;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xc] = 0;
    piVar1[0xf] = 0;
    piVar1[0x10] = 0;
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    piVar1[0x96] = 0x1c;
    piVar1[0x97] = 0;
    *piVar1 = (int)&PTR_FUN_0048326c;
    piVar1[1] = (int)&PTR_LAB_00483244;
    piVar1[2] = (int)&PTR_LAB_0048320c;
    piVar1[3] = (int)&PTR_LAB_004831f4;
    piVar1[4] = (int)&PTR_LAB_004831dc;
    piVar1[5] = (int)&PTR_LAB_004831bc;
    piVar1[6] = (int)&PTR_LAB_004831a0;
    piVar1[7] = (int)&PTR_LAB_00483190;
    piVar1[8] = (int)&PTR_LAB_0048317c;
    (**(code **)*piVar1)(piVar1,param_2,param_3);
    uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_7,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0x80004002;
}


