/* Module: sfcdi.dll
   Function: FUN_5bf3f300
   Address: 5bf3f300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3f300(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_5bf3e580(param_1,"VCD");
  if (iVar1 != 0) {
    iVar1 = FUN_5bf3e580(iVar1,"PSD.VCD");
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x350);
    }
  }
  return 0;
}


