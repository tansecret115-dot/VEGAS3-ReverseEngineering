/* Module: vegas30.exe
   Function: FUN_0043e040
   Address: 0043e040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043e040(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0xc614:
    FUN_0043e260();
    return 0;
  case 0xc61b:
    FUN_005fb200(1);
    uVar1 = FUN_00443440(param_1,&param_2);
    return uVar1;
  case 0xc621:
    FUN_0043e510(param_1);
    return 0;
  case 0xc622:
    FUN_005fb200(1);
    FUN_0043df40(param_1);
    uVar1 = FUN_0042d290(param_1);
    return uVar1;
  case 0xc623:
    FUN_005fb200(1);
    FUN_0043df40(param_1);
    uVar1 = FUN_0043dd50(param_1);
    break;
  case 0xc624:
    FUN_005fb200(1);
    FUN_0043df40(param_1);
    uVar1 = FUN_004417a0(param_1);
    return uVar1;
  case 0xc625:
    FUN_005fb200(1);
    FUN_0043df40(param_1);
    uVar1 = FUN_00487a00(param_1);
    return uVar1;
  case 0xc626:
    FUN_005fb200(1);
    FUN_0043df40(param_1);
    uVar1 = FUN_00440680(DAT_00647624);
    return uVar1;
  }
  return uVar1;
}


