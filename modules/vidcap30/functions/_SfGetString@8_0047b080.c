/* Module: vidcap30.exe
   Function: _SfGetString@8
   Address: 0047b080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetString_8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
                    /* 0x7b080  427  _SfGetString@8 */
  if (*(int *)(param_1 + 0x130) == 0) {
    return &DAT_005bc478;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10c));
  iVar1 = *(int *)(param_1 + 0x124);
  if ((uint)(iVar1 - *(int *)(param_1 + 0x128)) < *(uint *)(param_1 + 300)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    iVar1 = iVar1 - *(uint *)(param_1 + 300);
  }
  puVar2 = (undefined1 *)(*(int *)(param_1 + 300) + *(int *)(param_1 + 0x130));
  iVar1 = _SfLoadString_16(param_1,param_2,puVar2,iVar1);
  if (iVar1 == 0) {
    *puVar2 = 0;
  }
  *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) + 4 + iVar1 & 0xfffffffc;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10c));
  return puVar2;
}


