/* Module: vidcap30.exe
   Function: FUN_00487750
   Address: 00487750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00487750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  int *piVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x46c);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)&PTR_LAB_00595074;
    piVar1[2] = (int)&PTR_LAB_0059503c;
    piVar1[3] = (int)&PTR_LAB_00595024;
    piVar1[4] = (int)&PTR_LAB_0059500c;
    piVar1[5] = (int)&PTR_LAB_00594fec;
    piVar1[6] = (int)&PTR_LAB_00594fd0;
    piVar1[7] = (int)&PTR_LAB_00594fc0;
    piVar1[8] = (int)&PTR_LAB_00594fac;
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
    *piVar1 = (int)&PTR_FUN_00594f04;
    piVar1[1] = (int)&PTR_LAB_00594edc;
    piVar1[2] = (int)&PTR_LAB_00594ea4;
    piVar1[3] = (int)&PTR_LAB_00594e8c;
    piVar1[4] = (int)&PTR_LAB_00594e74;
    piVar1[5] = (int)&PTR_LAB_00594e54;
    piVar1[6] = (int)&PTR_LAB_00594e38;
    piVar1[7] = (int)&PTR_LAB_00594e28;
    piVar1[8] = (int)&PTR_LAB_00594e14;
    (**(code **)*piVar1)(piVar1,param_2,param_3);
    uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_7,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0x80004002;
}


