/* Module: mpgvout.004
   Function: FUN_1001ba50
   Address: 1001ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1001ba50(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10001a80();
  if (((uVar1 & 0x100) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((char)uVar1 < '\0') {
      PTR_PTR_100357b8 = (undefined *)&PTR_LAB_10035778;
    }
    else if ((uVar1 & 0x20) == 0) {
      PTR_PTR_100357b8 = (undefined *)&PTR_LAB_10035738;
    }
    else {
      PTR_PTR_100357b8 = (undefined *)&PTR_FUN_10035758;
    }
  }
  else {
    PTR_PTR_100357b8 = (undefined *)&PTR_LAB_10035798;
  }
  return;
}


