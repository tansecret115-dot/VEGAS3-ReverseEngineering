/* Module: vidcap30.exe
   Function: FUN_004289c0
   Address: 004289c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004289c0(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *unaff_retaddr;
  undefined4 local_158;
  uint local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 auStack_134 [2];
  undefined8 uStack_12c;
  CHAR aCStack_10c [268];
  
  local_148 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  if ((*param_1 == 8) && ((param_1[0x53] & 0x80U) != 0)) {
    local_150 = 0;
    local_158 = 0;
    local_154 = 0;
    local_148 = 0;
    local_14c = 0;
    local_144._0_4_ = 0x1019;
    local_148 = (**(code **)(*(int *)param_1[0xf4] + 0x1c))((int *)param_1[0xf4],&local_158);
    if (-1 < local_148) {
      aCStack_10c[0] = '\0';
      wsprintfA(aCStack_10c,"%.2x:%.2x:%.2x.%.2x",local_154 >> 0x18,local_154 >> 0x10 & 0xff,
                local_154 >> 8 & 0xff,local_154 & 0xff);
      uStack_13c = *(undefined8 *)(param_1 + 0xda);
      puVar2 = auStack_134;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      auStack_134[0] = 0xffffffff;
      uStack_12c = uStack_13c;
      FUN_0045ada0(auStack_134);
      local_144 = _SfTextToNanoTimeToken_16(aCStack_10c,auStack_134,0,0);
      uVar3 = ftol();
      *(undefined8 *)(param_1 + 0xe8) = uVar3;
      *unaff_retaddr = param_1[0xe8];
      unaff_retaddr[1] = param_1[0xe9];
      if (param_3 != (int *)0x0) {
        local_154 = 0;
        local_14c = 0x13b7;
        local_148 = (**(code **)(*(int *)param_1[0xf4] + 0x1c))
                              ((int *)param_1[0xf4],&stack0xfffffea0);
        if (-1 < local_148) {
          param_1[0x148] = unaff_EBX;
          param_1[0x149] = 0;
          *param_3 = param_1[0x148];
          param_3[1] = param_1[0x149];
          return local_148;
        }
      }
    }
  }
  return local_148;
}


