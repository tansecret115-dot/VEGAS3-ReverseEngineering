/* Module: erv33260.dll
   Function: FUN_67088460
   Address: 67088460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67088460(uint *param_1,uint *param_2,int param_3)

{
  psadbw((ulonglong)*param_1,(ulonglong)*param_2);
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3),(ulonglong)param_2[4]);
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3 * 2),(ulonglong)param_2[8]);
  psadbw((ulonglong)*(uint *)((int)param_1 + param_3 * 3),(ulonglong)param_2[0xc]);
  return;
}


