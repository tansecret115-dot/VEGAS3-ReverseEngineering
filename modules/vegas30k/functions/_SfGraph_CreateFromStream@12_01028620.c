/* Module: vegas30k.dll
   Function: _SfGraph_CreateFromStream@12
   Address: 01028620
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGraph_CreateFromStream_12(undefined4 *param_1,LPSTREAM param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  CLSID local_10;
  
                    /* 0x28620  999  _SfGraph_CreateFromStream@12 */
  ReadClassStm(param_2,&local_10);
  iVar1 = _SfAudio_CreateGraphObject_4(param_1);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(*(int *)*param_1 + 0xc0))((int *)*param_1,param_3);
    iVar1 = (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,param_2);
    (**(code **)(*(int *)*param_1 + 0xc0))((int *)*param_1,uVar2);
    if (iVar1 < 0) {
      (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
      *param_1 = 0;
    }
  }
  return iVar1;
}


