/* Module: rmbe3260.dll
   Function: DoModal
   Address: 6602dcd4
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __thiscall CPNDialog::DoModal(CPNDialog *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602dcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = DoModal(this);
  return uVar1;
}


