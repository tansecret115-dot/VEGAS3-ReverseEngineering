/* Module: rmbe3260.dll
   Function: AddRef
   Address: 6602dffe
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong XPNTimer::AddRef(void)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602dffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = AddRef();
  return uVar1;
}


