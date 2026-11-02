/* Module: mcmpgdec.dll
   Function: FUN_1000671c
   Address: 1000671c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000671c(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10004a58();
  if (((uVar1 & 0x200) == 0) && ((uVar1 & 0x100) == 0)) {
    if ((char)uVar1 < '\0') {
      PTR_PTR_10030b40 = (undefined *)&PTR_LAB_10030b00;
    }
    else if ((uVar1 & 0x20) == 0) {
      PTR_PTR_10030b40 = (undefined *)&PTR_LAB_10030ac0;
    }
    else {
      PTR_PTR_10030b40 = (undefined *)&PTR_FUN_10030ae0;
    }
  }
  else {
    PTR_PTR_10030b40 = (undefined *)&PTR_LAB_10030b20;
  }
  return;
}


