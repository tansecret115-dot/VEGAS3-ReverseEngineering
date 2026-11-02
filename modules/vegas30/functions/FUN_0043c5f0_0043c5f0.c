/* Module: vegas30.exe
   Function: FUN_0043c5f0
   Address: 0043c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_0043c5f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 **ppuVar3;
  undefined2 *local_798 [2];
  int local_790;
  int local_78c;
  undefined1 *local_788;
  undefined1 *local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined1 local_750 [24];
  undefined1 local_738 [28];
  CHAR local_71c [258];
  undefined2 uStack_61a;
  undefined1 local_618 [518];
  undefined2 uStack_412;
  undefined1 local_410 [518];
  undefined2 uStack_20a;
  undefined1 local_208 [520];
  
  iVar1 = DAT_0064b4f8;
  if (param_1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  ppuVar3 = local_798;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar3 = (undefined2 *)0x0;
    ppuVar3 = ppuVar3 + 1;
  }
  local_798[0] = *(undefined2 **)(DAT_0064b4f8 + 0x30);
  local_798[1] = *(undefined2 **)(DAT_0064b4f8 + 0x34);
  local_780 = *(undefined4 *)(DAT_0064b4f8 + 0x38);
  local_77c = *(undefined4 *)(DAT_0064b4f8 + 0x2c);
  iVar2 = FUN_00600400(local_738,local_750);
  if (-1 < iVar2) {
    local_788 = local_738;
    local_784 = local_750;
    local_778 = *(undefined4 *)(iVar1 + 0x678);
    local_774 = *(undefined4 *)(iVar1 + 0x800);
    local_770 = *(undefined4 *)(iVar1 + 0xc04);
    iVar2 = FUN_00600310(local_71c,0x104);
    if (-1 < iVar2) {
      iVar2 = lstrlenA(local_71c);
      iVar2 = iVar2 + 1;
      MultiByteToWideChar(0,1,local_71c,-1,(LPWSTR)local_410,iVar2);
      local_790 = (int)local_410;
      (&uStack_412)[iVar2] = 0;
      local_78c = iVar2;
      iVar2 = FUN_006003b0(local_71c,0x104);
      if (-1 < iVar2) {
        iVar2 = lstrlenA(local_71c);
        iVar2 = iVar2 + 1;
        MultiByteToWideChar(0,1,local_71c,-1,(LPWSTR)local_618,iVar2);
        local_76c = (int)local_618;
        (&uStack_61a)[iVar2] = 0;
        local_768 = iVar2;
        iVar2 = FUN_00600360(local_71c,0x104);
        if (-1 < iVar2) {
          iVar2 = lstrlenA(local_71c);
          iVar2 = iVar2 + 1;
          MultiByteToWideChar(0,1,local_71c,-1,(LPWSTR)local_208,iVar2);
          local_764 = (int)local_208;
          (&uStack_20a)[iVar2] = 0;
          local_760 = iVar2;
          local_75c = FUN_00600480();
          local_758 = *(undefined4 *)(iVar1 + 0x7cc);
          local_754 = *(undefined4 *)(iVar1 + 0x7f4);
          iVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_798);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,400);
          }
        }
      }
    }
  }
  return iVar2;
}


