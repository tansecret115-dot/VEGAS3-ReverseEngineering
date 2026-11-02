/* Module: g2plug.dll
   Function: FUN_5f833660
   Address: 5f833660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f833660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  int *piVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x46c);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)&PTR_LAB_5f870914;
    piVar1[2] = (int)&PTR_LAB_5f8708dc;
    piVar1[3] = (int)&PTR_LAB_5f8708c4;
    piVar1[4] = (int)&PTR_LAB_5f8708ac;
    piVar1[5] = (int)&PTR_LAB_5f87088c;
    piVar1[6] = (int)&PTR_LAB_5f870870;
    piVar1[7] = (int)&PTR_LAB_5f870860;
    piVar1[8] = (int)&PTR_LAB_5f87084c;
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
    *piVar1 = (int)&PTR_FUN_5f8707a4;
    piVar1[1] = (int)&PTR_LAB_5f87077c;
    piVar1[2] = (int)&PTR_LAB_5f870744;
    piVar1[3] = (int)&PTR_LAB_5f87072c;
    piVar1[4] = (int)&PTR_LAB_5f870714;
    piVar1[5] = (int)&PTR_LAB_5f8706f4;
    piVar1[6] = (int)&PTR_LAB_5f8706d8;
    piVar1[7] = (int)&PTR_LAB_5f8706c8;
    piVar1[8] = (int)&PTR_LAB_5f8706b4;
    (**(code **)*piVar1)(piVar1,param_2,param_3);
    uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_7,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0x80004002;
}


