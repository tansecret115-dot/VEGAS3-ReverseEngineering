/* Module: vegas30k.dll
   Function: FUN_0117fed0
   Address: 0117fed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0117fed0(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_01001160(*param_1);
    return iVar1;
  }
  param_1[0x18] = 0;
  MVar2 = timeSetEvent(param_1[0xb],param_1[10],FUN_0117fbe0,(DWORD_PTR)param_1,1);
  param_1[0xc] = MVar2;
  if (MVar2 != 0) {
    timeBeginPeriod(param_1[10]);
  }
  return param_1[0xc];
}


