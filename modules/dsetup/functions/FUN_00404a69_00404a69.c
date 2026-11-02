/* Module: dsetup.dll
   Function: FUN_00404a69
   Address: 00404a69
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00404a69(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_0040a350 == param_1) {
    PTR_LOOP_0040a350 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00408330) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_0040b044,0,param_1);
    return;
  }
  DAT_00408340 = 0xffffffff;
  return;
}


