/* Module: sfcdi.dll
   Function: FUN_5bf18650
   Address: 5bf18650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5bf18650(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = FUN_5bf38160(param_1);
  return (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}


