/* Module: vidcap30.exe
   Function: FUN_00584130
   Address: 00584130
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00584130(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  while (iVar1 = FUN_005827e0(), iVar1 != 0) {
    FUN_00582830(0x8000ffff);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 < 0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_00582830(iVar1);
    return true;
  }
  FUN_00582830(0);
  do {
    iVar1 = FUN_005827e0();
    switch(iVar1) {
    case 1:
    case 2:
      FUN_00582830(0);
      (**(code **)(*param_1 + 0x18))();
      goto LAB_005841b4;
    case 3:
    case 4:
      uVar2 = 0;
      break;
    default:
      uVar2 = 0x80004001;
    }
    FUN_00582830(uVar2);
LAB_005841b4:
    if (iVar1 == 4) {
      iVar1 = (**(code **)(*param_1 + 0x10))();
      return iVar1 < 0;
    }
  } while( true );
}


