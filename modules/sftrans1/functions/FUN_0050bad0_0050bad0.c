/* Module: sftrans1.dll
   Function: FUN_0050bad0
   Address: 0050bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050bad0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(*param_1) {
  case 2:
  case 5:
    uVar2 = 0xe2556b28;
    uVar3 = 0x403df853;
    break;
  case 3:
    uVar2 = 0;
    uVar3 = 0x40390000;
    break;
  case 4:
    uVar2 = 0;
    uVar3 = 0x40380000;
    break;
  default:
    uVar2 = 0;
    uVar3 = 0x403e0000;
  }
  uVar1 = FUN_0050b7f0(param_1);
  ftol(uVar2,uVar3,uVar1,0);
  return;
}


