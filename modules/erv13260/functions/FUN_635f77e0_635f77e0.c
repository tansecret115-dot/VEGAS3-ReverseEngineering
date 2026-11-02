/* Module: erv13260.dll
   Function: FUN_635f77e0
   Address: 635f77e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_635f77e0(int *param_1,int *param_2,byte *param_3,uint *param_4,int param_5,int *param_6,
            uint *param_7,int *param_8)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int aiStack_88 [31];
  int *local_c;
  uint local_8;
  
  piVar3 = param_6;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  piVar1 = (int *)param_6[0x74d];
  if (*(int *)((int)param_6 + 0x3a) == 0) {
    iVar5 = param_6[0x741];
    iVar4 = (int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2;
    if (iVar4 < iVar5) {
      param_6[0x741] = iVar5 - iVar4;
      param_5 = param_5 + iVar4;
    }
    else if (0 < iVar5) {
      param_6[0x741] = 0;
      param_5 = param_5 + iVar5;
    }
  }
  local_c = piVar1;
  iVar5 = FUN_635fc650(param_1,0x10,param_2,param_3,param_4,param_6,param_7,param_8);
  uVar2 = local_8;
  if (iVar5 == 0) {
    if (param_3 == (byte *)0x0) {
      iVar5 = piVar1[6] + 0x40;
    }
    else {
      iVar5 = piVar1[6] + (*param_3 + 1) * 0x58;
    }
    piVar1[6] = iVar5;
    iVar5 = FUN_635fb5e0(piVar1);
    aiStack_88[local_8 & 0xff] = iVar5;
    uVar6 = (uint)(param_5 <= iVar5);
    iVar4 = FUN_635f7a10(uVar6,(char *)&local_8);
    while( true ) {
      if (iVar4 == 0) {
        param_6._3_1_ = (char)uVar2;
        if ((param_6._3_1_ != '\x1f') && (uVar6 == 1)) {
          iVar5 = FUN_635fc650(param_1,param_6._3_1_ + 1,param_2,param_3,param_4,piVar3,param_7,
                               param_8);
          iVar4 = FUN_635fb5e0(local_c);
          if (iVar5 != 0) {
            piVar3[0x741] = piVar3[0x741] + param_5;
            return iVar5;
          }
          piVar3[0x741] = piVar3[0x741] + (param_5 - iVar4);
          return 0;
        }
        piVar3[0x741] = piVar3[0x741] + (param_5 - iVar5);
        return 0;
      }
      iVar5 = FUN_635fc650(param_1,(byte)local_8,param_2,param_3,param_4,param_6,param_7,param_8);
      if (iVar5 != 0) break;
      uVar2 = local_8 & 0xff;
      if (param_3 == (byte *)0x0) {
        local_c[6] = local_c[6] + 0x40;
      }
      else {
        local_c[6] = local_c[6] + (*param_3 + 1) * 0x58;
      }
      iVar5 = FUN_635fb5e0(local_c);
      aiStack_88[local_8 & 0xff] = iVar5;
      uVar6 = (uint)(param_5 <= iVar5);
      iVar4 = FUN_635f7a10(uVar6,(char *)&local_8);
    }
  }
  param_6[0x741] = param_6[0x741] + param_5;
  return iVar5;
}


