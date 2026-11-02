/* Module: rmbe3260.dll
   Function: FUN_66057620
   Address: 66057620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66057620(void *this,char *param_1,int param_2)

{
  char *_Source;
  int iVar1;
  size_t _Count;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x15) <= *(int *)((int)this + 8)) {
    return 0;
  }
  if (*param_1 != '\0') {
    if (0 < param_2) {
      do {
        if (*param_1 == '\0') break;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    if (param_2 <= iVar2) {
      return 0;
    }
    *param_1 = '\0';
  }
  _Source = *(char **)(*(int *)((int)this + 0x19) + *(int *)((int)this + 8) * 4);
  _Count = *(int *)(*(int *)((int)this + 0x19) + 4 + *(int *)((int)this + 8) * 4) - (int)_Source;
  if (param_2 <= (int)(_Count + iVar2)) {
    _Count = param_2 - iVar2;
  }
  strncpy(param_1,_Source,_Count);
  param_1[_Count] = '\0';
  iVar1 = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 8) = iVar1;
  iVar1 = *(int *)(*(int *)((int)this + 0x19) + iVar1 * 4);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return iVar2 + _Count;
  }
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar2 + _Count;
}


