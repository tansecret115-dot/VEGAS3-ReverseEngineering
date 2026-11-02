/* Module: sfcdi.dll
   Function: FUN_5bf1c700
   Address: 5bf1c700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1c700(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  
  puVar1 = (uint *)GetWindowLongA(param_1,-0x15);
  if (puVar1 == (uint *)0x0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_5bf1c840(param_1,param_4,0x15e);
      return uVar2;
    }
  }
  else if (param_2 == 0xf) {
    FUN_5bf1bae0(param_1,(int)puVar1);
  }
  else if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff2f:
      FUN_5bf1bb90(param_1,(int)puVar1,0x15e);
      return 1;
    case 0xffffff30:
      FUN_5bf1bc50((int)puVar1);
      return 1;
    case 0xffffff31:
      FUN_5bf1bc30(puVar1);
      return 1;
    case 0xffffff32:
      FUN_5bf1bc20((int *)puVar1);
      return 1;
    case 0xffffff38:
      FUN_5bf1c200(param_1,(int)puVar1);
      FUN_5bf1bbd0(param_1,puVar1);
      PostMessageA(param_1,0x545,0,0);
      return 1;
    }
  }
  else if (param_2 == 0x545) {
    FUN_5bf1c490(param_1,(int)puVar1);
    return 0;
  }
  return 0;
}


