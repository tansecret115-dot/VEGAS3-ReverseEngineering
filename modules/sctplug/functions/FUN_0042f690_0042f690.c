/* Module: sctplug.dll
   Function: FUN_0042f690
   Address: 0042f690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f690(undefined4 *param_1)

{
  int iVar1;
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
  iVar1 = FUN_0042f3b0(param_1);
  ftol(uVar2,uVar3,iVar1,0);
  return;
}


