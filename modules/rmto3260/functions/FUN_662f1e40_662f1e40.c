/* Module: rmto3260.dll
   Function: FUN_662f1e40
   Address: 662f1e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f1e40(void *this,char *param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint _OpenFlag;
  
  if (-1 < *(int *)((int)this + 8)) {
    _close(*(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_2 & 0x200) != 0) {
    if (param_3 == 0) {
      uVar1 = param_2 | 0x8000;
    }
    else {
      uVar1 = param_2 | 0x4000;
    }
    iVar2 = _sopen(param_1,(uint)uVar1,0x10,0x180);
    *(int *)((int)this + 8) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)((int)this + 4) = 0x80040008;
      return 0x80040008;
    }
    _close(iVar2);
  }
  if (param_3 == 0) {
    _OpenFlag = param_2 | 0x8000;
  }
  else {
    _OpenFlag = param_2 | 0x4000;
  }
  iVar2 = _open(param_1,_OpenFlag,0x180);
  *(int *)((int)this + 8) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 4) = 0x80040008;
    return 0x80040008;
  }
  return 0;
}


