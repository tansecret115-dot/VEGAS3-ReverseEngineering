/* Module: vegas30k.dll
   Function: FUN_0107ecf0
   Address: 0107ecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107ecf0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short sStack00000014;
  undefined2 uStack00000016;
  int local_4;
  
  iVar4 = 0;
  if (-1 < param_3 + -1) {
    psVar3 = (short *)(param_1 + (param_3 + -1) * 3);
    local_4 = param_3;
    do {
      sStack00000014 = *psVar3 << 8;
      param_3._1_2_ = (undefined2)((uint3)*(undefined3 *)psVar3 >> 8);
      uStack00000016 = param_3._1_2_;
      iVar1 = ftol();
      if (iVar1 < -0x800000) {
        iVar2 = -0x800000;
      }
      else {
        iVar2 = 0x7fffff;
        if (iVar1 < 0x800000) {
          iVar2 = iVar1;
        }
      }
      *psVar3 = (short)iVar2;
      iVar4 = iVar4 + 1;
      *(char *)(psVar3 + 1) = (char)((uint)iVar2 >> 0x10);
      if (param_4 == iVar4) {
        iVar4 = 0;
      }
      psVar3 = (short *)((int)psVar3 + -3);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


