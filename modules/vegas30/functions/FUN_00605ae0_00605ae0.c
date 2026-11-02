/* Module: vegas30.exe
   Function: FUN_00605ae0
   Address: 00605ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00605ae0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  if (param_1 != 0) {
    uVar1 = FUN_00601ab0(local_4,&param_1,2);
    switch(uVar1) {
    case 0x4e12e:
    case 0x4e131:
    case 0x4e136:
    case 0x4e137:
      iVar2 = FUN_006002d0();
      return iVar2 == 1;
    case 0x4e12f:
      return true;
    }
  }
  return false;
}


