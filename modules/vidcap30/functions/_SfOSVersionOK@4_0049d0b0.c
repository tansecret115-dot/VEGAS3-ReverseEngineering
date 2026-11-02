/* Module: vidcap30.exe
   Function: _SfOSVersionOK@4
   Address: 0049d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfOSVersionOK_4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x9d0b0  577  _SfOSVersionOK@4 */
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 1;
  switch(param_1) {
  case 1:
    FUN_0049cfd0(1,4,1,0);
    return;
  case 2:
    FUN_0049cfd0(1,4,1,1);
    return;
  case 4:
    uVar3 = 2;
  case 0:
    FUN_0049cfd0(uVar3,4,0,0);
    return;
  case 5:
    FUN_0049cfd0(2,5,0,0);
    return;
  case 6:
    uVar3 = 2;
    uVar1 = 5;
    uVar2 = 1;
  default:
    FUN_0049cfd0(uVar3,uVar1,uVar2,0);
    return;
  }
}


