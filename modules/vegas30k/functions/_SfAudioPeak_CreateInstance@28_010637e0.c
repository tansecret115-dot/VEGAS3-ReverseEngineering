/* Module: vegas30k.dll
   Function: _SfAudioPeak_CreateInstance@28
   Address: 010637e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * _SfAudioPeak_CreateInstance_28
                (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined4 *unaff_retaddr;
  int *local_4;
  
                    /* 0x637e0  719  _SfAudioPeak_CreateInstance@28 */
  local_4 = (int *)0x0;
  hMem = GlobalAlloc(0x40,0x33c);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    *param_1 = 0;
    return (int *)0x8007000e;
  }
  piVar2 = (int *)FUN_0105f550(&local_4,param_2,param_3,param_4,0,0,0,0,param_5,param_6,param_7);
  if (piVar2 == (int *)0x0) {
    *param_1 = 0;
    return (int *)0x8007000e;
  }
  if ((int)local_4 < 0) {
    (**(code **)(*piVar2 + 8))();
    *unaff_retaddr = 0;
    return piVar2;
  }
  *param_1 = piVar2;
  return local_4;
}


