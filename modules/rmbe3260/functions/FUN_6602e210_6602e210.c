/* Module: rmbe3260.dll
   Function: FUN_6602e210
   Address: 6602e210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602e210(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_66075234 != (int *)0x0) {
    if (DAT_66075230 != 0) {
      (**(code **)(*DAT_66075234 + 0x14))(DAT_66075234,DAT_66075230);
      DAT_66075230 = 0;
    }
    iVar2 = (**(code **)(*DAT_66075234 + 8))(DAT_66075234);
    if ((iVar2 == 0) && (DAT_6607522c != (undefined4 *)0x0)) {
      FUN_660518e0(DAT_6607522c);
    }
    puVar1 = DAT_6607522c;
    DAT_66075234 = (int *)0x0;
    if (DAT_6607522c != (undefined4 *)0x0) {
      FUN_66051720(DAT_6607522c);
      operator_delete(puVar1);
      DAT_6607522c = (undefined4 *)0x0;
    }
  }
  return;
}


