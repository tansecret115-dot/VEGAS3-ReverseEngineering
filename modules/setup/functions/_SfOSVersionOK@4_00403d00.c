/* Module: Setup.exe
   Function: _SfOSVersionOK@4
   Address: 00403d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfOSVersionOK_4(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  
                    /* 0x3d00  306  _SfOSVersionOK@4 */
  uVar1 = 0;
  uVar2 = 0;
  DVar3 = 1;
  switch(param_1) {
  case 1:
    FUN_00403c20(1,4,1,0);
    return;
  case 2:
    FUN_00403c20(1,4,1,1);
    return;
  case 4:
    DVar3 = 2;
  case 0:
    FUN_00403c20(DVar3,4,0,0);
    return;
  case 5:
    FUN_00403c20(2,5,0,0);
    return;
  case 6:
    DVar3 = 2;
    uVar1 = 5;
    uVar2 = 1;
  default:
    FUN_00403c20(DVar3,uVar1,uVar2,0);
    return;
  }
}


