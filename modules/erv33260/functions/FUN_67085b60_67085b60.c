/* Module: erv33260.dll
   Function: FUN_67085b60
   Address: 67085b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67085b60(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = (ulonglong)*(uint *)((int)param_1 + param_3 * 2);
  uVar2 = (ulonglong)*(uint *)((int)param_1 + param_3 * 3);
  uVar3 = (ulonglong)*(uint *)((int)param_2 + param_3 * 2);
  psubusb((ulonglong)*param_2,(ulonglong)*param_1);
  psubusb((ulonglong)*param_1,(ulonglong)*param_2);
  uVar4 = (ulonglong)*(uint *)((int)param_2 + param_3 * 3);
  psubusb((ulonglong)*(uint *)((int)param_2 + param_3),(ulonglong)*(uint *)((int)param_1 + param_3))
  ;
  psubusb((ulonglong)*(uint *)((int)param_1 + param_3),(ulonglong)*(uint *)((int)param_2 + param_3))
  ;
  psubusb(uVar3,uVar1);
  psubusb(uVar1,uVar3);
  psubusb(uVar4,uVar2);
  psubusb(uVar2,uVar4);
  return;
}


