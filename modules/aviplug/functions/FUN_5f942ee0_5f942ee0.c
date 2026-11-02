/* Module: aviplug.dll
   Function: FUN_5f942ee0
   Address: 5f942ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f942ee0(LPVOID param_1)

{
  HANDLE pvVar1;
  
  if (*(int *)((int)param_1 + 0x660) == 0) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5f942c40,param_1
                          ,0,(LPDWORD)((int)param_1 + 0x664));
    *(HANDLE *)((int)param_1 + 0x660) = pvVar1;
  }
  return (-(uint)(*(int *)((int)param_1 + 0x660) != 0) & 0x7ff8fff2) + 0x8007000e;
}


