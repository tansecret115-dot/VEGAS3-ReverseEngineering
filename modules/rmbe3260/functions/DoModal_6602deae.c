/* Module: rmbe3260.dll
   Function: DoModal
   Address: 6602deae
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __thiscall
CPNMessageBox::DoModal
          (CPNMessageBox *this,CPNWindow *param_1,char *param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602deae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = DoModal(this,param_1,param_2,param_3,param_4);
  return uVar1;
}


