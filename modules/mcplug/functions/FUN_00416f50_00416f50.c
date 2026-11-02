/* Module: mcplug.dll
   Function: FUN_00416f50
   Address: 00416f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00416f50(int *param_1)

{
  void *this;
  int iVar1;
  undefined2 **ppuVar2;
  undefined2 *local_798 [2];
  int local_790;
  int local_78c;
  undefined4 *local_788;
  undefined4 *local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  int local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750 [6];
  undefined4 local_738 [7];
  uchar local_71c [258];
  undefined2 uStack_61a;
  undefined1 local_618 [518];
  undefined2 uStack_412;
  undefined1 local_410 [518];
  undefined2 uStack_20a;
  undefined1 local_208 [520];
  
  this = DAT_00487a70;
  if (param_1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  if (DAT_00487a70 == (void *)0x0) {
    return -0x7fffbffb;
  }
  ppuVar2 = local_798;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = (undefined2 *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  local_798[0] = *(undefined2 **)((int)DAT_00487a70 + 0x30);
  local_798[1] = *(undefined2 **)((int)DAT_00487a70 + 0x34);
  local_780 = *(undefined4 *)((int)DAT_00487a70 + 0x38);
  local_77c = *(undefined4 *)((int)DAT_00487a70 + 0x2c);
  iVar1 = FUN_00468f40(DAT_00487a70,local_738,local_750);
  if (-1 < iVar1) {
    local_788 = local_738;
    local_784 = local_750;
    local_778 = *(undefined4 *)((int)this + 0x678);
    local_774 = *(undefined4 *)((int)this + 0x800);
    local_770 = *(undefined4 *)((int)this + 0xc04);
    iVar1 = FUN_00468e50(this,local_71c,0x104);
    if (-1 < iVar1) {
      iVar1 = lstrlenA((LPCSTR)local_71c);
      iVar1 = iVar1 + 1;
      MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,(LPWSTR)local_410,iVar1);
      local_790 = (int)local_410;
      (&uStack_412)[iVar1] = 0;
      local_78c = iVar1;
      iVar1 = FUN_00468ef0(this,local_71c,0x104);
      if (-1 < iVar1) {
        iVar1 = lstrlenA((LPCSTR)local_71c);
        iVar1 = iVar1 + 1;
        MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,(LPWSTR)local_618,iVar1);
        local_76c = (int)local_618;
        (&uStack_61a)[iVar1] = 0;
        local_768 = iVar1;
        iVar1 = FUN_00468ea0(this,local_71c,0x104);
        if (-1 < iVar1) {
          iVar1 = lstrlenA((LPCSTR)local_71c);
          iVar1 = iVar1 + 1;
          MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,(LPWSTR)local_208,iVar1);
          local_764 = (int)local_208;
          (&uStack_20a)[iVar1] = 0;
          local_760 = iVar1;
          local_75c = FUN_00468fc0();
          local_758 = *(undefined4 *)((int)this + 0x7cc);
          local_754 = *(undefined4 *)((int)this + 0x7f4);
          iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_798);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,400);
          }
        }
      }
    }
  }
  return iVar1;
}


