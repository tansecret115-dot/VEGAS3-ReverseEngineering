/* Module: rmbe3260.dll
   Function: DoModal
   Address: 6602e016
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __thiscall
CPNPropertySheet::DoModal(CPNPropertySheet *this,CPNWindow *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602e016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = DoModal(this,param_1,param_2,param_3);
  return uVar1;
}


