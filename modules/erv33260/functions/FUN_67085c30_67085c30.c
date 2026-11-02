/* Module: erv33260.dll
   Function: FUN_67085c30
   Address: 67085c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67085c30(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*(uint *)((int)param_1 + param_3 * 2);
  uVar2 = (ulonglong)*(uint *)((int)param_1 + param_3 * 3);
  psubusb((ulonglong)*param_2,(ulonglong)*param_1);
  psubusb((ulonglong)*param_1,(ulonglong)*param_2);
  psubusb((ulonglong)param_2[4],(ulonglong)*(uint *)((int)param_1 + param_3));
  psubusb((ulonglong)*(uint *)((int)param_1 + param_3),(ulonglong)param_2[4]);
  psubusb((ulonglong)param_2[8],uVar1);
  psubusb(uVar1,(ulonglong)param_2[8]);
  psubusb((ulonglong)param_2[0xc],uVar2);
  psubusb(uVar2,(ulonglong)param_2[0xc]);
  return;
}


