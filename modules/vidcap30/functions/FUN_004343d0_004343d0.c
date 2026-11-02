/* Module: vidcap30.exe
   Function: FUN_004343d0
   Address: 004343d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004343d0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00408c00(2,0,&PTR_LAB_005b57b0,"Preview Window",0,0,0,0x1bf0,0);
  *(undefined4 *)(DAT_005ba4c0 + 0x6c) = uVar1;
  return;
}


