/* Module: vegas30.exe
   Function: FUN_004edcf0
   Address: 004edcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004edcf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x184);
  iVar2 = FUN_004047d0(0x14b5,0);
  FUN_004ec4f0(param_2,0,&param_1,0);
  if (((iVar2 != 0) &&
      (iVar3 = FUN_00404830(*(undefined4 *)(iVar3 + 8),iVar2,&stack0x0000000c,2), iVar3 != 0)) &&
     (iVar2 = FUN_004ed800(uVar1,iVar3), iVar2 == 0)) {
    switch(iVar3) {
    case 0x14b6:
      return 0xb;
    case 0x14b7:
      return 0xc;
    case 0x14b8:
      return 0x15;
    case 0x14b9:
    }
  }
  return 0;
}


