/* Module: erv33260.dll
   Function: FUN_67088410
   Address: 67088410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67088410(uint *param_1,uint *param_2,int param_3)

{
  psadbw((ulonglong)*param_1,(ulonglong)*param_2);
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3),(ulonglong)*(uint *)((int)param_2 + param_3));
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3 * 2),
         (ulonglong)*(uint *)((int)param_2 + param_3 * 2));
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3 * 3),
         (ulonglong)*(uint *)((int)param_2 + param_3 * 3));
  return;
}


