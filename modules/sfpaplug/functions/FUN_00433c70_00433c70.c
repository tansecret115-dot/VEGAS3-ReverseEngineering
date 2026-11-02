/* Module: sfpaplug.dll
   Function: FUN_00433c70
   Address: 00433c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00433c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  int *piVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x46c);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)&PTR_LAB_00454b9c;
    piVar1[2] = (int)&PTR_LAB_00454b64;
    piVar1[3] = (int)&PTR_LAB_00454b4c;
    piVar1[4] = (int)&PTR_LAB_00454b34;
    piVar1[5] = (int)&PTR_LAB_00454b14;
    piVar1[6] = (int)&PTR_LAB_00454af8;
    piVar1[7] = (int)&PTR_LAB_00454ae8;
    piVar1[8] = (int)&PTR_LAB_00454ad4;
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
    *piVar1 = (int)&PTR_FUN_00454a2c;
    piVar1[1] = (int)&PTR_LAB_00454a04;
    piVar1[2] = (int)&PTR_LAB_004549cc;
    piVar1[3] = (int)&PTR_LAB_004549b4;
    piVar1[4] = (int)&PTR_LAB_0045499c;
    piVar1[5] = (int)&PTR_LAB_0045497c;
    piVar1[6] = (int)&PTR_LAB_00454960;
    piVar1[7] = (int)&PTR_LAB_00454950;
    piVar1[8] = (int)&PTR_LAB_0045493c;
    (**(code **)*piVar1)(piVar1,param_2,param_3);
    uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_7,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0x80004002;
}


