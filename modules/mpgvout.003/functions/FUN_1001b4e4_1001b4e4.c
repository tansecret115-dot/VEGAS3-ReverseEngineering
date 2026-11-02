/* Module: mpgvout.003
   Function: FUN_1001b4e4
   Address: 1001b4e4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1001b4e4(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10001a78();
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


