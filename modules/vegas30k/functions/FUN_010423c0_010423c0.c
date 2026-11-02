/* Module: vegas30k.dll
   Function: FUN_010423c0
   Address: 010423c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_010423c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  int *piVar1;
  undefined4 uVar2;
  
  hMem = GlobalAlloc(0x40,0x46c);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)&PTR_LAB_011dd624;
    piVar1[2] = (int)&PTR_LAB_011dd5ec;
    piVar1[3] = (int)&PTR_LAB_011dd5d4;
    piVar1[4] = (int)&PTR_LAB_011dd5bc;
    piVar1[5] = (int)&PTR_LAB_011dd59c;
    piVar1[6] = (int)&PTR_LAB_011dd580;
    piVar1[7] = (int)&PTR_LAB_011dd570;
    piVar1[8] = (int)&PTR_LAB_011dd55c;
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
    *piVar1 = (int)&PTR_FUN_011dd4b4;
    piVar1[1] = (int)&PTR_LAB_011dd48c;
    piVar1[2] = (int)&PTR_LAB_011dd454;
    piVar1[3] = (int)&PTR_LAB_011dd43c;
    piVar1[4] = (int)&PTR_LAB_011dd424;
    piVar1[5] = (int)&PTR_LAB_011dd404;
    piVar1[6] = (int)&PTR_LAB_011dd3e8;
    piVar1[7] = (int)&PTR_LAB_011dd3d8;
    piVar1[8] = (int)&PTR_LAB_011dd3c4;
    (**(code **)*piVar1)(piVar1,param_2,param_3);
    uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_7,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0x80004002;
}


